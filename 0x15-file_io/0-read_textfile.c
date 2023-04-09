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
	size_t counter = 0, i = 0;
	FILE *file_to_read;
	char buffer[BUF_SIZE];

	if (!filename)
		return (counter);

	file_to_read = fopen(filename, "r");

	if (!file_to_read)
	{
		return (counter);
	}

	while (!feof(file_to_read))
	{
		size_t bytes_read = fread(buffer, 1, BUF_SIZE, file_to_read);
		
		for (i = 0; counter < letters && i < bytes_read; i++)
		{	
			counter += write(STDOUT_FILENO, &buffer[i], 1);
		}
	}

	return (counter);
}
