#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format:  list of types of arguments
 * passed to the function
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list ap;
	char *s, *sep;

	va_start(ap, format);

	sep = ", ";

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(ap, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(ap, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(ap, double), sep);
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
				{
					s = "(nil)";
				}
				printf("%s%s", s, sep);
				break;
			default:
				i++;
				continue;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}

