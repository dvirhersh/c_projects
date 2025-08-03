#include <stdio.h>

int get_third_from_end(int *arr, int n);

int main()
{
    int arr[] = {-7, 0, 22, 13, 5, 2, 9};
    int result = get_third_from_end(arr, 7);
    printf("%d\n", result);
}

int get_third_from_end(int *arr, int n)
{
    int *p = arr + (n - 3);
    return *p;
}
