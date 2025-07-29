#include <stdio.h>

static void ShiftLet(int array[], size_t size);

void MoveElements(int array[], size_t size, size_t count)
{
    size_t i = 0;
    int temp;

    if (count == 0 || count >= size)
        return;

    for (; i < count; i++)
    {
        temp = array[0];
        ShiftLet(array, size - 1);
        array[size - 1] = temp;
    }
}

static void ShiftLet(int array[], size_t size)
{
    size_t i;
    for (i = 0; i < size; i++)
        array[i] = array[i + 1];
}

int main()
{
    const int size = 8;
    int my_array[8] = {3, 7, 2, 8, 5, 9, 1, 4};
    printf("Testing Report:\n\n");
    MoveElements(my_array, size, 3);
    printf("MArray contents:\n");

    for (int i = 0; i < 8; i++)
        printf("%d ", my_array[i]);

    printf("\n"); // to move to the next line after printing

    return 0;
}
