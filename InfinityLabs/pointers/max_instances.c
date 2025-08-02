#include <stdio.h>

int MaxInstances(const int array[], int size, int *number)
{
    if (size <= 0)
        return 0;

    int max_number = array[0];
    int max_length = 1;
    int current_length = 1;

    for (int i = 1; i < size; i++)
    {
        if (array[i] == array[i - 1])
        {
            current_length++;
        }
        else
        {
            if (current_length > max_length)
            {
                max_length = current_length;
                max_number = array[i - 1];
            }
            current_length = 1;
        }
    }

    if (current_length > max_length)
    {
        max_length = current_length;
        max_number = array[size - 1];
    }

    *number = max_number;
    return max_length;
}

int main(void)
{
    int array[] = {1, 1, 1, 2, 2, 3, 3, 3, 3};
    int number;
    int length = MaxInstances(array, sizeof(array) / sizeof(array[0]), &number);
    printf("Number with max instances: %d\n", number);
    printf("Max length: %d\n", length);
    return 0;
}