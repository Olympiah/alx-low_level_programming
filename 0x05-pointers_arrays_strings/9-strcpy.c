#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 *  to the buffer pointed to by dest.
 *
 *  @dest: destination.
 *  @src: source.
 *  Return: return copy.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	for (; src[i] != '\n'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

