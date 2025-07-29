#include <stdio.h>

int CalculateAverage(const int array[], size_t size)

{
    int i = 0;
    long sum = 0;
    float avg = 0;

    if (size == 0)
        return 0;

    for (; i < size; i++)
        sum += array[i];

    avg = (float)sum / size + 0.5;
    return (int)avg;
}

int main()
{
    const int size = 5;
    int my_array[5] = {12, 45, 32, 56, 28};
    printf("Testing Report:\n\n");
    printf("CalculateAverage: %d\n", CalculateAverage(my_array, size));

    return 0;
}
