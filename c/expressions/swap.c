#include <stdio.h>
#include "swap.h"

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;

}

    long l = 8;
    long *foo() {return &l;}

int main(void)
{
    int x = 15, y = 32;
    printf("before: x = %d, y = %d\n", x, y);
    Swap(&x, &y);
    printf("after : x = %d, y = %d\n", x, y);

    return 0;


}