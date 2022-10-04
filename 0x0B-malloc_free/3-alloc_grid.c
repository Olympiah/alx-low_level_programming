#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: no of columns
 * @height: no of rows.
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **mem;
	int i = 0, j;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	mem = (int **) malloc(height * sizeof(int *));

	if (mem != NULL)
	{
		for (; i < height; i++)
		{
			mem[i] = (int *) malloc(width * sizeof(int));

			if (mem[i] != NULL)
			{
				for (j = 0; j < width; j++)
				{
					mem[i][j] = 0;
				}
			}
			else
			{
				while (i >= 0)
				{
					free(mem[i]);
					i--;
				}
				free(mem);
				return (NULL);
			}
		}
		return (mem);
	}
	else
	{
		return (NULL);
	}
}

