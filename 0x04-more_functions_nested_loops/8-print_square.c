#include <stdio.h>
#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * @size: is the size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int c, r;

	if (size > 0)
	{
		for (c = 0; c < size; c++)
		{
			for (r = 0; r < (size - 1); r++)
			{
				putchar('#');
			}
			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
