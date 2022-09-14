#include "main.h"

/**
 * main - Entry Point
 *
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
