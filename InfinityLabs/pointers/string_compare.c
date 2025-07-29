#include <stdio.h>
#include <assert.h>

int StringCompare(const char *str1, const char *str2)
{
    int i = 0;

    assert(str1 != NULL && str2 != NULL);

    while (*str1 == *str2 && *str1 != '\0')
    {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

int main()
{
    printf("\nTesting Report:\n");
    char *str1 = "May the force be with g";
    char *str2 = "May the force be with ";
    int comp_result = StringCompare(str1, str2);
    printf("comp_result = %d\n", comp_result);

    return 0;
}
