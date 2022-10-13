#include "3-calc.h"

/**
 * main - entry point
 * @argc: no. of arguments.
 * @argv: argument vector
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, answer;
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	op = argv[2][0];

	if (op != '+' && op != '-' && op != '/' && op != '*' && op != '%')
	{
		printf("Error\n");
		exit(99);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	answer = (get_op_func(argv[2]))(arg1, arg2);

	printf("%d\n", answer);

	return (0);
}

