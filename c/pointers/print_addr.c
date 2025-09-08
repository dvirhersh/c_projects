#include <stdio.h>
#include <stdlib.h>

void PrintAddr()
{
    static int s_i = 7;
    int *ptr = &s_i;

    int i = 7;
    int *ptr2 = &i;

    int **ptr3 = &ptr2;

    int *ptr4 = (int *)malloc(sizeof(int));
    if (!ptr4) 
        {
            printf("malloc issue in PrintAddr\n");
            return;
        }

    printf("static int s_i addr = %p\n", (void*)ptr);
    printf("int i          addr = %p\n", (void*)ptr2);
    printf("&ptr2          addr = %p\n", (void*)ptr3);
    printf("arr *ptr4      addr = %p\n\n", (void*)ptr4);

    free(ptr4);

    return;
}
