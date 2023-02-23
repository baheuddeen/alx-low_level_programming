#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal.
 * @n: length of the diagonal.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n < 1)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i >= 0 && i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j)
				_putchar('\\');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
