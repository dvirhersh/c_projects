#include <stdio.h>
#include "pointers_header.h"

#define N 4

int main(void)
{
    int x = 15, y = 32;
    int arr_1[N] = {1, 2, 5, 15};
    size_t i;
    int arr_2[N];

    CopyArray(arr_1, arr_2, N);
    printf("arr2 = \n");
    for (i = 0; i < N; i++)
    {
        printf("%d\n", arr_2[i]);
    }

    printf("before: x = %d, y = %d\n", x, y);
    Swap(&x, &y);
    printf("after : x = %d, y = %d\n", x, y);
    
    printf("\n");
    PrintAddr();

    return 0;
}
