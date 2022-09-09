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

	 for(lower='a'; lower <= 'z';lower++){
	 
	    if(lower != 'q' && lower != 'e'){
	          putchar(tolower(lower));
	    };
		    
	 };
         
	 printf("\n");
	 return(0);

}
