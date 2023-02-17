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
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}

	putchar('\n');

	return (0);
}
