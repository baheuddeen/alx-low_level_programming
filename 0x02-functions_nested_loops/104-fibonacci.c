#include <stdio.h>


/**
 * main - print fibonacci numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
	int count;
	unsigned long previous = 0, current = 1;

	for (count = 0; count < 98; ++count)
	{
		unsigned long temp;
		
		temp = current;
		current += previous;
		previous = temp;
		printf("%lu", current);

		if (count == 97)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
