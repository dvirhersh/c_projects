#include <stdio.h>
#include "pointers_test.h"

#define N 4

int main(void)
{
    int x = 15, y = 32;
    int arr_1[N] = {1, 2, 5, 15};
    size_t i;
    int arr_2[N];
    size_t a, b;
    size_t m = 111, n = 222;
    size_t *pm = &m, *pn = &n;
    size_t u = 5, v = 9;
    size_t *pu = &u, *pv = &v;

    CopyArray(arr_2, arr_1, N);
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

    printf("swap size\n");
    a = 10, b = 20;
    printf("Before SwapSizeT: a = %lu, b = %lu\n", a, b);
    SwapSizeT(&a, &b);
    printf("After  SwapSizeT: a = %lu, b = %lu\n\n", a, b);

    m = 111, n = 222;
    printf("Before SwapSizeTPtr : *pm = %lu, *pn = %lu\n", *pm, *pn);
    SwapSizeTPtr(&pm, &pn);
    printf("After  SwapSizeTPtr : *pm = %lu, *pn = %lu\n\n", *pm, *pn);

    printf("Before SwapSizeTPtr2: u = %lu, v = %lu\n", u, v);
    SwapSizeTPtr2(&pu, &pv);
    printf("After  SwapSizeTPtr2: u = %lu, v = %lu\n\n", u, v);

    printf("%lu\n", StrLen("pikachuu"));

    return 0;
}
