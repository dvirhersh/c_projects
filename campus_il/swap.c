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
    // printf("x: %d\ny: %d\n", x, y);

    double a, b, c;
    double *p = &a;
    *p = 4;
    printf("p: %p\n", (void *)p);
    printf("*p: %f\n\n", *p);
    double *q;
    q = p + 1;
    printf("q: %p\n", (void *)q);
    printf("*q: %f\n\n", *q);
    *q = 12;
    printf("q: %p\n", (void *)q);
    printf("*q: %f\n\n", *q);
    *(p + 2) = *p + *q;
    printf("(p + 2): %p\n", (void *)(p + 2));
    printf("*(p + 2): %f\n\n", *(p + 2));

    double arr[3];
    double *p1 = &arr[0];
    double *q1 = &arr[2];
    printf("%d\n", q1 - p1); // Should print -2
    return 0;
}