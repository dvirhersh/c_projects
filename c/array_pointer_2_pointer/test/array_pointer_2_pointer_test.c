#include <stdio.h>
#include <stdlib.h>
#include "matrix_sum_of_each_row.h"
#include "joseph_problem.h"
#include "data_type.h"
#include "buffer_lower_case.h"

int main(int argc, char *argv[], char **envp)
{

    int matrix[3][4] =
        {{1,1,1,1},
         {2,2,2,8},
         {3,3,3,3}};

    int result[3] = {0};
    size_t i = 0;
    char** buffer_lower_case = BufferLowerCase(envp);
    PrintBuffer(buffer_lower_case);
    FreeBuffer(buffer_lower_case);
    free(buffer_lower_case);

    printf("\nmatrix[1][3] = %d\n", matrix[1][3]);

    MatrixSumOfEachRow(3, 4, (const int*)matrix, result);

    printf("\nTest array and pointer to pointer ->\n\n");

    for (i = 0; i < 3; i++)
    {
        printf("result arr[%lu] is: %d \n", i, result[i]);
    }

    DataTypes();

    return 0;
}