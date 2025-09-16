#include <stdio.h>
#include "g.h"

int main(void)
{
    printf("g_s = %d\n", g_s);
    Foo();
    printf("g_s = %d\n", g_s);

    return 0;
}
