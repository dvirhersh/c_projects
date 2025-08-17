#include <stdio.h>

int add(int a, int b);
void square(int x);
void square_in_place(int *px);
void print_array(int arr[], int size);
void swap(int **x, int **y);
void swap_ptrs(int **x, int **y);
void find_max_ptr(int arr[], int n, int **out);
int find_minmax_ptr(int arr[], int n, int **out_min, int **out_max);
int split_words(char *s, char *out[], int max_tokens);

int main(void)
{
    int num[] = {7, -3, 14, 2, 14, 9};
    int *pmax = NULL;
    find_max_ptr(num, 6, &pmax);
    printf("*pmax = %d, index = %d\n\n", *pmax, (int)(pmax - num));

    int *pmin = NULL;
    pmax = NULL;
    int my_array[] = {5, -1, 7, -1, 3, 7};
    int result = find_minmax_ptr(my_array, 6, &pmin, &pmax);
    if (result != 0)
    {
        printf("invalid input\n");
        return 1; // or just return from main
    }

    printf("*pmin = %d, index = %d\n", *pmin, (int)(pmin - my_array));
    printf("*pmax = %d, index = %d\n\n", *pmax, (int)(pmax - my_array));

    char s[] = "  hello   world  C   rocks ";
    char *tokens[8];
    int n = split_words(s, tokens, 8);
    printf("n=%d\n", n);
    for (int i = 0; i < n; ++i)
    {
        printf("[%d] \"%s\"\n", i, tokens[i]);
    }

    return 0;
}

int split_words(char *s, char *out[], int max_tokens)
{
    if (!s || !out || max_tokens <= 0)
        return 0;

    int count = 0;
    char *p = s;

    // skip leading spaces
    while (*p == ' ')
        p++;

    // collect tokens
    while (*p && count < max_tokens)
    {
        // start of a word
        out[count++] = p;

        // walk to end of word
        while (*p && *p != ' ')
            p++;

        // if at end of string, done
        if (!*p)
            break;

        // terminate the word and move past the space
        *p++ = '\0';

        // skip consecutive spaces to the next word (if any)
        while (*p == ' ')
            p++;
    }

    return count;
}

int find_minmax_ptr(int arr[], int n, int **out_min, int **out_max)
{
    if (n <= 0 || !arr || !out_min || !out_max)
        return -1;

    int *max = &arr[0];
    int *min = &arr[0];

    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > *max)
            max = &arr[i];
        if (arr[i] < *min)
            min = &arr[i];
    }
    *out_max = max;
    *out_min = min;
    return 0;
}
void find_max_ptr(int arr[], int n, int **out)
{
    if (n <= 0 || out == NULL)
        return;

    int *max = &arr[0];
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > *max)
        {
            max = &arr[i];
        }
    }
    *out = max;
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