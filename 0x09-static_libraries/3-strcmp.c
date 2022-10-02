#include "main.h"

/**
 * _strcmp - function that compares two strings.
 *
 * @s1: the First string.
 * @s2: the Second string.
 * Return: Always 0 in success.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}


