#include <stdio.h>

int main(void)
{
    int x = 42;
    int *p = &x;
    int **pp = &p;

    printf("x = %d\n", x);
    printf("x = %d\n", *p);
    printf("x = %d\n", **pp);

    **pp = 99;
    printf("x = %d\n", x);
    printf("x = %d\n", *p);
    printf("x = %d\n", **pp);

    return 0;
}