/* ********************** Project Euler - Problem 4 ************************** */
/* A palindromic number reads the same both ways.                              */
/* The largest palindrome made from the product of                             */
/* two 2-digit numbers is 9009 = 91 99.                                        */
/* Find the largest palindrome made from the product of two 3-digit numbers.   */
/* *************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int isPal(int a, int b)
{
    int n = a * b, size = 0;

    // count the number of digits to buff the array
    while(n>0)
    {
        n /= 10;
        size++;
    }
    int array[size];
    n = a * b;

    // iterate over digits and stock them in the array
    for(int i = 0; i < size; i++)
    {
        array[i] = n % 10;
        n /= 10;
    }

    // compare array from both sides, beginning at the extreme
    // return 0 if not pal, 1 if pal (no mismatch)
    for( int i = 0, j = size - 1; i < j ; i++, j--)
        if(array[i] != array[j])
            return 0;

    return a*b;
}

int main()
{
    int largPal = 1, n;
    //iterate over each pal
    for( int i = 100 ; i <= 999 ; i++ )
        for( int j = i ; j <= 999 ; j++ )
            if((n = isPal(i,j)) != 1 && n > largPal)
            {
                largPal = n;
                printf("Found largest pal ! %d * %d = %d\n", i,j, i*j);
            }
    return 0;
}

