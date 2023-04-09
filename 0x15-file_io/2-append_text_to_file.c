#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_to_append, i = 0, check = 0;

	if (!filename)
		return (-1);

	file_to_append = open(filename, O_WRONLY | O_APPEND);

	if (!file_to_append)
		return (-1);

	if (!text_content)
		return (1);

	while (text_content[i])
		i++;

	check = write(file_to_append, text_content, i);

	if (check == -1)
		return (-1);

	close(file_to_append);

	return (1);
}
