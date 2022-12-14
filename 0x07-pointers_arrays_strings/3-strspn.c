#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s:string to be scanned.
 * @accept: string containing the list of characters
 * to match in s.
 * Return:  number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
			{
				break;
			}
		}
		if (!accept[y])
		{
			break;
		}
	}
	return (x);
}
