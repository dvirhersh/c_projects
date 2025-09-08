#include <stdio.h>

void CopyArray(const int *src, int *dst, size_t size)
{
    size_t i;

    if (NULL == dst || NULL == src)
        return;

    for (i = 0; i < size; i++)
    {
        dst[i] = src[i];
    }

    return;
}
