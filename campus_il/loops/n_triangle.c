#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter n for sequence: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
