#include "main.h"
/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one.
 * number to another
 * @n: the number to flip from
 * @m: the number to flip to
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp = 0;
	int res = 0;

	temp = n ^ m;
	while (temp)
	{
		if (temp != temp >> 1 << 1)
		{
			res += 1;
		}
		temp = temp >> 1;
	}

	return (res);
}
