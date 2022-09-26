#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: address memory
 * @b: character
 * @n: number of bytes
 * Return:pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
