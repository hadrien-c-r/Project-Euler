/* ************************ Problem 3 ************************ */
/*The prime factors of 13195 are 5, 7, 13 and 29.              */
/*                                                             */
/*What is the largest prime factor of the number 600851475143 ?*/
/* *********************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NB 600851475143

typedef unsigned long long int LLU;

int prime(LLU number);

int main()
{
    LLU nb = NB;
    printf("Number is : %llu\n", nb);
    for( LLU i = 1 ; i < sqrt(nb) ; i++) // énumération de l'ensemble des nombres
        if(isPrime(i) == 1) // filtre sur les nbres entiers
            if(nb % i == 0) // check que c'est un facteur
                printf("Prime factor of %llu : %d\n", nb, i);
    return 0;
}

int isPrime(LLU number)
{
    for(LLU i = 2; i < sqrt(number); i++)
        if(number % i == 0)
            return 0;
    return 1;
}
