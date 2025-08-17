#include <stdio.h>

void swap(int **x, int **y);

int main(void)
{

    int a = 10, b = 20;

    int *p1 = &a;
    int *p2 = &b;
    int **pp1 = &p1;
    int **pp2 = &p2;
    printf("before swap: a = %d, b = %d\n", a, b);
    swap(pp1, NULL);
    printf("after swap : a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int **x, int **y)
{
    if (!x || !y || !*x || !*y)
        return;

    int temp = **x;
    **x = **y;
    **y = temp;
}