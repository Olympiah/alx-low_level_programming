#include <ctype.h>
#include "main.h"

/**
 * _isalpha -  function that checks for alphabetic character.
 *@c: Character to be checked.
 *
 * Return: 1 if C is a letter, 0 otherwise.
 */

int _isalpha(int c)
{
	int x;

	x = isalpha(c);

	if (x)
	{
		return (1);
	}
	else
		return (0);
}
