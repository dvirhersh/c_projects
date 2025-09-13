#include <stdio.h>
#include <stdlib.h>

struct line
{
    int length;
    char contents[0];
};

void TryOut(int this_length)
{
    /* allocate memory for struct + contents */
    struct line *this_line = malloc(sizeof(struct line) + this_length);
    int i = 0;

    if (!this_line)
    {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    }

    this_line->length = this_length;

    /* example usage: fill contents */
    for (i = 0; i < this_length; i++)
    {
        this_line->contents[i] = 'A' + (i % 26);
    }

    /* print contents as a string (null-terminated) */
    this_line->contents[this_length - 1] = '\0';
    printf("Line length = %d, contents = %s\n", this_line->length, this_line->contents);

    free(this_line);
}

int my_function(int number)
{
    int my_array[number];
    int i = 0;

    for (i = 0; i < number; i++)
    {
        my_array[i] = i * i;
    }

    printf("Array of squares up to %d:\n", number - 1);
    for (i = 0; i < number; i++)
    {
        printf("%d ", my_array[i]);
    }
    printf("\n");

    return my_array[number - 1];
}

int main(void)
{
    int n = 6;
    int result = my_function(n);

    TryOut(20);

    printf("Result (last square) = %d\n", result);

    return 0;
}
