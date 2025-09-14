#include <stdio.h>

int main(void)
{
    int arr[10];
    int *p = arr;

    int arr1[5];
    int arr2[5];

    int *p1 = arr1;

    printf("%lu\n", sizeof(arr)); /* 40 (if int = 4 bytes)*/
    printf("%lu\n", sizeof(p));   /* 8 (on 64-bit system)*/

    /* arr1 = arr2; illegal: arrays are not assignable */
    p1 = arr1;

    printf("%p\n", arr);
    printf("%p\n", &arr);

    return 0;
}