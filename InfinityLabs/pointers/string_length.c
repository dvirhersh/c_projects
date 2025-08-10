#include <stdio.h>
#include <assert.h>

size_t StringLength(const char *str)
{
    const char *s_iter = NULL;

    assert(str != NULL);

    for (s_iter = str; *s_iter != '\0'; ++s_iter)
        ;

    return s_iter - str;
}

int main()
{
    printf("\nTesting Report:\n");
    // char *str = NULL;
    char *str = "May the force be with u, ";
    int length = StringLength(str);
    printf("length = %d\n", length);

    return 0;
}
