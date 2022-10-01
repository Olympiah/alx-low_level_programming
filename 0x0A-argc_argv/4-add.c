#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * main - entry point
 *
 * @argc: the count of arguments
 * @argv: the argument vector.
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc < 1)
	{
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}


