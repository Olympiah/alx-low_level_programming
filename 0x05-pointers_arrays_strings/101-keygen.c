#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101crackme.
 *
 *Return: Always 0 (success)
 */


int main(void)
{
	int paswd, sum;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		paswd = (rand() % 128);
		sum += paswd;
		printf("%c", paswd);
	}
	printf("%c", 2772 - sum);

	return (0);
}



