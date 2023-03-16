#include <stdlib.h>
#include "main.h"

/**
 * array_range -  creates an array of integers..
 * @min: start int.
 * @max: end int.
 * Return: pointer to the array, otherwise NULL.
 */
int *array_range(int min, int max)
{
	int *arr = NULL;
	int i = 0;

	if (min > max)
		return (arr);

	arr = malloc((max - min + 1) * sizeof(*arr));
	if (!arr)
		return (arr);
	while (max >= min)
	{
		arr[i] = min;
		min++;
		i++;
	}

	return (arr);
}
