#include <stdio.h>

#define N 11
#define LETTERS 26
#define A_ASCII 97

void how_many(char char_arr[], int n, int count_arr[]);

int main()
{
    char char_arr[N];
    int count_arr[LETTERS] = {0};

    printf("Start how_many program\n");
    printf("Enter %d small letters:\n", N);

    for (int i = 0; i < N; i++)
    {
        printf("Enter letter #%d: ", i + 1);
        scanf(" %c", &char_arr[i]);
    }

    printf("You entered: ");
    for (int i = 0; i < N; i++)
    {
        printf("%c ", char_arr[i]);
    }
    printf("\n");

    how_many(char_arr, N, count_arr);

    printf("\nLetter how_many\n");
    printf("------ --------\n");

    for (int i = 0; i < LETTERS; i++)
    {
        if (count_arr[i] > 0)
        {
            printf("%c       %d\n", i + A_ASCII, count_arr[i]);
        }
    }

    return 0;
}

void how_many(char char_arr[], int n, int count_arr[])
{
    for (int i = 0; i < n; i++)
    {
        if (char_arr[i] >= 'a' && char_arr[i] <= 'z')
        {
            count_arr[char_arr[i] - 'a']++;
        }
    }
}
