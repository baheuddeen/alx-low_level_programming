#include "main.h"

/**
 * main - entry point
 *
 * description: print "_putchar" followed by an ew line.
 *
 * Return: 0 (success)
 */

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
