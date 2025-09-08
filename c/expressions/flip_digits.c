#include <stdio.h>
#include "flip_digits.h"

int FlipDigits(int n)
{
    int fliped_number = 0;

    while (0 != n)
    {
        int digit = n % 10;
        fliped_number = fliped_number * 10 + digit;
        n /= 10;
    }
    return fliped_number;
}

int main(void)
{
    int n = 45920;
    int fliped_number = FlipDigits(n);
    printf("number %d flipped to %d\n", n, fliped_number);
    return 0;
}