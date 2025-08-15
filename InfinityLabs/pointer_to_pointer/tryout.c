#include <stdio.h>

int main()
{
    int x = 42;

    int *p = &x;   // p points to x
    int **pp = &p; // pp points to p

    printf("x  = %d\n", x);      // 42
    printf("*p = %d\n", *p);     // 42
    printf("**pp = %d\n", **pp); // 42

    return 0;
}
