#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string.
 * @accept: string.
 * Return: number of bytes in the initial
 * segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	while (s[n])
	{
		if (_strchr(accept, s[n]))
			n++;
		else
			break;
	}
	return (n);
}

/**
 * _strchr - locates a character in a string.
 * @s: pointer to string.
 * @c: char to find.
 * Return: pointer to the first occurance or NULL.
 */

char *_strchr(char *s, char c)
{
	void *p = 0;

	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (p);
}
