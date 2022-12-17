#include <ctype.h>
#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 *
 * @c: The character to be checked.
 * Return: 1 if True, 0 if false
 */

int _islower(int c)
{
	int x;

	x = islower(c);

	if (x)
	{
		return (1);
	}
	else
	{
		return (0);
	};
}
