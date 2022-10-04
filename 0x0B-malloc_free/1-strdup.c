#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - function that returns a pointer to a newly
 *  allocated space in memory  which contains a copy
 *  of the string given as a parameter.
 *  @str: the string
 *  Return: a pointer to the duplicated string,
 *  NULL if str = NULL
 */

char *_strdup(char *str)
{
	int i, len;
	char *mem;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0; len <= *str; len++)
	{
		;
	}

	len += 1;
	mem = malloc(len * sizeof(char));

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		mem[i] = str[i];
	}

	return (mem);
}



