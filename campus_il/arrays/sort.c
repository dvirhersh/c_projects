#include <stdio.h>

#define N 20
#define MAX 10

int main(void)
{
    int i;
    int x;
    int b[MAX + 1];

    // Initialize histogram array to 0
    for (i = 0; i <= MAX; i++)
    {
        b[i] = 0;
    }

    // Input values
    printf("Enter %d numbers between 0 and %d:\n", N, MAX);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &x);
        if (x >= 0 && x <= MAX)
            b[x]++;
        else
            printf("Ignored invalid input: %d\n", x);
    }

    // Print histogram
    printf("\nHistogram:\n");
    for (i = 0; i <= MAX; i++)
    {
        if (b[i] > 0)
        {
            printf("%2d: ", i);
            for (int j = 0; j < b[i]; j++)
                printf("*");
            printf(" (%d)\n", b[i]);
        }
    }

    return 0;
}
