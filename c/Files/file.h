#include <stdio.h>
/* this is in the file_test.c
typedef int (*cmdcompare_t)(const char*, const char*);
typedef op_status_t (*act_t)(const char*, const File*);

typedef struct Operation
{
    char* command;
    cmdcompare_t cmp;
    act action;
} operation_t;
*/

typedef enum Operation_Status
{
    SUCCESS,
    FAIL
    /*add more statuses here*/
} op_status_t;/* c_2_commands_t c_2_commands__t

act option */  
/*explain what this function does*/
op_status_t FileAppend(const char*, FILE*);

op_status_t FileDelete(const char*, FILE*);
/*explain what this function does*/
op_status_t FileCountLinesAndPrint(const char*, FILE*);
/*explain what this function does*/
op_status_t FileExitProgram(const char*, FILE*);
/*explain what this function does*/
op_status_t FilePrependLine(const char*, FILE*);
