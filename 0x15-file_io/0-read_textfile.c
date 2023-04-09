#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 256

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t counter = 0, i = 0, bytes_read;
	int file_to_read;
	char buffer[BUF_SIZE];


	if (!filename)
		return (counter);

	file_to_read = open(filename, O_RDONLY);

	if (!file_to_read)
	{
		return (counter);
	}

	while ((bytes_read = read(file_to_read, buffer, BUF_SIZE)))
	{
		for (i = 0; counter < letters && i < bytes_read; i++)
		{
			int check = write(STDOUT_FILENO, &buffer[i], 1);
			if(check == -1)
				return (0);
			counter++;
		}
	}

	return (counter);
}
