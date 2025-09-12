#include <stdio.h>

void DataTypes(void)
{
    int a;
    char c;
    double d;
    int arr[5];

    printf("Size of int: %ld bytes\n", sizeof(int));
    printf("Size of char: %ld bytes\n", sizeof(c));
    printf("Size of double: %ld bytes\n", sizeof(d));
    printf("Size of long double: %ld bytes\n", sizeof(long double));
    printf("Size of short: %ld bytes\n", sizeof(short));
    printf("Size of long: %ld bytes\n", sizeof(long));
    printf("Size of variable 'a': %ld bytes\n", sizeof(a));
    printf("Size of array 'arr': %ld bytes\n", sizeof(arr));
    printf("Number of elements in 'arr': %ld\n", sizeof(arr) / sizeof(arr[0]));
    printf("Size of array 'arr': %ld bytes\n", sizeof(void *));
}
