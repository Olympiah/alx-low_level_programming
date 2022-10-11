#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dogs.
 * @d: dog to be freed.
 * Return: 0on success.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d);
}

