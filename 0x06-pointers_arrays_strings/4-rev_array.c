#include "main.h"
#include <stdio.h>

/**
 * reverse_array - everses the content of an array of integers
 * @a: pointer to the array.
 * @n: length of the arraay.
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < (n - 1) / 2; i++)
	{
		int temp = a[n - i - 1];

		a[n - i - 1] = a[i];
		a[i] = temp;
	}
}
