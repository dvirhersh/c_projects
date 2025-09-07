#include <stdio.h>

int pow_10(int n)
{
    int result = 1;
    int i;

    for (i = 0; i < n; i++)
    {
        result *= 10;
    }
    return result;
}

int main(void)
{
    int n = 5;
    int p_10 = pow_10(n);
    printf("10 ^ %d = %d\n", n, p_10);
    return 0;
}