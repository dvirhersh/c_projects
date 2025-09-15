#include <stdio.h> /* printf */
#include "file.h"

op_status_t FileAppend(const char *str, const char *file_name)
{
    FILE *fptr = fopen(file_name, "a");

    if (NULL == fptr)
        return FAILED_TO_OPEN;

    fprintf(fptr, "/n");
    fprintf(fptr, "%s", str);
    fclose(fptr);

    return SUCCESS;
}

op_status_t FileDelete(const char *null_ptr, const char *file_name)
{
    (void)null_ptr;
    if (remove(file_name) == 0)
    {
        printf("File %s was deleted", file_name);
        return SUCCESS;
    }

    printf("Couldn't delete File %s", file_name);
    return FAILED_TO_DELETE_FILE;
}

op_status_t FileCountLinesAndPrint(const char *null_ptr, const char *file_name)
{

    size_t number_of_lines = 0;
    char c = 0;

    FILE *fptr = fopen(file_name, "r");
    if (NULL == fptr)
        return FAILED_TO_OPEN;

    (void)null_ptr;

    while ((c = fgetc(fptr)) != EOF)
        if ('\n' == c)
            number_of_lines++;

    fclose(fptr);

    printf("number of lines is: %lu\n", number_of_lines);

    return SUCCESS;
}

op_status_t FileExitProgram(const char *, const char *file_name);
op_status_t FilePrependLine(const char *, const char *file_name);