#include <stdio.h>
#include <stdlib.h>

int CopySelected(const int array[], int size, int odd_numbers[])
{
    int i = 0;
    int j = 0;
    for (; i < size; i++)
    {
        if (array[i] % 2)
        {
            odd_numbers[j++] = array[i];
        }
    }
    return j;
}

int main()
{
    const int size = 296;
    int source_arr[size];
    int new_arr[size];

    for (int i = 0; i < size; i++)
    {
        source_arr[i] = rand() % 100;
    }

    printf("\nTesting Report:\n");

    printf("num of odd numbers is : %0d\n", CopySelected(source_arr, size, new_arr));

    return 0;
}
