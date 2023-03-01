#include "main.h"

/**
 * _strncpy -  copies a string.
 * @dest: first string.
 * @src: second string.
 * @n: number od charcters not copy.
 * Return: copyed string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;
	int i = 0;

	while (*dest && i < n)
	{
		*dest = *src;
		if (*src != '\0')
			src++;
		dest++;
		i++;
	}
	return (temp);
}
