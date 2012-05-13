/* ************************ Problem 8 ************************* */
/*  Find the greatest product of five consecutive               */
/*  digits in the 1000-digit number.                            */
/*  (see number.txt)                                            */
/* ************************************************************ */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    // open file number.txt where the 1000 digits + 19 '\n' are stored
    FILE *pNumber = fopen("number.txt","r");

    // store the 1000 digit in an array
    int array[1000], count = 0;
    for( int i = 0, c = 0; i < 1019 ; i++)
        if( (c = fgetc(pNumber)) != '\n' && c != EOF)
        {
            array[count] = c - '0';
            count++;
        }
    fclose(pNumber);

    // multiply and save the largest
    int largest = 0, number;
    for( int j = 0; j < 1000 - 4; j++)
    {
        number = array[j];
        for( int h = 1 ; h <= 4; h++)
            number *= array[j+h];
        if( number > largest)
            largest = number;
    }

    printf("\nLargest product of 5 consecutive digits is: %d\n", largest);
    return 0;
}
