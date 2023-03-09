#include "main.h"

char *skip_char_in_string(char c, char *s);
char *find_char_in_string(char c, char *s);
int wild_card(char *s1, char *s2, char *s3, int reset);

/**
 * wildcmp - compares two strings.
 * @s1: first string.
 * @s2: second string.
 * Return:  returns 1 if the strings can be considered identical,
 * otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	return (wild_card(s1, s2, s2, 0));
}

/**
 * wild_card - compares two strings.
 * @s1: first string.
 * @s2: second string.
 * @s3: second string.
 * @reset: to reset s2 to s3.
 * Return:  returns 1 if the strings can be considered identical,
 * otherwise return 0.
 */
int wild_card(char *s1, char *s2, char *s3, int reset)
{
	int wild = 0;

	if (reset != 0)
	{
		s2 = s3;
	}

	if (*s2 == '*')
	{
		s2 = skip_char_in_string('*', s2);
		wild = 1;
	}

	if ((!s2 && wild) || (s1 && !*s1 && s2 && !*s2))
	{
		return (1);
	}
	if (!s2 && s1)
	{
		return (0);
	}
	if (!s1 || !*s1)
	{
		return (0);
	}

	if (wild)
	{
		s1 = find_char_in_string(*s2, s1);
		return (wild_card(s1, s2, s3, 0));
	}
	else
	{
		if (*s2++ == *s1++)
		{
			return (wild_card(s1, s2, s3, 0));
		}
		else
		{
			return (wild_card(s1, s2, s3, 1));
		}
	}
}

/**
 * find_char_in_string - find the first occurance of a char in a string.
 * @c: char.
 * @s: string.
 * Return: address of first occurance or \0.
 */
char *find_char_in_string(char c, char *s)
{
	if (!*s)
	{
		return ('\0');
	}

	if (c == *s)
	{
		return (s);
	}

	return (find_char_in_string(c, ++s));
}

/**
 * skip_char_in_string - skip char in a string.
 * @c: char.
 * @s: string.
 * Return: address of first char after skiped one or \0.
 */
char *skip_char_in_string(char c, char *s)
{
	if (!*s)
	{
		return ('\0');
	}

	if (c != *s)
	{
		return (s);
	}

	return (skip_char_in_string(c, ++s));
}
