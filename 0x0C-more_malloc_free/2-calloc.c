#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory
 * for an array, using malloc.
 * @nmemb: array of elements
 * @size: size of array bytes.
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(nmemb * size);
	if (mem == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		mem[i] = 0;
	}
	return (mem);
}
