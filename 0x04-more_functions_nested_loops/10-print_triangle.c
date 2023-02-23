#include "main.h"

/**
 * print_triangle -  prints a triangle, followed by a new line.
 * @size: characte to check.
 */
void print_triangle(int size)
{
	int i, j;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = size; j > 0; j--)
		{
			if (i < j)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
