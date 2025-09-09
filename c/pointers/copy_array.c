#include <stdio.h>

void CopyArray(int *dst, const int *src, size_t size)
{
    size_t i;

    if (NULL == dst || NULL == src)
        return;

    for (i = 0; i < size; i++)
    {
        dst[i] = src[i];
    }

}
