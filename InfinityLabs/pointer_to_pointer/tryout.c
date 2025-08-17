#include <stdio.h>

int main()
{
    int x = 42;

    int *p = &x;   // p points to x
    int **pp = &p; // pp points to p

    printf("x      = %d\n", x);      // value of x
    printf("*p     = %d\n", *p);     // value at address p
    printf("**pp   = %d\n\n", **pp); // value at address stored in pp

    printf("&x     = %p\n", (void *)&x);  // address of x
    printf("p      = %p\n\n", (void *)p); // value of p (address of x)

    printf("size of x  : %d bytes\n", sizeof(x));
    printf("size of p  : %d bytes\n", sizeof(p));
    printf("size of pp : %d bytes\n\n", sizeof(pp));

    printf("&p     = %p\n", (void *)&p);    // address of p
    printf("pp     = %p\n", (void *)pp);    // value of pp (address of p)
    printf("&pp    = %p\n\n", (void *)&pp); // address of pp

    printf("Size of int:        %zu bytes\n", sizeof(int));
    printf("Size of int*:       %zu bytes\n", sizeof(int *));

    printf("Size of char:       %zu bytes\n", sizeof(char));
    printf("Size of char*:      %zu bytes\n", sizeof(char *));

    printf("Size of float:      %zu bytes\n", sizeof(float));
    printf("Size of float*:     %zu bytes\n", sizeof(float *));

    printf("Size of double:     %zu bytes\n", sizeof(double));
    printf("Size of double*:    %zu bytes\n", sizeof(double *));

    printf("Size of void*:      %zu bytes\n", sizeof(void *));
    return 0;
}
