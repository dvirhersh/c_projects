#include <stdio.h>

int add(int a, int b);
void square(int x);
void square_in_place(int *px);
void print_array(int arr[], int size);
void swap(int **x, int **y);
void swap_ptrs(int **x, int **y);
void find_max_ptr(int arr[], int n, int **out);

int main(void)
{
    printf("10 + 20 = %d\n", add(10, 20));

    square(5);
    square(12);

    int a = 5;
    printf("before square_in_place : a = %d\n", a);
    square_in_place(&a);
    printf("after  square_in_place : a = %d\n", a);

    int nums[5] = {1, 2, 3, 4, 5};
    print_array(nums, 5);

    a = 10;
    int b = 20;
    int *p1 = &a, *p2 = &b;
    int **pp1 = &p1, **pp2 = &p2;
    printf("before swap : a = %d, b = %d\n", a, b);
    swap(pp1, pp2);
    printf("after  swap : a = %d, b = %d\n\n", a, b);

    a = 10;
    b = 20;
    printf("before swap_ptrs: a = %d, b = %d, *p1 = %d, *p2 = %d\n", a, b, *p1, *p2);
    swap_ptrs(&p1, &p2);
    printf("after  swap_ptrs: a = %d, b = %d, *p1 = %d, *p2 = %d\n\n", a, b, *p1, *p2);

    int num[] = {7, -3, 14, 2, 14, 9};
    int *pmax = NULL;
    find_max_ptr(num, 6, &pmax);
    printf("find_max_ptr:\n*pmax = %d, index = (int)(pmax - num) = %d\n\n", *pmax, (int)(pmax - num));
    return 0;
}

void find_max_ptr(int arr[], int n, int **out)
{
    if (n <= 0 || out == NULL)
        return;

    int max = arr[0];
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    *out = &max;
}

void swap_ptrs(int **x, int **y)
{
    int *tmp = *x;
    *x = *y;
    *y = tmp;
}
void swap(int **x, int **y)
{
    int temp = **y;
    **y = **x;
    **x = temp;
}

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void square_in_place(int *px)
{
    *px = *px * *px;
}

int add(int a, int b)
{
    return a + b;
}

void square(int x)
{
    printf("%d*%d = %d\n", x, x, x * x);
}