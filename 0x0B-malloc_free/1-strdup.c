#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate a string.
 * @str: string to duplicate.
 * Return: a pointer to a newly allocated space in memory
 * or NULL otherwise.
 */
char *_strdup(char *str)
{
	char *pt_str = NULL;
	int str_length = 0;
	int i;

	if (!str)
	{
		return (NULL);
	}

	while (str[str_length])
	{
		str_length++;
	}

	pt_str = (char *)malloc(sizeof(char) * (str_length + 1));
	if (!pt_str)
	{
		return (NULL);
	}

	for (i = 0; i < str_length; i++)
	{
		pt_str[i] = str[i];
	}

	return (pt_str);
}
