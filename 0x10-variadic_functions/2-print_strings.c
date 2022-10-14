#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings,
 * followed by a new line
 * @separator: string to be printed between
 * @n: number of strings passed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list ap;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);

		if (s == NULL)
		{
			s = "(nil)";

		}
		printf("%s", s);

		if (i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
