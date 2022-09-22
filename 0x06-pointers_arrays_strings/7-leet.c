#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 *
 * @c: char input
 * Return: Always 0 (success)
 */

char *leet(char *c)
{
	int i, j;
	int letter[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int new[] = {'4', '3', '0', '7', '1'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (c[i] == letter[j])
			{
				c[i] = new[j / 2];
				x = 9;
			}
		}
	}
	return (c);
}
