#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the gigitd on base 10 from 0 to 9.
 * followed by a new line.
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%i", num);
		num++;
	}
	putchar('\n');

	return (0);
}
