#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int p, q;

	if (n > 0)
	{
		for (p = 0; p < n; p++)
		{
			for (q = 0; q < p; q++)
			{
				_putchar(' ');
			}

			_putchar('\\');

			if (p == (n - 1))
			{
				continue;
			}
			else
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
