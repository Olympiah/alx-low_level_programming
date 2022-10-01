#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: the count of arguments.
 * @argv: the argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, mult;

	mult = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}
		printf("%d\n", mult);
	}
	return (0);
}

