#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: string to be reversed.
 * Return: Always 0 (success)
 */

void rev_string(char *s)
{
	int i;
	int count = 0;
	char temp = s[0];

	while (s[count] != '\0')
		count++;

	for (i = 0; i < count; i++)
	{
		count--;
		temp = s[i];
		s[i] = s[count];
		s[count] = temp;
	}
}














