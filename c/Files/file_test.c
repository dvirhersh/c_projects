#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
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

int StrCompareType1(const char *command_n, const char *string)
{
    int result = 0;
    result = strcmp(command_n, string);
    return result;
}

int StrCompareType2(const char *command_n, const char *string)
{
    int result = 0;
    result = command_n[0] - string[0];
    return result;
}

int str_compare_defult(const char *command_n, const char *string)
{
    return 0;
}
/*struct for 2nd exc*/
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
    char string[1000] = {0};
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
    commaned_arr[4].str_compare = str_compare_defult;
    commaned_arr[4].act_t = FileAppend;
    while (results != EXIT)
    {
        printf("type wanted action\n");
        scanf("%[^\n]%*c", string);

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
    int i = 0;
    char *file_name = argv[1];
    printme_t *arr_struc = (printme_t *)malloc(sizeof(printme_t) * 10);
    assert(arr_struc != 0);

    for (i = 0; i < 10; i++)
    {
        arr_struc[i].value = i;
        arr_struc[i].Print = Print;
        arr_struc[i].Print(&arr_struc[i].value);
    }
    free(arr_struc);
    arr_struc = NULL;

    Logger(file_name);

    return 0;
}
