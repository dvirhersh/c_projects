#include <stdio.h>

#define N 10
#define OPTIONS 101

void print_how_many_grades(int arr[], int size);

int main(void)
{
    int grades[N] = {0};
    printf("Enter 10 grades:\n");

    for (int i = 0; i < N; ++i)
    {
        scanf("%d", &grades[i]);
    }

    print_how_many_grades(grades, N);
}

void print_how_many_grades(int arr[], int size)
{
    int arr_grades_options[OPTIONS] = {0};
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0 && arr[i] <= 100)
            arr_grades_options[arr[i]]++;
    }

    for (int i = 0; i < OPTIONS; i++)
    {
        if (arr_grades_options[i] > 0)
            printf("%d appears %d times\n", i, arr_grades_options[i]);
    }
}
