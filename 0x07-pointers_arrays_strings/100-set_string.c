#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char.
 *
 * @s: pointer to a pointer value to change
 * @to: string to replace with
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
