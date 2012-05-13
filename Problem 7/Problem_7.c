/* *********** Project Euler - Problem 7 ********* */
/* By listing the first six prime number           */
/* 2, 3, 5, 7, 11, and 13,                         */
/* we can see that the 6th prime is 13.            */
/* What is the 10 001st prime number?              */
/* *********************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NB 10001

int isPrime(int number)
{
    for(int i = 2; i <= sqrt(number); i++)
        if(number % i == 0)
            return 0;
    return 1;
}
int main()
{
    unsigned int prime = 2, count = 0;
    for(int i = 2 ; count < NB ; i++ )
    {
        if(isPrime(i) == 1)
        {
            prime = i;
            count++;
        }
    }

    printf("%d prime is %d\n", count, prime);
    return 0;
}
