#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 *
 * @str: string to be capitalized
 * Return: string
 */

char *cap_string(char *str)
{
	int i = 0, j;
	char sep[] = "\t\n,;.!?\"() {}";

	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			if (i == 0)
				*(str + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (sep[j] == *(str + i - 1))
						*(str + 1) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (str);
}


