#include <stdio.h>
#include <stdlib.h>

/**
 * main- Entry Point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
   int x;
   char c;

   for(x='0'; x<='9'; x++){
      putchar(x); 
   };

   for(c='a'; c<='f'; c++){
      putchar(c);
   };

   putchar('\n');

   return(0);

}
