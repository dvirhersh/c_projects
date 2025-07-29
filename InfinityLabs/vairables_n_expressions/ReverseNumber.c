#include <stdio.h>

unsigned ReverseNumber(unsigned number)
{
    unsigned ones_digit, tens_digit, hundreds_digit, result;

    ones_digit = number % 10;
    tens_digit = (number / 10) % 10;
    hundreds_digit = number / 100;

    result = ones_digit * 100 + tens_digit * 10 + hundreds_digit;

    return result;
}

int main()
{
    unsigned number = 321;

    printf("in celsius = %d\n", ReverseNumber(number));

    return 0;
}
