#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @size: size of the input
 * @c: character
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *mem;
	unsigned int i;

	mem = malloc(size * sizeof(char));

	if (size == 0 || mem == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		mem[i] == c;
	}
	return (mem);
}

