#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUF_SIZE 256

void read_and_write(int file_to_read, int file_to_write, char **av);

/*
* main - copies the content of a file to another file
* @ac: number of arguments
* @av: array of arguments
* Return: 0 on success, 97 on failure
* 98 can't open file_from, 99 can't read file_from
* 100 can't close file_from, 100 can't close file_to
*/
int main(int ac, char **av)
{
	int file_to_read, file_to_write, check = 0;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_to_read = open(av[1], O_RDONLY);
	if (!file_to_read)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	file_to_write = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (!file_to_write)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	read_and_write(file_to_read, file_to_write, av);

	check = close(file_to_read);
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to_read);
		exit(100);
	}
	check = close(file_to_write);
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to_write);
		exit(100);
	}
	return (0);
}

/**
 * read_and_write - reads a file and writes to another file
 * @file_to_read: file to read
 * @file_to_write: file to write to
 * @av: arguments
 */
void read_and_write(int file_to_read, int file_to_write, char **av)
{
	int i = 0, check = 0;
	char buf[BUF_SIZE];

	while (1)
	{
		check = read(file_to_read, buf, BUF_SIZE);
		if (check == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}

		if (check == 0)
			break;

		for (i = 0; i < check; i++)
		{
			int check = write(file_to_write, &buf[i], 1);

			if (check == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
				exit(99);
			}
		}
	}
}
