#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x = 5, y = 7;
    swap(&x, &y);
    printf("x: %d, y: %d", x, y);
    return 0;
}