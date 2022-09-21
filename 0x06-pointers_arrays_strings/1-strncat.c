#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: - destination string
 * @src: string to append to dest
 * @n: - integer bytes
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i++])
	{
		dest[i++];
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[len++] = src[i];
	}

	return (dest);
}
