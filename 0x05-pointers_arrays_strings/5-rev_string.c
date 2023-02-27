#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: pointer to an integer.
 */
void rev_string(char *s)
{
	char c;
	int i = 0, counter = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	if (i > 0)
	{
		for (counter = 0; counter < i / 2; ++counter)
		{
			c = s[counter];
			s[counter] = s[i - 1 - counter];
			s[i - 1 - counter] = c;
		}
	}
}
