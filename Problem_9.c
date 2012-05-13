/* ************************************ Problem 9 ********************************* */
/*  A Pythagorean triplet is a set of three natural numbers, a  b  c, for which,    */
/*  a2 + b2 = c2                                                                    */
/*  For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
/*  There exists exactly one Pythagorean triplet for which a + b + c = 1000.        */
/*  Find the product abc.                                                           */
/* ******************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c;

    // collect pythagorean triplet
    for( a = 1 ; a < 1000/3 ; a++)
        for ( b = a + 1; b < 1000/2 ; b++)
            for ( c = (1000 - b - a) ; c < 1000 ; c++)
                if( ((a*a + b*b) == c*c) && ( a + b + c == 1000))
                    printf("abc = %0.f\n", a*b*c);

    return 0;
}
