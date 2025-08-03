#include <stdio.h>

void print_set(int arr[], int n);

int main()
{
    int arr[] = {4, 6, 1, 3, 4, 1, 8, 9, 6, 4, 53, 2, 6, 25, 7, 1, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    print_set(arr, n);
}

void print_set(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int is_duplicated = 0;
        for (int j = 0; j < i; j++)
        {
            // printf("arr[i=%d] = %d, arr[j=%d] = %d,\n", i, arr[i], j, arr[j]);
            if (arr[i] == arr[j])
            {
                is_duplicated = 1;
                break;
            }
        }
        if (!is_duplicated)
            printf("%d ", arr[i]);
    }
    printf("\n");
}
