#include <stdio.h>
#include <string.h>

#define N 3
#define M 5

void TF(int num)
{
    int i = 0;
    for (; i < num; i++)
    {
        if (0 == num % N)
        {
            printf("T");
        }
        else if (0 == num % M)
        {
            printf("F");
        }
        printf("%d\n", num);
    }
}

void Lower(char *ch)
{
    if (*ch >= 'A' && *ch <= 'Z')
        *ch += 'a' - 'A';
}

void SwapChars(char *ch1, char *ch2)
{
    char temp = *ch1;
    *ch1 = *ch2;
    *ch2 = temp;
}

void ReverseString(char *str)
{
    size_t length = 0;
    size_t i = 0;

    while(*str)
    {
        length++;
        str++;
    }
    printf("%lu\n", length);

    for (i = 0; i < length; i++)
    {
        Lower(&str[i]);
        Lower(&str[length - i]);
        SwapChars(&str[i], &str[length - i]);
    }

}

int main(void)
{
    TF(6);
    TF(30);
    TF(33);
    TF(35);
    TF(4);

    // char my_str[] = "Hello World";
    // ReverseString(my_str);
    // printf("%s\n", my_str);
}