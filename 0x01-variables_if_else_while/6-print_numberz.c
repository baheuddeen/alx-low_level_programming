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
	/* char 0 == 48 in ASCI tabel */
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
