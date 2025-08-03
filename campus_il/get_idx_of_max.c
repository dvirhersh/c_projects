#include <stdio.h>

int get_idx_of_max(int arr[], int n);

#define N 5

int main()
{
    int arr[N] = {5, 2, 6, 33, 16};
    printf("Index of max number is: %d\n", get_idx_of_max(arr, N));
    int arr2[] = {-4, -2, -7, -2};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Index of max (arr2): %d\n", get_idx_of_max(arr2, n2));
    return 0;
}

int get_idx_of_max(int arr[], int n)
{
    int max = arr[0];
    int idx = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            idx = i;
        }
    }
    return idx;
}
