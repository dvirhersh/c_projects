#include <stdio.h>
#include "expressions_test.h"

int main(void)
{
    int n = -3;
    double p_10 ;
    int x = 15, y = 32;
    int flipped_number;

    HelloWorldAscii();

    p_10 = PowTen(n);
    printf("10 ^ %d = %f\n", n, p_10);

    n = 45920;
    flipped_number = FlipDigits(n);
    printf("number %d flipped to %d\n", n, flipped_number);

    printf("before: x = %d, y = %d\n", x, y);
    Swap(&x, &y);
    printf("after : x = %d, y = %d\n", x, y);

    return 0;
}