/* ************************************************* Prob 21 ************************************************************   */
// Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
// If d(a) = b and d(b) = a, where a  b, then a and b are an amicable pair and each of a and b are called amicable numbers.
//
// For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284.
// The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.
//
// Evaluate the sum of all the amicable numbers under 10000.
/* **********************************************************************************************************************   */

#include <stdio.h>
#include <stdlib.h>

int countDiv (int number) // return the adddition of the divisors
{
    int count = 0;
    for(int i = 1 ; i <= number / 2 ; i++)
        if( number % i == 0 )
            count += i;

    // check that a != b (not a perfect number)
    return ( number != count) ? count : 0;
}

int main()
{
    const int base = 10000;
    int sum = 0;

    for( int i = 0; i <= base ; i++ )
        if( i == countDiv(countDiv(i)) ) // check d(i) = j and j = d(i) (if amuicable)
            sum += i;

    printf("Sum of all the amicable numbers under %d is %d\n", base, sum);

}

