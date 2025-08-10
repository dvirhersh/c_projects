#include <stdio.h>

void rotate_left(int arr[], int size);

int main(void)
{

    int arr[] = {1, 8, 3, 9, 2, 4, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    rotate_left(arr, size);
    return 0;
}

void rotate_left(int arr[], int size)
{
    int first = arr[0];
    for (int i = 0; i < size - 1; i++)
        arr[i] = arr[i + 1];
    arr[size] = first;
}
