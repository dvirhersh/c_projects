/* ### Write your code below this line ### */
#include <stdio.h>
#include <assert.h>

int StringToInteger(const char *str)
{
    int result = 0;
    int sign = 1;

    assert(str != NULL);

    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    else if (*str == '+')
    {
        str++;
    }

    for (; *str != '\0'; str++)
    {
        if (*str >= '0' && *str <= '9')
            result = (*str - '0') + result * 10;
    }

    return sign * result;
}

int main(void)
{
    const char *test_cases[] = {
        "123",
        "-456",
        "+78d9",
        "42abc", // stops at 'a'
        "-0",
        "000123",
        "   999", // leading spaces won't be handled
        ""};
    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < num_cases; i++)
        printf("String: \"%s\" -> Integer: %d\n", test_cases[i], StringToInteger(test_cases[i]));

    return 0;
}
