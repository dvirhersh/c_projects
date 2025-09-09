#include <stdio.h>

void SwapSizeT(size_t *x, size_t *y)
{
    size_t temp = *x;
    *x = *y;
    *y = temp;
}

void SwapSizeTPtr(size_t **x, size_t **y)
{
    size_t temp = **x;
    **x = **y;
    **y = temp;
}

void SwapSizeTPtr2(size_t **x, size_t **y)
{
    SwapSizeT(*x, *y);
}
