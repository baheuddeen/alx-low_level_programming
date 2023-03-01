#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 * of a string to uppercase.
 * @s: string to set tp upper
 * Return: upper cased string.
 */
char *string_toupper(char *s)
{
	char *temp_s = s;
	int to_upper = 'a' - 'A';

	while (*temp_s)
	{
		if (*temp_s >= 'a' && *temp_s <= 'z')
			*temp_s -= to_upper;
		temp_s++;
	}

	return (s);
}
