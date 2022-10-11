#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - get length of string
 * @str: string
 * Return: length of string
 */

int _strlen(char *str)
{
	int len = 0;

	while(*str++)
	{
		len++;
	}
	return (len);
}

/**
 * _strcopy - copy string to destination
 * @dest: destination
 * @src: source
 * Return: pointer to destination string
 */

char _strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] ; i++)
	
		dest[i] = src[i];
	
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dognew;

	if (name == NULL || age <= 0 || owner == NULL)
	{
		return (NULL);
	}

	dognew = malloc(sizeof(dog_t));

	if (dognew == NULL)
	{
		return (NULL);
	}

	dognew->name = malloc((_strlen(name) + 1) * sizeof(char));
	if (dognew->name == NULL)
	{
		free(dognew);
		return (NULL);
	}

	dognew->owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (dognew->owner == NULL)
	{
		free(dognew->name);
		free(dognew);
		return (NULL);
	}

	dognew->name = _strcopy(dognew->name, name);
	dognew->age = age;
	dognew->owner = _strcopy(dognew->owner, owner);

	return (dognew);
}

