#include <stdio.h>
#include "matrix_sum_of_each_row.h"
#include "joseph_problem.h"

int main(void)
{
    
    int matrix[3][4] = 
        {{1,1,1,1},
         {2,2,2,2},
         {3,3,3,3}};
    
    int result[3] = {0};
    size_t i = 0;

    MatrixSumOfEachRow(3, 4, (const int*)matrix, result);
    
    printf("Test array and pointer to pointer ->\n\n");
    
    for (; i < 3; i++)
    {
        printf("result arr[%lu] is: %d \n", i, result[i]);
    }

    return 0;
}