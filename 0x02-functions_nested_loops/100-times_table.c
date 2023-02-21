#include "main.h"
int print_number(int n);

/**
 * print_times_table - prints the 9 times table, starting with 0.
 *
 *@n: number
 */

void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		if (n == 0)
			continue;

		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= n; j++)
		{
			int result = i * j;

			print_number(result);
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
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
		_putchar(' ');
		_putchar(' ');
		_putchar('0');
		return (1);
	}

	/** get the upper 10s of the number */
	while (num >= x)
	{
		x *= 10;
	}

	if (n < 100)
		_putchar(' ');
	if (n < 10)
		_putchar(' ');

	for (x /= 10; x > 0; x /= 10)
	{
		_putchar(num / x + '0');
		num %= x;
	}

	return (1);
}
