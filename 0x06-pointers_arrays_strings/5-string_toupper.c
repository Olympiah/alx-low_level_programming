#include "main.h"

/**
 * string_toupper -  function that changes all 
 * lowercase letters of a string to uppercase.
 *@x: string
 * Return: string of lowercase letters.
 */

char *string_toupper(char *x)
{
	int i;

	for (i = 0; x[i] != '\0'; i++)
	{
		if (x[i] >= 'a' x <= 'z')
		{
			x -= 32;
		}
	}

	return (x);
}



