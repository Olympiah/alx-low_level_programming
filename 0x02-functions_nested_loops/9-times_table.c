#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int row, col, product;

	for (row = 0; row <= 9; row++)
	{
		 _putchar('0');

		 for (col = 1; col <= 9; col++)
		 {
			 _putchar(',');
			 _putchar('_');

			 product = row * col;

			 if (product <= 9)
			 {
				 _putchar(' ');
			 }
			 else
				 _putchar((product / 10) + '0');

			 _putchar((product % 10) + '0');
		 }
		 _putchar('\n');
	 }
}

