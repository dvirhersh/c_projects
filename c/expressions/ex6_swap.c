#include <stdio.h>

void swap(int *x, int *y)
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
    swap(&x, &y);
    printf("after: x = %d, y = %d\n", x, y);

    *(foo())=5;
    printf("\n%ld\n",l);

    return 0;


}