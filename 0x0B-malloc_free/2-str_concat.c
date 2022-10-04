#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *str_concat - function that concatenates two strings.
 * @s1: thedestination string.
 * @s2: the string to be concatenated to s1.
 * Return: NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *mem;
	int i, end = 0, join_i = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] || s2[i]; i++)
	{
		end++;
	}

	mem = malloc(end * sizeof(char));

	if (mem == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		mem[join_i] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		mem[join_i] = s2[i];
	}

	return (mem);
}
