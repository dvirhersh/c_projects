#include <stdio.h>
#include <stdlib.h>

void allocateArray(int **arr, int size)
{
    *arr = malloc(size * sizeof(int)); // change the caller's pointer
}

int main()
{
    int *myArray = NULL;
    allocateArray(&myArray, 5);

    for (int i = 0; i < 5; i++)
        myArray[i] = i * 10;

    for (int i = 0; i < 5; i++)
        printf("%d ", myArray[i]);

    free(myArray);
}
