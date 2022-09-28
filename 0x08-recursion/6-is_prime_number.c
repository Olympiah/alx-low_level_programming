#include "main.h"

/**
 * is_prime_number - function that returns
 * 1 if the input integer is a prime number
 *
 * @n: integer number
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, start));
}

/**
 * prime - fn retuens 1 is n is prime.
 * @n:integer number
 * @start: point to begin the search.
 * Return: 1 if n is prime else 0.
 */

int prime(int n, int start)
{
	if (start <= 1)
	{
		return (1);
	}
	else if (n % start == 0)
	{
		return (0);
	}
	return (prime(n, start - 1));
}
