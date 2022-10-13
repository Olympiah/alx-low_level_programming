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
	int (*fn)(int, int);
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	fn = get_op_func(argv[2]);

	if (!fn)
	{
		printf("Error\n");
		exit(98);
	}

	op = *argv[2];

	if ((op == "/" || op == "%") && (argv[2] == 0))
	{
		printf("Error\n");
		exit(100);
	}

	answer = fn(arg1, arg2);

	printf("%d\n", answer);

	return (0);
}

