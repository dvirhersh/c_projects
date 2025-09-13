#include <stdio.h>

struct Value
{
    int type; /* 0=int, 1=float */
    union
    {
        int i;
        float f;
    } data;
};

int main(void)
{
    struct Value v;

    v.type = 0;
    v.data.i = 100;
    printf("int: %d\n", v.data.i);

    v.type = 1;
    v.data.f = 9.81f;
    printf("float: %.2f\n", v.data.f);

    return 0;
}
