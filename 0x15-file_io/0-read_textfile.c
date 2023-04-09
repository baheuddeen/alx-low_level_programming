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
	FILE *file_to_read;
	char buffer[BUF_SIZE];


	if (!filename)
		return (counter);

	file_to_read = fopen(filename, "r");

	if (!file_to_read)
	{
		return (counter);
	}

	while (i < letters)
	{
		bytes_read = fread(buffer, sizeof(char), BUF_SIZE, file_to_read);
		if (bytes_read == 0)
			break;
		if (bytes_read < BUF_SIZE)
			buffer[bytes_read] = '\0';
		else
			buffer[BUF_SIZE - 1] = '\0';
		counter += bytes_read;
		i += bytes_read;
		printf("%s", buffer);
	}

	return (counter);
}
