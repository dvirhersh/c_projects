#include <stdio.h>

int Divide(int numerator, int denominator, int *quotient, int *remainder)
{
    if (denominator == 0)
    {
        return -1;
    }

    *quotient = numerator / denominator;
    *remainder = numerator % denominator;

    return 0;
}

int main()
{
    int numerator = 14;
    int denominator = 6;
    int quotient;
    int remainder;

    printf("Testing Report:\n");

    printf("Running test: Divide(%d, %d):\n %d\n",
           numerator, denominator, Divide(numerator, denominator, &quotient, &remainder));
    printf("quotient = %d, remainder = %d\n", quotient, remainder);

    return 0;
}
