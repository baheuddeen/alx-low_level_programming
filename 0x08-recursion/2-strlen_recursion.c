#include "main.h"

/**
 * _strlen_recursion -  get the length of a string..
 * @s: string.
 * Return: the length of a string.
*/

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (_strlen_recursion(++s) + 1);
}
