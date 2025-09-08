#include <stdio.h>
#include "pointers_header.h"

int main(void)
{
    int x = 15, y = 32;

    printf("before: x = %d, y = %d\n", x, y);
    Swap(&x, &y);
    printf("after : x = %d, y = %d\n", x, y);

    return 0;
}
