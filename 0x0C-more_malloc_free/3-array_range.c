#include "main.h"
#include <stdlib.h>

/**
 * array_range -  function that creates an array of integers.
 * @min: first int number
 * @max: last int number
 * Return: the pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int f, l;
	int *mem;

	if (min > max)
	{
		return (NULL);
	}

	l = max - min + 1;
	mem = malloc(sizeof(int) * l);
	if (mem == NULL)
	{
		return (NULL);
	}

	for (f = 0; f < l; f++, min++)
	{
		mem[f] = min;
	}
	return (mem);
}
