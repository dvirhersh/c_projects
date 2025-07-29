#include <stdio.h>

int Divide(int numerator, int denominator, int *quotient, int *reminder)
{
    if (denominator == 0)
        return -1;
    *quotient = numerator / denominator;
    *reminder = numerator % denominator;
    return 0;
}

int main()
{
    int numerator = 59;
    int denominator = -3;
    int quotient;
    int reminder;

    printf("\nTesting Report:\n");

    Divide(numerator, denominator, &quotient, &reminder);
    printf("quotient = %d\n", quotient);
    printf("reminder = %d\n", reminder);

    return 0;
}
