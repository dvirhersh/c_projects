#include <stdio.h>

void CopyArray(int *dst, const int *src, size_t size)
{
    size_t i = 0;

    if (NULL == dst || NULL == src)
        return;

    for (; i < size; i++)
    {
        dst[i] = src[i];
    }

}
