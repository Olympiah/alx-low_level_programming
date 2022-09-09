#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main- Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  char lower;
  char upper;

  for (lower = 'a'; lower <= 'z'; lower++)
    {	   
      putchar(tolower(lower));
    };

  for (upper = 'a'; upper <= 'z'; upper++)
    {
      putchar(toupper(upper));
    };

  putchar('\n');

  return (0);
}
