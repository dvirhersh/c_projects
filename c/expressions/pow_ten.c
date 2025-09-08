#include <stdio.h>
#include "pow_ten.h"

double PowTen(int n)
{
    double result = 1.0;
    int i;

    if (n > 0) 
    {
        for (i = 0; i < n; i++) 
        {
            result *= 10.0;
        }
    } 
    else if (n < 0) 
    {
        for (i = 0; i > n; i--) 
        {
            result /= 10.0;
        }
    }

    return result;
}

int main(void)
{
    int n = -3;
    double p_10 ;
    p_10 = PowTen(n);
    printf("10 ^ %d = %f\n", n, p_10);
    return 0;
}