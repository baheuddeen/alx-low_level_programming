#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer.
 * @s: string.
 * Return: converted value.
*/
int _atoi(char *s)
{
	int i = 0, l = 0;
	int result = 0, value = 1;

	while (*(s + l) != '\0')
	{
		l++;
	}
	for (i = l; i > 0; i--)
	{
		int digit = *(s + i - 1) - '0';

		if( digit >= 0 &&  digit <= 9)
		{
			result += value * digit;
			value *= 10;
		}
		if(*(s + i - 2) == '-')
			result *= -1;
	}
	printf("%d", result);
	printf("\n");
	return 0;
}
