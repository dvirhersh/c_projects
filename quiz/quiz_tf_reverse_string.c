#include <stdio.h>
#include <stdlib.h>

void TF(int num)
{
    int i = 0;
    for (; i < num; i++)
    {
        if (0 == i % 5)
        {
            printf("T");
        }
        else if (0 == i % 3)
        {
            printf("F");
        }
        else
        {
            printf("%d", i);
        }
    printf("\n");
    }
}

static void SwapChars(char *ch1, char *ch2)
{
    char temp = *ch1;
    *ch1 = *ch2;
    *ch2 = temp;
}

static void LowerCase(char *ch)
{
    if (*ch >= 'A' && *ch <= 'Z')
        *ch += 'a' - 'A';
}

void ReverseString(char *str)
{
    size_t str_length = 0;
    size_t i = 0;

    while(str[str_length])
    {
        str_length++;
    }

    str_length--;

    for (i = 0; i < str_length / 2; i++)
    {
        LowerCase(&str[i]);
        LowerCase(&str[str_length - i]);
        SwapChars(&str[i],&str[str_length - i]);
    }

    LowerCase(&str[str_length / 2]);
}

int main(void)
{
    char my_str[] = "abCdEF";

    TF(16);

    ReverseString(my_str);
    printf("Reversed string = %s\n", my_str);

    return 0;
}