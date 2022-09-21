#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: - destination to copy
 * @src: - string to be appended to dest.
 * Return: string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, len;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}

	for (len = 0; (dest[i + len] == *src) != '\0'; len++)
	{
		;
	}

	return (dest);
}
