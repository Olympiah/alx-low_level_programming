#include <stdio.h>

/**
 * main - entry point
 * @argc: the count of arguments
 * @argv: the argument vector.
 * Return: 0 on success.
 */

int main(int argc, int *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		print("%s\n", argv[i]);
	}

	return (0);
}
