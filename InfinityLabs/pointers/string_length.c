#include <stdio.h>
#include <assert.h>

size_t StringLength(const char *str)
{
    size_t len = 0;

    assert(str != NULL);

    while (str[len] != '\0')
        len++;
    return len;
}

int main()
{
    printf("\nTesting Report:\n");
    // char *str = NULL;
    char *str = "May the force be with u";
    int length = StringLength(str);
    printf("length = %d\n", length);

    return 0;
}
