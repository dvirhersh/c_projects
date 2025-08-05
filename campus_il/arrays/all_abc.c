#include <stdio.h>

#define N 26

int all_abc(int arr[]);

int main(void)
{
    int chars[N] = {0};
    printf("Enter chars, end with 0\n");

    if (all_abc(chars))
        printf("All ABC letters are in your input\n");
    else
        printf("Some of the ABC letters are missing\n");

    return 0;
}

int all_abc(int arr[])
{
    char ch;
    while (1)
    {
        scanf(" %c", &ch);
        if (ch == '0')
            break;
        if (ch >= 'A' && ch <= 'Z')
            arr[ch - 'A']++;
    }

    for (int i = 0; i < N; i++)
    {
        if (arr[i] == 0)
            return 0;
    }
    return 1;
}
