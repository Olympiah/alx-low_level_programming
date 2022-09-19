#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: string to be reversed.
 * Return: Always 0 (success)
 */

void rev_string(char *s)
{
	int i, j, temp, k;

	while (s[i] != '\n')
	{
		i++;
	}
	k = 0;
	j = i - 1;

	while (k < j)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
		i++;
		j--;
	};
}














