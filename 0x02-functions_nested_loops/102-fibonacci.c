#include <stdio.h>

/**
 * main - print fibonacci numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i;
	unsigned long previous, current;

	previous = 1;
	current = 2;
	printf("%ld, %ld, ", previous, current);
	for (i = 0; i < 50; i++)
	{
		int temp = current;

		current += previous;
		previous = temp;
		printf("%ld", current);
		if (i != 49)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
