#include "main.h"
int print_number(int n);

/**
 * print_to_98 - prints all natural numbers from n to 98.
 *
 * @n: start number.
 *
 * Return: 1 (if true) and 0 (if false)
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			print_number(n);
			n--;
		}
		_putchar('\n');
	}
	else
	{
		while (n <= 98)
		{
			print_number(n);
			n++;
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
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		num = num * -1;
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
	if (n != 98)
	{
		_putchar(',');
		_putchar(' ');
	}

	return (1);
}
