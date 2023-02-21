#include <stdio.h>

/**
 * main - print fibonacci numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	int count, i = 0, carry = 0;
	char previous[30];
	char current[30];
	char sum[30];

	for (i = 29; i >= 0; i--)
	{
		previous[i] = current[i] = sum[i] = '0';
	}
	previous[29] = '0';
	current[29] = '1';
	for (count = 0; count < 98; count++)
	{
		int print_flage = 0;

		/** sum = previous + current */
		for (i = 29; i >= 0; i--)
		{
			sum[i] = ((previous[i] - '0') + (current[i] - '0')) + carry;
			carry = sum[i] / 10;
			sum[i] = sum[i] % 10 + '0';
		}
		for (i = 0; i <= 29; i++)
		{
			if (sum[i] != '0')
				print_flage = 1;
			if (print_flage == 1)
				printf("%c", sum[i]);
		}
		for (i = 29; i >= 0; i--)
		{
			previous[i] = current[i];
			current[i] = sum[i];
		}
		if (count == 97)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
