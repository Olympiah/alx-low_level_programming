#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - function that prints the numbers, from 0 to 9,
 *  followed by a new line.
 *
 *  Return: void
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
		{
		continue;
		}
		else
		{
		putchar(n + '0');
		}
	}
	putchar('\n');
}
