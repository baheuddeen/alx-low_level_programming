#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase,
 *              in reverse followed by a new line.
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
