#include <stdio.h>

#define N 5

int main(void)
{
    int arr[N] = {};
    int x;

    printf("Enter %d numbers:\n", N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &x);
        arr[i] = x;
    }

    printf("The numbers in reverse are:\n");
    for (int i = N - 1; i >= 0; i--)
        printf("%d\n", arr[i]);

    return 0;
}
