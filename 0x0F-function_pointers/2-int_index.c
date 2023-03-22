#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array of integers.
 * @size: number of elements in the array array.
 * @cmp: compare function.
 * Return: returns the index of the first element othwerwise -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = -1, counter = 0;

	if (!array || size <= 0 || !cmp)
	{
		return (index);
	}

	for (counter = 0; counter < size; counter++)
	{
		if (cmp(array[counter]) != 0)
		{
			return (counter);
		}
	}
	return (index);
}
