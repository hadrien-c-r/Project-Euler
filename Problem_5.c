/* ****************** Project Euler - Problem 5 *************** */
/* 2520 is the smallest number that can be divided by each      */
/* of the numbers from 1 to 10 without any remainder.           */
/*                                                              */
/* What is the smallest positive number that is evenly          */
/* divisible by all of the numbers from 1 to 20?                */
/* ************************************************************ */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DIV 20

int noRemain(int number);

int main()
{
    int found = 0;
    for(int i = 21 ; found == 0; i++ )
        if(noRemain(i) == 1)
            found = i;

    printf("Found !.. %d\n", found);
    return 0;
}

int noRemain(int number)
{
    for( int j = 1; j <= DIV; j++)
        if( number % j != 0 )
            return 0;
    return 1;
}
