#include <stdio.h>
#define N 5

int read_numbers(int arr[])
{
    int index = 0, num;
    while (1)
    {
        scanf("%d", &num);
        if (num == 0)
            break;
        arr[index] = num;
        index = (index + 1) % N;
    }
    return index;
}

void print_last_numbers(const int arr[], int index)
{
    for (int i = index; i < N; i++)
        printf("%d ", arr[i]);
    for (int i = 0; i < index; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(void)
{
    int arr[N] = {0};
    printf("Enter numbers, end with 0\n");
    int index = read_numbers(arr);
    print_last_numbers(arr, index);
}
