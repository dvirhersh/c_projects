#include <stdio.h>
#include <string.h>

void foo(int a[], int size)
{
    int i = 0;

    for (;i < size; ++i)
    {
        a[i] = i * 2;
    }
    printf("sizeof(a) = %ld\n", sizeof(a));
}

int main(int argc, char** argv, char** envp)
{
    char str[] = "welcome";
    int arr1[10] = {0};

    char* const p = "lalala";
    char arr[10] = "lalala";

    printf("sizeof(str) = %ld\n", sizeof(str));
    printf("strlen(str) = %ld\n", strlen(str));
    printf("sizeof(arr1) = %ld\n", sizeof(arr1));
    foo(arr1, 10);

    ++p;
    *p = 's';
    p[0] = 's';
    arr[1] = 's';
    *(arr+1) = 's';
    1[arr] = 's';



    return (0);
}