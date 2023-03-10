#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: string to encode.
 * Return: encoded string.
 */
char *rot13(char *s)
{
	char *temp_s = s;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char code[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *p_letters, *p_code;

	while (*s)
	{
		p_letters = letters;
		p_code = code;
		while (*p_letters)
		{
			if (*s == *p_letters)
			{
				*s = *p_code;
				break;
			}
			p_letters++;
			p_code++;
		}
		s++;
	}

	return (temp_s);
}
