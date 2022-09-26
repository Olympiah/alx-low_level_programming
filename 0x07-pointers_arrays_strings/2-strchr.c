#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: string to be scanned
 * @c: character to be searched
 * Return: pointer to 1st occurence of c or
 * NULL if its not found.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\n'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
