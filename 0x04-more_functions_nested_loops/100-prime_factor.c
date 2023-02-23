#include <stdio.h>

/**
 * main -  Entry point
 * Return: 0 success.
 */
int main(void)
{
	int largest_prime_factor, i = 1;
	long number = 612852475143;

	while ((number / i) > 0)
	{
		if ((number % i) == 0)
		{
			largest_prime_factor = i;
			number /= i;
		}
		i++;
	}
	printf("%d\n", largest_prime_factor);

	return (0);
}
