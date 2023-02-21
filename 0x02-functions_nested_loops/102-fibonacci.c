#include <stdio.h>

/**
 * main - print fibonacci numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
	int count;
	unsigned long previous = 0, current = 1, sum;

	for (count = 0; count < 50; ++count)
	{
		sum = previous + current;
		printf("%lu", sum);

		previous = current;
		current = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
