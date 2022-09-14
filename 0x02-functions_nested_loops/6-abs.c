#include "main.h"

/**
 * _abs- the function for getting the absolute
 *@c is the parameter
 * Return: Always 0 (success)
 */

int _abs(int c)
{
	if (c > 0 || c ==  0)
	{
		return (c);
	}
	else
		return (c * -1);
}
