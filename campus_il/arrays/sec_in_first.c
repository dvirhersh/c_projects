#include <stdio.h>

#define N 10
#define N_LITTLE 3

int sec_in_first(char first_arr[], int first_n, char sec_arr[], int second_n);

int main(void)
{
    char first_arr[N];
    char second_arr[N_LITTLE];

    printf("Enter %d characters for the main array:\n", N);
    for (int i = 0; i < N; i++)
    {
        if (scanf(" %c", &first_arr[i]) != 1)
        {
            printf("Invalid input. Exiting.\n");
            return 1;
        }
    }

    printf("Enter %d characters for the sub-array:\n", N_LITTLE);
    for (int i = 0; i < N_LITTLE; i++)
    {
        if (scanf(" %c", &second_arr[i]) != 1)
        {
            printf("Invalid input. Exiting.\n");
            return 1;
        }
    }

    if (sec_in_first(first_arr, N, second_arr, N_LITTLE))
        printf("The second array appears in the first array.\n");
    else
        printf("The second array does NOT appear in the first array.\n");

    return 0;
}

int sec_in_first(char first_arr[], int first_n, char sec_arr[], int second_n)
{
    int result = 0;

    for (int i = 0; i <= first_n - second_n; i++)
    {
        int match = 1;
        for (int j = 0; j < second_n; j++)
        {
            if (first_arr[i + j] != sec_arr[j])
            {
                match = 0;
                break;
            }
        }
        if (match)
        {
            result = 1;
            break;
        }
    }
    return result;
}
