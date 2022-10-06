#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -  function that concatenates
 * two strings.
 * @s1: string to concatenated.
 * @s2: string
 * size: size of s2 to be concatenated.
 * Return: pointer to new memory allocation.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int p, q, r;
	char *mem;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else
	{
		for (p = 0; s1[p]; p++)
			;

	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	else
	{
		for (q = 0; s2[q]; q++)
		{
			;
		}
	}
	if (q > n)
	{
		q = n;
	}

	mem = malloc(sizeof(char) * (p + q + 1));
	if (mem == NULL)
	{
		return (NULL);
	}

	for (r = 0; r < p; r++)
	{
		mem[r] = s1[r];
	}
	for (r = 0; r < q; r++)
	{
		mem[r + p] = s2[r];
	}
	mem[p + q] = '\0';

	return (mem);
}
