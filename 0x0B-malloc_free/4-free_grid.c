#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional
 *  grid previously created by your alloc_grid
 *  function.
 *  @grid: 2D array mem to be freed
 *  @height: height of array.
 *  Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = o; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
