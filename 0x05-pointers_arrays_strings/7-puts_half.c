#include "main.h"

/**
 * puts_half - function that prints half of a string,
 * followed by a new line.
 *
 * @str: the string.
 * Return: void
 */

void puts_half(char *str)
{
	int i, mid;

	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}

	mid = i / 2;

	if ((i % 2) == 1)
	{
		mid++
	}

	while (mid < i)
	{
		_putchar(str[mid]);
		mid++;
	}
	_putchar('\n');
}


