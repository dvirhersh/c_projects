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

    return strcpy(copy, str);
}

int main()
{

    printf("\nTesting Report:\n");

    printf("StringDuplicate = %s\n", StringDuplicate("Hello world"));

    return 0;
}
