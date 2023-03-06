#include "main.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes..
 * @s: string to search in.
 * @accept: string of set of chars.
 * Return: the first occurance or NULL if not exist.
 */

char *_strpbrk(char *s, char *accept)
{
	void *null = 0;

	while (*s)
	{
		if (_strchr(accept, *s))
			return (s);
		s++;
	}
	return (null);
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
