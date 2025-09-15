#include <stdio.h>

static void Print(int num);
static void PrintMeMain();
int main(void);

typedef struct
{
    int num;
    void (*Print)(int);
} print_me_t;

static void Print(int num)
{
    printf("Number = %d\n", num);
}

static void PrintMeMain()
{
    size_t i = 0;
    enum
    {
        ARRAY_LEN = 10
    };
    print_me_t arr[ARRAY_LEN];

    for (i = 0; i < ARRAY_LEN; i++)
    {
        arr[i].num = i * 3;
        arr[i].Print = &Print;
        arr[i].Print(arr[i].num);
    }
}

int main(void)
{
    PrintMeMain();

    return 0;
}
