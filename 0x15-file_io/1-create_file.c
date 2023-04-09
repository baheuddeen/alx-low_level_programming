#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_to_create, i = 0, check = 0;

	if (!filename)
		return (-1);

	file_to_create = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (!file_to_create)
		return (-1);

	if (!text_content)
		return (1);

	while (text_content[i])
		i++;

	check = write(file_to_create, text_content, i);

	if (check == -1)
		return (-1);

	close(file_to_create);

	return (1);
}
