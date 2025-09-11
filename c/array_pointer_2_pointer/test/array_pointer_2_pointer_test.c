#include <stdio.h>
#include "matrix_sum_of_each_row.h"
#include "joseph_problem.h"
#include "data_type.h"

int main(int argc, char *argv[], char *envp[])
{

    int matrix[3][4] =
        {{1,1,1,1},
         {2,2,2,8},
         {3,3,3,3}};

    int result[3] = {0};
    size_t i = 0;
    int j = 0;

    printf("matrix[1][3] = %d\n", matrix[1][3]);

    MatrixSumOfEachRow(3, 4, (const int*)matrix, result);

    printf("Test array and pointer to pointer ->\n\n");

    for (; i < 3; i++)
    {
        printf("result arr[%lu] is: %d \n", i, result[i]);
    }

    DataTypes();


    printf("Dvir debug 1 :\n");
    printf("Number of arguments: %d\n", argc);

    for (j = 0; j < argc; i++) {
        printf("Argument %lu: %s\n", i, argv[i]);
    }

    printf("Environment variables:\n");
    for (i = 0; envp[i] != NULL; i++) {
        printf("  %s\n", envp[i]);
    }

    return 0;
}