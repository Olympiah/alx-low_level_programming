#include "main.h"
#include <string.h>

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
	strncat(dest, src);
	return (dest);
}
	
