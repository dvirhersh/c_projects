#include <stdio.h>

typedef enum Operation_Status
{
    SUCCESS,
    FAIL
} op_status_t;

/* typedef int (*compare_2_commands_t)(const char*, const char*);
 typedef op_status_t (*act_t)(const char*, const File*);

typedef struct Operation
{
    char* command;
    compare_2_commands_t cmp;
    act_t action;
} operation_t;

act option */

op_status_t FileAppend(const char*, FILE*);

op_status_t FileDelete(const char*, FILE*);

op_status_t FileCountLinesAndPrint(const char*, FILE*);

op_status_t FileExitProgram(const char*, FILE*);

op_status_t FilePrependLine(const char*, FILE*);
