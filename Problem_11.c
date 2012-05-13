/* *************************** Project Euler - Problem 11 ****************************** */
// In the 2020 grid below, four numbers along a diagonal line have been marked in red.
// See Square.txt
// What is the greatest product of four adjacent numbers in any direction
// (up, down, left, right, or diagonally) in the 2020 grid?
/* ************************************************************************************* */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const int cote = 20;

int main()
{
    // initialize 2D array
    int square[cote][cote];
    char c;

    // store in an array
    FILE *sqr = fopen("Square.txt", "r");

    for( int i = 0; i < cote; i++)
        for( int j = 0; j < cote; j++)
        {
            do
            {
                c = fgetc(sqr);
            }while(c == '\n' ||  c == ' ');
            square[i][j] = ( c - '0') * 10 ;
            square[i][j] += fgetc(sqr) - '0';
        }
    fclose(sqr);

    // check the greatest product of four adjacent number in any direction
    int result = 0;

    for( int i = 0; i < cote; i++)
        for( int j = 0; j < cote; j++)
        {
            int product, right, down, diagrev, diag;
            down = right = diagrev = diag = 1;

                    product = 0;
                    if ( j < cote - 3) // check right
                    {
                        for( int k = 0; k < 4; k++)
                            right *= square[i][j+k];
                        product = right;
                    }
                    if( i < cote - 3 ) // check down
                    {
                        for( int k = 0; k < 4; k++)
                            down *= square[i+k][j];
                        if( down > product)
                            product = down;
                    }
                    if( j > cote - 3 && i < cote - 3 ) // check diag (right)
                    {
                        for( int k = 0; k < 4; k++)
                            diag *= square[i+k][j+k];
                        if( diag > product)
                            product = diag;
                    }
                    if( j > 3 && i < cote - 3 ) // check reverse diag
                    {
                        for( int k = 0; k < 4; k++)
                            diagrev *= square[i+k][j-k];
                        if( diagrev > product)
                            product = diagrev;
                    }

            if( product > result)
                result = product;
        }

    printf("Greatest product of 4 adjacent numbers in any direction is %d\n", result);
    return 0;
}
