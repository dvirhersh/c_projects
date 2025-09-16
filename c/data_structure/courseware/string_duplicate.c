#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

char *StringDuplicate(const char *str)
{
    char *copy = NULL;

    assert(str != NULL);

    copy = malloc(strlen(str) + 1);

    if (copy == NULL)
        return NULL;

    strcpy(copy, str);

    return copy;
}

int main()
{

    printf("\nTesting Report:\n");

    printf("StringDuplicate = %s\n", StringDuplicate("Hello world"));

    return 0;
}