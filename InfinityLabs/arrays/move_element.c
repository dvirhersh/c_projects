#include <stdio.h>

static void MoveOne(int array[], size_t size);

void MoveElements(int array[], size_t size, size_t count)
{
    size_t i = 0;

    if (count == 0 || count >= size)
        return;
    for (; i < count; ++i)
        MoveOne(array, size);
}

static void MoveOne(int array[], size_t size)
{
    int temp = array[0];
    size_t i = 1;

    for (; i < size; ++i)
        array[i - 1] = array[i];

    array[size - 1] = temp;
}

int main()
{
    const int size = 8;
    int my_array[8] = {3, 7, 2, 8, 5, 9, 1, 4};
    printf("Testing Report:\n\n");
    MoveElements(my_array, size, 3);
    printf("Array contents:\n");

    for (int i = 0; i < 8; i++)
        printf("%d ", my_array[i]);

    printf("\n"); // to move to the next line after printing

    return 0;
}
