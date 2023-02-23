#include "main.h"
int print_number(int n);

/**
 * more_numbers -   prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			print_number(j);
		}
		_putchar('\n');
	}
}

/**
 * print_number - print number with more than one digit using _putchar.
 *
 * @n: number to print.
 *
 * Return: 1 (success).
 */
int print_number(int n)
{
	int x = 1;
	int num = n;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	/** get the upper 10s of the number */
	while (num >= x)
	{
		x *= 10;
	}

	for (x /= 10; x > 0; x /= 10)
	{
		_putchar(num / x + '0');
		num %= x;
	}

	return (1);
}
