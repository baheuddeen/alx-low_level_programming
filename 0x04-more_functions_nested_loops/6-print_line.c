#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: clength of the line.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i >= 0 && i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
