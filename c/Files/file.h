#ifndef __FILE_H__
#define __FILE_H__

#include <stdio.h>

typedef enum Operation_Status
{
    SUCCESS,
    FAILED_TO_OPEN,
    FAILED_TO_READ,
    FAILED_TO_WRITE,
    FAILED_TO_DELETE_FILE,
    FAILED_TO_CLOSE,
    NO_STRING_GIVEN,
    FAIL_IN_MALLOC,
    FAILED_TO_COPY,
    FAILED_TO_RENAME,
    FAIL,
    EXIT
    /*add more statuses here*/
} op_status_t; /* c_2_commands_t c_2_commands__t

 Writes str to the end of file from a new line.
 If file doesn't exist, creates new and writes from start.
 Returns FAILED_TO_OPEN(1) on failure to open the file.
 Returns FAILED_TO_WRITE(3) on failure to append input_string.
 Returns FAILED_TO_CLOSE(5) on failure to close the file.
 Returns SUCCESS(0) on success */
op_status_t FileAppend(const char *str, const char *file_name);

/* Deletes file_name from the filesystem. Deallocates space if file_name was the
last link to a file and no processes have the file open.
Returns SUCCESS (0)on success and FAILED_TO_DELETE_FILE(4) on failure */
op_status_t FileDelete(const char *null_ptr, const char *file_name);

/* Tries to read the file and counts number of lines.
Returns FAILED_TO_OPEN(1) if didn't succeed to open the file.
Returns FAILED_TO_READ(2) on failure to read.
If succeeds, prints number of lines in terminal.
Returns FAILED_TO_CLOSE(5) on failure to close.
If succeeds to close, returns SUCCESS(0). */
op_status_t FileCountLinesAndPrint(const char *null_ptr, const char *file_name);

/*Stops the program returns EXIT(10)*/
op_status_t FileExitProgram(const char *null_ptr, const char *file_name);

/*similar to FileAppend just adds the string at the begining of the file
Returns FAILED_TO_OPEN (1) on failure to open file.
Returns FAILED_TO_WRITE (2) on failure to prepend the input string.
Returns FAILED_TO_COPY(8) when coping of the original file to the temp file failed.
Returns FAILED_TO_RENAME(9) on failure to rename temp file to file_name.
Returns SUCCESS(0) on success.*/
op_status_t FilePrependLine(const char *str, const char *file_name);

void EnterStringToTheFile(char *file_name);

#endif /*__FILE_H__*/
