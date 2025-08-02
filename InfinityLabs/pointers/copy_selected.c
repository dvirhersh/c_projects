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

// int CopySelected(const int array[], int size, int odd_numbers[])
// {
//     /* ### Write your code below this line ### */
//     int i = 0, j = 0;
//     while (i < size)
//     {
//         if (*(array + i) % 2)
//             *(odd_numbers + j++) = *(array + i);
//         i++;
//     }
//     return j;
// }

int main(void)
{
    const int size = 296;
    int source_arr[size];
    int new_arr[size];

    for (int i = 0; i < size; i++)
    {
        source_arr[i] = rand() % 100;
    }

    printf("\nTesting Report:\n");

    int count = CopySelected(source_arr, size, new_arr);
    printf("num of odd numbers is: %d\n", count);
    printf("Odd numbers:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", new_arr[i]);
    }
    printf("\n");

    return 0;
}
