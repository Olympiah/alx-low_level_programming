#include <ctype.h>
#include "main.h"

/**
 *  _isdigit - Write a function that checks for a digit (0 through 9).
 *  @c: character to be checked.
 *
 *  Return: 1 if c if digit, 0 otherwise.
 */

int _isdigit(int c)
{
	int y;

	y = isdigit(c);
	if (y)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


