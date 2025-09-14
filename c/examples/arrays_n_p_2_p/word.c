#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int main(void)
{
    printf("Pointer size: %lu bytes\n", sizeof(void *));
    printf("Word size:    %lu bits\n", sizeof(void *) * 8);
    printf("int:          %lu bytes (%lu bits)\n", sizeof(int),
           sizeof(int) * CHAR_BIT);
    printf("long:         %lu bytes (%lu bits)\n", sizeof(long),
           sizeof(long) * CHAR_BIT);
    printf("void*:        %lu bytes (%lu bits)\n", sizeof(void *),
           sizeof(void *) * CHAR_BIT);
    printf("int32_t: %lu bytes\n", sizeof(int32_t));
    printf("int64_t: %lu bytes\n", sizeof(int64_t));
    printf("size_t:  %lu bytes\n", sizeof(size_t));
    return 0;
}
