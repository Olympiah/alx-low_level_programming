#include "mai.h"

/**
 * cap_string - function that capitalizes all words of a string.
 *
 * @str: string to be capitalized
 * Return: string
 */

char *cap_string(char *str)
{
	int i = 0, j;
	char sep[] = "\t\n\,;.!?\"() {}";

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
				*(s + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (sep[j] == *(s + i - 1))
						*(s + 1) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (s);
}


