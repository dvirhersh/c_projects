#include <stdio.h>

union Data
{
    int i;
    float f;
    char c;
};

int main(void)
{
    union Data d;

    d.i = 42;
    printf("i = %d\n", d.i);

    d.f = 3.14f; /* overwrites the memory */
    printf("f = %.2f\n", d.f);
    printf("i now = %d (corrupted)\n", d.i);

    d.c = 'A'; /* overwrites again */
    printf("c = %c\n", d.c);

    return 0;
}
