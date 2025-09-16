#include <stdio.h>
#include "str.h"

void hello(void)
{
    printf("Hello from A!\n");
}

int main(void)
{
    size_t x = StrLen("Tachnis lo");
    printf("%lu\n", x);
    hello();

    return 0;
}
