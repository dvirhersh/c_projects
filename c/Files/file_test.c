#include <stdio.h>  /*for sizeof, printf, scanf*/
#include <string.h> /*for strcmp*/
#include <time.h>   /*for time*/
#include <stdlib.h> /*for free()*/
#include "file.h"

static void Print(int num);
static void PrintMeMain();
static int StrCompareType1(const char *command_n, const char *string);
static int StrCompareType2(const char *command_n, const char *string);
static int StrCompareDefult(const char *command_n, const char *string);
op_status_t Logger(char *file_name);
int main(int argc, char *argv[]);

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

static int StrCompareType1(const char *command_n, const char *string)
{
    int result = 0;
    result = strcmp(command_n, string);
    return result;
}

static int StrCompareType2(const char *command_n, const char *string)
{
    int result = 0;
    result = command_n[0] - string[0];
    return result;
}

static int StrCompareDefult(const char *command_n, const char *string)
{
    (void)command_n;
    (void)string;
    return 0;
}

typedef struct Commands
{
    const char *command_n;
    int (*str_compare)(const char *command_n, const char *string);
    op_status_t (*act_t)(const char *, const char *file_name);
} commands_t;

op_status_t Logger(char *file_name)
{
    int num_commaneds = 5;
    int i = 0;
    int commaned_found = 1;
    op_status_t results = FAIL;
    enum
    {
        STR_LEN = 10
    };
    char string[STR_LEN] = {0};
    commands_t *commaned_arr = (commands_t *)malloc(sizeof(commands_t) * 5);
    commaned_arr[0].command_n = "-remove";
    commaned_arr[0].str_compare = StrCompareType1;
    commaned_arr[0].act_t = FileDelete;
    commaned_arr[1].command_n = "-count";
    commaned_arr[1].str_compare = StrCompareType1;
    commaned_arr[1].act_t = FileCountLinesAndPrint;
    commaned_arr[2].command_n = "-exit";
    commaned_arr[2].str_compare = StrCompareType1;
    commaned_arr[2].act_t = FileExitProgram;
    commaned_arr[3].command_n = "<";
    commaned_arr[3].str_compare = StrCompareType2;
    commaned_arr[3].act_t = FilePrependLine;
    commaned_arr[4].command_n = "defult";
    commaned_arr[4].str_compare = StrCompareDefult;
    commaned_arr[4].act_t = FileAppend;
    while (1)
    {
        printf("type wanted action\n");
        if (scanf("%[^\n]%*c", string) != 1)
        {
            printf("Dvir debug 1");
            fprintf(stderr, "Failed to read input\n");
        }

        for (i = 0; i < num_commaneds; i++)
        {
            commaned_found = commaned_arr[i].str_compare(commaned_arr[i].command_n, (const char *)string);
            if (commaned_found == 0)
            {
                results = commaned_arr[i].act_t((const char *)string, (const char *)file_name);
                printf("%d\n", results);
                break;
            }
        }
    }
    free(commaned_arr);
    commaned_arr = NULL;
    return results;
}

int main(int argc, char *argv[])
{
    char *file_name = argv[1];

    (void)argc;

    PrintMeMain();

    Logger(file_name);

    return 0;
}
