#include <stdlib.h>
#include "main.h"

/**
 * free_grid -  that frees a 2 dimensional grid.
 * @grid: pointer to the grid.
 * @height: height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid != NULL && height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
