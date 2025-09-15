#include <stdio.h>  /* printf */
#include <stdlib.h> /* malloc */
#include "file.h"

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

op_status_t FileDelete(const char *null_ptr, const char *file_name)
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

    if (fclose(fptr) != 0)
        return FAILED_TO_CLOSE;

    printf("number of lines is: %lu\n", number_of_lines);

    return SUCCESS;
}

op_status_t FileExitProgram(const char *str, const char *file_name)
{
    (void)str;
    (void)file_name;

    return 0;
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
        return FAIL;
    }

    fputs(string, fptr);
    fputc('\n', fptr);

    fwrite(temp_file, 1, file_size, fptr);
    free(temp_file);
    temp_file = NULL;

    fclose(fptr);
    return SUCCESS;
}

int main(void)
{
    FileAppend(NULL, "dvir.txt");
    FileDelete(NULL, "dvir.txt");
    return 0;
}