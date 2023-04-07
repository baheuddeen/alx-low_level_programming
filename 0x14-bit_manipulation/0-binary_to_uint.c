#include "main.h"
#include <stdio.h>

unsigned int raiseToPower(int base, int power);

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars.
 * Return: the converted number, or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int size = 0, power = 0;
	unsigned int res = 0;

	if (!b)
	{
		return (res);
	}

	while (*(b + size))
	{
		size++;
	}

	for (power = 0; power < size; power++)
	{
		int digit = b[size - power - 1] - '0';

		if (!(digit == 0 || digit == 1))
		{
			return (0);
		}
		res += digit * raiseToPower(2, power);
	}
	return (res);
}

/**
 * raiseToPower - raises a number to a power
 * @base: the base number
 * @power: the power to raise to
 * Return: the result of the operation
 */
unsigned int raiseToPower(int base, int power)
{
	if (power < 1)
		return (1);

	return (base * raiseToPower(base, power - 1));
}
