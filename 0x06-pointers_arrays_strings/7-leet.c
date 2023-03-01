#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: string to encode.
 * Return: encoded string.
 */
char *leet(char *s)
{
	int to_upper = 'a' - 'A';
	char *temp_s = s;
	char letters[5] = {'a', 'e', 'o', 't', 'l'};
	char code[5] = {'4', '3', '0', '7', '1'};

	while (*s)
	{
		int i = 0;

		for (i = 0; i < 5; i++)
		{
			if ((*s == letters[i]) || (*s == letters[i] - to_upper))
				*s = code[i];
		}
		s++;
	}

	return (temp_s);
}
