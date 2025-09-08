#include <stdio.h>

double PowTen(int n)
{
    double result = 1.0;
    size_t i;

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
