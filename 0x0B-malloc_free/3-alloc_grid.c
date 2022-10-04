#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - function that returns a pointer to a 2 dimensional array of integers.
 * @width: no of columns
 * @height: no of rows.
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **mem;
	int i = 0, j;

	if (width = NULL || height == NULL)
	{
		return (NULL);
	}
