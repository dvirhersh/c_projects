#include <stdio.h>

double PowTen(int n)
{
    double result = 1.0;
    int i = 0;

    if (n > 0)
    {
        for (; i < n; i++)
        {
            result *= 10.0;
        }
    }
    else if (n < 0)
    {
        for (; i > n; i--)
        {
            result /= 10.0;
        }
    }

    return result;
}
