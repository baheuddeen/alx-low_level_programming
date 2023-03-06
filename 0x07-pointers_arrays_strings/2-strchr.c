#include "main.h"

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
