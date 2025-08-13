#include <stddef.h>

int CalculateAverage(const int array[], size_t size)

{
    int i = 0;
    int sum = 0;
    float avg = 0;

    if (size <= 0)
        return 0;

    for (; i < size; i++)
        sum += array[i];

    avg = (float)sum / size + 0.5;
    return (int)avg;
}

int main()
{
    int my_array[] = {12, 45, 32, 56, 28};
    int size = sizeof(my_array) / sizeof(my_array[0]);
    printf("\nTesting Report:\n");
    printf("CalculateAverage: %d\n", CalculateAverage(my_array, size));

    return 0;
}
