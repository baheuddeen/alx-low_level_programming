#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer.
 * @s: string.
 * Return: converted value.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;

	while (*(s) != '\0')
	{
		int digit = *s - '0';

		if (*s == '-')
			sign *= -1;
		else if (digit >= 0 && digit <= 9)
		{
			result = (result * 10) + digit;
		}
		else if (result > 0)
			break;
		s++;
	}

	return (result * sign);
}
