#include <stdio.h>

int IsPrimeNumber(unsigned long num)
{
    int i;
    if (num <= 1)
        return 0;
    for (i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

float main()
{
    printf("Testing Report:\n");
    printf("IsPrimeNumber: %d\n", IsPrimeNumber(0));
    printf("IsPrimeNumber: %d\n", IsPrimeNumber(1));
    printf("IsPrimeNumber: %d\n", IsPrimeNumber(2));
    printf("IsPrimeNumber: %d\n", IsPrimeNumber(7));

    return 0;
}
