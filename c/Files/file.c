#include <stdio.h>  /* printf */
#include <stdlib.h> /* strcmp */
#include <string.h> /* malloc */
#include "file.h"

typedef int (*cmd_compare_t)(const char *, const char *);
typedef op_status_t (*act_t)(const char *, const char *file_name);
static char *ReadLine(FILE *stream);

typedef struct file_op
{
    const char *op;
    cmd_compare_t cmd_compare_func;
    act_t act;
} operation_t;

static char *ReadLine(FILE *stream)
{
    size_t total = 0;
    int c = 0;
    enum
    {
        many_chars = 256
    };
    char *s = malloc(many_chars);
    if (s == NULL)
    {
        return NULL;
    }

    while (1)
    {
        c = fgetc(stream);
        if (c == EOF)
        {
            if (total == 0)
            {
                free(s);
                return NULL;
            }
            break;
        }
        if (c == '\n')
        {
            break;
        }

        s[total++] = (char)c;
    }
    s[total] = '\0';
    return s;
}

static int CompareDefault(const char *str1, const char *str2)
{
    (void)str1;
    (void)str2;
    return 1;
}

static int CompareCommand(const char *user_input, const char *cmd)
{
    return strcmp(user_input, cmd) == 0;
}

static int CompareLessThen(const char *user_input, const char *cmd)
{
    (void)cmd;
    return user_input && user_input[0] == '<';
}

op_status_t FileAppend(const char *str, const char *file_name)
{
    FILE *fptr = fopen(file_name, "a");
    if (NULL == fptr)
        return FAILED_TO_OPEN;

    if (fprintf(fptr, "\n") < 0 || fprintf(fptr, "%s", str) < 0)
    {
        fclose(fptr);
        return FAILED_TO_WRITE;
    }

    if (fclose(fptr) != 0)
        return FAILED_TO_CLOSE;

    return SUCCESS;
}

op_status_t FileRemove(const char *null_ptr, const char *file_name)
{
    (void)null_ptr;

    if (remove(file_name) == 0)
    {
        printf("File %s was deleted\n", file_name);
        return SUCCESS;
    }

    printf("Couldn't delete File %s", file_name);
    return FAILED_TO_DELETE_FILE;
}

op_status_t FileCountLinesAndPrint(const char *null_ptr, const char *file_name)
{
    size_t number_of_lines = 0;
    int c = 0;

    FILE *fptr = fopen(file_name, "r");
    if (NULL == fptr)
        return FAILED_TO_OPEN;

    (void)null_ptr;

    while ((c = fgetc(fptr)) != EOF)
        if ('\n' == c)
            number_of_lines++;
    number_of_lines++;

    if (fclose(fptr) != 0)
        return FAILED_TO_CLOSE;

    printf("number of lines is: %lu\n", number_of_lines);

    return SUCCESS;
}

op_status_t FileExitProgram(const char *str, const char *file_name)
{
    (void)str;
    (void)file_name;

    return EXIT;
}

op_status_t FilePrependLine(const char *string, const char *file_name)
{
    FILE *fptr = NULL;
    char *temp_file = NULL;
    long file_size = 0;
    size_t read_check = 0;

    fptr = fopen(file_name, "rb");
    if (fptr == NULL)
        return FAILED_TO_OPEN;

    fseek(fptr, 0, SEEK_END);
    file_size = ftell(fptr);
    rewind(fptr);

    temp_file = (char *)malloc(file_size);
    if (temp_file == NULL)
    {
        fclose(fptr);
        return FAILED_TO_CLOSE;
    }

    read_check = fread(temp_file, 1, file_size, fptr);
    if ((long)read_check != file_size)
    {
        free(temp_file);
        temp_file = NULL;
        fclose(fptr);
        return FAILED_TO_CLOSE;
    }

    fclose(fptr);

    fptr = fopen(file_name, "wb");
    if (fptr == NULL)
    {
        free(temp_file);
        temp_file = NULL;
        return FAIL;
    }

    string++; /* for "<" */
    while (*string == ' ')
    {
        string++;
    }

    fputs(string, fptr);
    fputc('\n', fptr);

    fwrite(temp_file, 1, file_size, fptr);
    free(temp_file);
    temp_file = NULL;

    fclose(fptr);
    return SUCCESS;
}

void EnterStringToTheFile(char *file_name)
{
    char *next_line;
    size_t i = 0, size;
    op_status_t status = 0;
    const operation_t operationsArray[] =
        {{"-remove", CompareCommand, FileRemove},
         {"-count", CompareCommand, FileCountLinesAndPrint},
         {"-exit", CompareCommand, FileExitProgram},
         {"<", CompareLessThen, FilePrependLine},
         {NULL, CompareDefault, FileAppend}};
    size = sizeof(operationsArray) / sizeof(operationsArray[0]);

    while (1)
    {
        printf("Enter your string\n");
        next_line = ReadLine(stdin);

        if (NULL == next_line)
            return;

        for (i = 0; i < size; i++)
        {
            if (operationsArray[i].cmd_compare_func(next_line,
                                                    operationsArray[i].op))
            {
                status = operationsArray[i].act(next_line, file_name);
                free(next_line);
                if (status == EXIT)
                    return;
                if (status == FAIL)
                    fprintf(stderr, "Failure \n");
                break;
            }
        }
    }
}

/*
int main(void)
{
    FILE *fptr;
    fptr = fopen("Elul.txt", "w");
    if (NULL == fptr)
        return FAILED_TO_OPEN;

    FileAppend("My name is what??", "Elul.txt");
    FileCountLinesAndPrint(NULL, "Elul.txt");
    FilePrependLine("Asaf birthday", "Elul.txt");
    FileRemove(NULL, "Elul.txt");

    EnterStringToTheFile("Elul.txt");
    FileExitProgram(NULL, "Elul.txt");
    printf("Check if exit\n");

    fclose(fptr);

    return SUCCESS;
    }
*/