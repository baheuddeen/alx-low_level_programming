#include "main.h"

/**
 * print_number -  prints number
 * @n: number to print.
 */
void print_number(int n)
{
	int x;

	if (n == 0)
	{
		_putchar(n + '0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	/** get the upper 10s of the number */
	x = n / n;
	while (n >= x)
	{
		x *= 10;
	}

	for (x /= 10; x > 0; x /= 10)
	{
		_putchar(n / x + '0');
		n %= x;
	}
}
