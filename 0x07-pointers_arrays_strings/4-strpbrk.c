#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s: string to be checked.
 * @accept: string cntaining the characters to match.
 * Return: pointer to the byte in s that matches one of the
 * bytes in accept or null if there's none.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i], i++)
	{
		for (j = 0; s[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j])
		{
			return (s + i);
		}
	}
	return (0);
}
