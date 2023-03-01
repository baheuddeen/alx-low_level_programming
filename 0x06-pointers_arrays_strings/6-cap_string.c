#include "main.h"
#define FALSE 0
#define TRUE 1

/**
 * is_seperator - check if it's a separator
 * @c: charecter to check.
 * Return: 1 if it's a separator and 0 otherwise.
 */
int is_seperator(char c)
{
	char separators[] = {
		',', ' ', '\t', '\n', ';', '.', '!', '?', '"',
		'(', ')', '{', '}', '\0'
	};
	int i = 0;

	while (separators[i])
	{
		if (c == separators[i])
			return (TRUE);
		i++;
	}

	return (FALSE);
}
/**
 * cap_string - capitalizes all words of a string.
 * @s: string to capitalize.
 * Return: capitalized string.
 */
char *cap_string(char *s)
{
	int i = 0;
	int to_upper = 'a' - 'A';
	char *temp_s = s;

	while (*temp_s)
	{
		if (i != 0 && is_seperator(*temp_s) == 0)
		{
			temp_s++;
			continue;
		}

		if (i != 0)
			temp_s++;

		if (*temp_s >= 'a' && *temp_s <= 'z')
			*temp_s -= to_upper;
		i++;
	}
	return (s);
}
