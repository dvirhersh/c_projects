#include <stdio.h>
#include <assert.h>

int StringToInteger(const char *str)
{
    int ascii_value = 0;
    int sign = 1;

    assert(str != NULL);

    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    for (; *str >= '0' && *str <= '9'; str++)
    {
        ascii_value = ascii_value * 10 + (*str - '0');
    }

    return ascii_value * sign;
}

int main()
{
    printf("%d\n", StringToInteger("123"));
    printf("%d\n", StringToInteger("-456"));
    printf("%d\n", StringToInteger("789"));
    printf("%d\n", StringToInteger("007"));

    return 0;
}
