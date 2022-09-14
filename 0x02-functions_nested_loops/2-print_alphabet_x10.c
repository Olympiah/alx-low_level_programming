#include "main.h"

/**
 * main -Entry Point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;
	char x;

	for (x = 0; x <= 9; x++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	};
	return (0);
}
