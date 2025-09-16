#include <stdio.h>
#include <stdlib.h>

void Foo(void)
{
    char str1[20];
    char *str2 = malloc(sizeof(*str2) * 20);
    const char *str3 = "whatever";
    char str4[] = "whatever";
    printf("str3 = %s\n", str3);
    str3[1] = 'a';
}

int main(void)
{
    Foo();
    return 0;
}