#include <stdio.h>
#include <assert.h>

int MaxInstances(const int array[], int size, int *number)
{
    if (size <= 0)
        return 0;

    int max_num = array[0], max_len = 1;
    int curr_len = 1;

    for (int i = 1; i < size; ++i)
    {
        if (array[i] == array[i - 1])
        {
            curr_len++;
        }
        else
        {
            if (curr_len > max_len)
            {
                max_len = curr_len;
                max_num = array[i - 1];
            }
            curr_len = 1;
        }
    }

    if (curr_len > max_len)
    {
        max_len = curr_len;
        max_num = array[size - 1];
    }

    *number = max_num;
    return max_len;
}

void run_test(const int array[], int size, int expected_num, int expected_len)
{
    int result_num;
    int result_len = MaxInstances(array, size, &result_num);
    printf("Input: ");
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\nResult: number = %d, length = %d\n", result_num, result_len);
    assert(result_num == expected_num);
    assert(result_len == expected_len);
    printf("Test passed\n\n");
}

int main()
{
    int arr1[] = {1, 1, 2, 2, 2, 3};
    run_test(arr1, 6, 2, 3);

    int arr2[] = {5, 5, 5, 5, 5};
    run_test(arr2, 5, 5, 5);

    int arr3[] = {9};
    run_test(arr3, 1, 9, 1);

    int arr4[] = {1, 2, 3, 4, 5};
    run_test(arr4, 5, 1, 1);

    int arr5[] = {7, 7, 8, 8, 8, 7, 7, 7, 7};
    run_test(arr5, 9, 7, 4);

    int arr6[] = {-1, -1, -1, -2, -2};
    run_test(arr6, 5, -1, 3);

    // int arr7[] = {};
    // run_test(arr7, 0, -1, 0); // expect sentinel value and 0 length

    return 0;
}
