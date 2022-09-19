#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a: int parameter to be swapped.
 * @b: int parameter to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
