#include <stdio.h>

int Add(int num1, int num2)
{
    int sum = 0;

    sum = num1 + num2;

    return sum;
}

int main()
{
    int result = Add(5, 3);
    printf("Testing Report:\n");
    printf("Running test: Add(num1=32, num2=10): %0d\n", Add(32, 10));
    printf("Running test: Add(num1=6, num2=2)  : %0d\n", Add(6, 2));
    printf("Running test: Add(num1=10, num2=26): %0d\n", Add(10, 26));
    printf("Running test: Add(num1=18, num2=21): %0d", Add(18, 21));
    return 0;
}