#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (j = 1; j < 10; j++)
		{
			int result = i * j;

			if (result > 9)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
