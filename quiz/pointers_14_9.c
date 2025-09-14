#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    const char *str1 = "hello";

    size_t n = strlen(str1);
    char *str2 = (char *)malloc(n + 1);
    char *str3 = (char *)malloc(n + 1);
    const char *src = str1;
    char *dst = str3;

    if (!str2 || !str3)
    {
        free(str2);
        free(str3);
        printf("malloc failed\n");
        return 1;
    }

    while (*src)
    {
        *dst++ = *src++;
    }
    *dst = '\0';

    printf("orig: %s\n", str3);

    free(str2);
    free(str3);
    return 0;
}
