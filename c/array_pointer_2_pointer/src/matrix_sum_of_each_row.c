#include <stdio.h>

void MatrixSumOfEachRow(size_t rows, size_t cols, const int *arr, int *result)
{
    size_t i = 0;
    size_t j = 0;
    int row_sum = 0;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            row_sum += arr[i * cols + j];
        }
        
        result[i] = row_sum;
        row_sum = 0;
    }
}