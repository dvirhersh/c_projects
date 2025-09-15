#include <stdio.h>  /*for sizeof, printf, scanf*/
#include <string.h> /*for strcmp*/
#include <time.h>   /*for time*/
#include "file.h"

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
    FILE *fptr;

    PrintMeMain();
    fptr = fopen("Elul.txt", "w");
    if (NULL == fptr)
        return FAILED_TO_OPEN;

    FileAppend("My name is what??", "Elul.txt");
    FileCountLinesAndPrint(NULL, "Elul.txt");
    FilePrependLine("Asaf birthday", "Elul.txt");
    /* FileDelete(NULL, "Elul.txt"); */

    EnterStringToTheFile("Elul.txt");
    FileExitProgram(NULL, "Elul.txt");
    printf("Check if exit\n");

    fclose(fptr);

    return 0;
}
