#include "main.h"
int is_palindrome_v2(char *, int, int);

/**
 * is_palindrome -  palindrome checker.
 * @s: string to print.
 * Return:  1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int length;

	if (!*s)
		return (1);
	length = _strlen_recursion(s);
	return (is_palindrome_v2(s, length, 0));
}

/**
 * is_palindrome_v2 -  palindrome checker.
 * @s: string to print.
 * @length: string length.
 * @c: counter.
 * Return:  1 if a string is a palindrome and 0 if not.
 */
int is_palindrome_v2(char *s, int length, int c)
{
	if (c >= (length + 1) / 2)
	{
		return (1);
	}

	if (s[c] != s[length - c - 1])
	{
		return (0);
	}
	return (is_palindrome_v2(s, length, c + 1));
}

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
