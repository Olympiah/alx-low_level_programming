#include "main.h"
#include <ctype.h>

/**
 * _isupper - function that checks for uppercase character.
 * @c: character to be checked.
 * Return: 1 if c is uppercase, else 0.
 */

int _isupper(int c)
{
	int x;

	x = isupper(c);
	if (x)
	{
		return (1);
	}
	else
	{
		return (0);
	};
}



