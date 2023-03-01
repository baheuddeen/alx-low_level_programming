#include "main.h"
#include <stdio.h>
/**
 * _strncat - function that concatenates two strings.
 * @dest: first string.
 * @src: second string.
 * @n: number of cahracters to concat.
 * Return: first string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;
	int i = 0;

	/* get the null char position*/
	while (*dest)
		dest++;
	while (*src && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (temp);
}
