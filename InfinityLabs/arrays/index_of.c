#include <stdio.h>

size_t IndexOf(const int array[], size_t size, int element)
{
    size_t i = 0;

    for (; i < size; i++)
        if (array[i] == element)
            return i;
    return -1;
}

int main()
{
    const int size = 5;
    int my_array[5] = {12, 45, 32, 56, 27};
    printf("Testing Report:\n\n");
    printf("IndexOf: %d\n", IndexOf(my_array, size, 56));

    return 0;
}
