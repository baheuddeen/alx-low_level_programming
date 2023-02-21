#include <stdio.h>

/**
 * main - print sum of  terms in the Fibonacci sequence
 * whose values do not exceed 4,000,000
 *
 * Return: 0 (success)
*/

int main(void)
{
	int count;
	unsigned long previous = 0, current = 1, sum = 0;

	for (count = 0; current < 4000000; ++count)
	{
		unsigned long temp;

		temp = current;
		current += previous;
		previous = temp;
		if (current < 4000000 && current % 2 == 0)
			sum += current;
	}
	printf("%lu\n", sum);
	return (0);
}
