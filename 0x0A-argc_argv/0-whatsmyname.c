#include <stdio.h>

/**
 * main - program that prints its name
 *@argc: count of number of arguments.
 *@argv: pointer to string array of args
 *Return: 0 on success.
 */

int main(int argc, int *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
