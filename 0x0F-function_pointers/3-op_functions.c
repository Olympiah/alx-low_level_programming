#include "3-calc.h"

/**
 * op_add - addition operation
 * @a: 1st int parameter
 * @b: 2nd int parameter
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operation
 * @a: 1st int parameter
 * @b: 2nd int parameter
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication op.
 * @a: 1st int parameter
 * @b: 2nd int parameter
 * Return: returns the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operation.
 * @a: 1st int parameter
 * @b: 1st int parameter
 * Return: returns the result of the
 * division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus operation.
 * @a: 1st int parameter
 * @b: 2nd int parameter
 * Return: the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}

