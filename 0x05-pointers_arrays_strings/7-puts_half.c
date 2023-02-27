#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string to print it's half.
 */
void puts_half(char *str)
{
	int n = 0, i = 0;

	while (str[n] != '\0')
	{
		n++;
	}
	for (i = (n + 1) / 2; i <= n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
