#include <stdio.h>

/**
 * main- Entry Point
 *
 * Return:Always 0 (success)
 */
int main(void)
{
  int q;
  long int r;
  long long int s;
  char t;
  float f;

  printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(t));
  printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(q));
  printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(r));
  printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(s));
  printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
  return (0);

}	
