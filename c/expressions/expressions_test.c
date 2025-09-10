#include <stdio.h>
#include "expressions_test.h"

int main(void)
{
    int n = -3;
    double power_10 = 0;
    int first_var = 15, second_var = 32;
    int flipped_number = 0;

    HelloWorldAscii();

    power_10 = PowTen(n);
    printf("10 ^ %d = %f\n", n, power_10);

    n = 45920;
    flipped_number = FlipDigits(n);
    printf("number %d flipped to %d\n", n, flipped_number);

    printf("before: first_var = %d, second_var = %d\n", first_var, second_var);
    Swap(&first_var, &second_var);
    printf("after : first_var = %d, second_var = %d\n", first_var, second_var);

    return 0;
}