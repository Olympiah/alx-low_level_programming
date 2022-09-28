#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number.
 *
 * @n: the floating point value.
 * Return: the square root of x.
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
	{
		return (n);
	}
	return (squareroot(0, n));
}

/**
 * squareroot - function that return squareroot of number.
 * @n: int number
 * @m: squared number.
 * Return: square root of n
 */

int squareroot(int n, int m)
{
	if (n > x / 2)
	{
		return (-1);
	}
	else if (n * n == m)
	{
		return (n);
	}
	return (squareroot(n + 1, m));
}
