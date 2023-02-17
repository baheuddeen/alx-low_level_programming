#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{
	int i, j, x, y;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (x = 0; x <= 9; x++)
			{
				for (y = 0; y <= 9; y++)
				{
					if (i == x && j == y)
					{
						continue;
					}
					if (i > x || (i == x && j > y))
					{
						continue;
					}
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(x + '0');
					putchar(y + '0');

					if (!(i == 9 && j == 8 && x == 9 && y == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
