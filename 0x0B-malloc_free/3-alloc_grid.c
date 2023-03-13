#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - create 2 dimensional array of integers.
 * @width: the width of the array.
 * @height: the height of the array.
 * Return: pointer to the array or NULL on Failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid = NULL;
	int i = 0, j = 0;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	grid = (int **)malloc(sizeof(int *) * height);
	if (!grid)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (!grid[i])
		{
			free (grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
