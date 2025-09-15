#include <stdio.h>
/* this is in the file_test.c
typedef int (*cmdcompare_t)(const char*, const char*);
typedef op_status_t (*act_t)(const char*, const File*);

typedef struct file_op
{
    char* op;
    cmd_compare_t cmd_compare_func;
    act_t act;
} file_op_t;
*/

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
    FAIL
    /*add more statuses here*/
} op_status_t; /* c_2_commands_t c_2_commands__t

 act option */
/* Writes str to the end of file from a new line.
If file doesn't exist, creates new and writes from start.
Returns FAILED_TO_OPEN on failure to open the file.
Returns FAILED_TO_WRITE on failure to append input_string.
Returns FAILED_TO_CLOSE on failure to close the file.
Returns SUCCESS on success */
op_status_t FileAppend(const char *str, const char *file_name);

/* Deletes file_name from the filesystem. Deallocates space if file_name was the
last link to a file and no processes have the file open.
Returns SUCCESS on success and FAILED_TO_DELETE_FILE on failure */
op_status_t FileRemove(const char *null_ptr, const char *file_name);

/* Tries to read the file and counts number of lines.
Returns FAILED_TO_OPEN if didn't succeed to open the file.
Returns FAILED_TO_READ on failure to read.
If succeeds, prints number of lines in terminal.
Returns FAILED_TO_CLOSE on failure to close.
If succeeds to close, returns SUCCESS. */
op_status_t FileCountLinesAndPrint(const char *null_ptr, const char *file_name);

/*explain what this function does*/
op_status_t FileExitProgram(const char *, const char *file_name);
/*explain what this function does*/
op_status_t FilePrependLine(const char *, const char *file_name);

void EnterStringToTheFile(char *file_name);
