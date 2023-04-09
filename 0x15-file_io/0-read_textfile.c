#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 11

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t counter = 0;
	FILE *file_to_read;
	char buffer[BUF_SIZE];
	int i = 0, end_of_file = 1;

	if (!filename)
		return (counter);

	file_to_read = fopen(filename, "r");

	if (!file_to_read)
	{
		return (counter);
	}

	while (fread(buffer, BUF_SIZE, 1, file_to_read))
	{
		for (i = 0; counter < letters && i < BUF_SIZE; i++)
		{
			if (!&buffer[i])
				break;
			counter += write(STDOUT_FILENO, &buffer[i], 1);
		}
	}

	return (counter);
}
