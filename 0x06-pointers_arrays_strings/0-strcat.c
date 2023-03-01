#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: first string.
 * @src: second string.
 * Return: first string.
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	/* get the null char position*/
	while (*dest)
		dest++;
	while ((*(dest++) = *(src++)))
		;
	return (temp);
}
