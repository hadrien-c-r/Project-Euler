/* ************************** PROB 10 ********************* */
/* The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.    */
/* Find the sum of all the primes below two million.        */
/* ******************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef unsigned long long UI;


int main()
{
    UI top = 2000000;
    UI result = 0;

    for( UI i = 2; i <= top; i++)
        if(isPrime(i) == 1)
            result += i;

    printf("Sum of the prime below %llu is %llu.\n", top, result);
    return 0;
}

int isPrime(UI number)
{
    for(UI i = 2; i <= sqrt(number); i++)
        if(number % i == 0)
            return 0;

    return 1;
}
