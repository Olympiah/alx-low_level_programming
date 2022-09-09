#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/**
 * main- Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char lower;
    
    for (lower = 'a'; lower <= 'z'; lower++){
     
        putchar(tolower(lower));  
                
    }; 

    putchar('\n');

    return(0);

}
