#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: count of arguments.
 * @argv: pointer to string array of args.
 * Return: 0 on success.
 */

int main(int argc, int *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
