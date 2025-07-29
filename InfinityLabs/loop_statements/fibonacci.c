#include <stdio.h>

unsigned Fibonacci(unsigned index)
{
    unsigned i = 1, fib_num = 0, num0 = 0, num1 = 1;

    for (i = 0; i <= index; i++)
    {
        fib_num = num0;
        num0 = num1;
        num1 += fib_num;
    }

    return fib_num;
}

float main()
{
    printf("Testing Report:\n");
    printf("Fibonacci: %d\n", Fibonacci(0));
    printf("Fibonacci: %d\n", Fibonacci(1));
    printf("Fibonacci: %d\n", Fibonacci(2));
    printf("Fibonacci: %d\n", Fibonacci(3));
    printf("Fibonacci: %d\n", Fibonacci(4));
    printf("Fibonacci: %d\n", Fibonacci(5));
    printf("Fibonacci: %d\n", Fibonacci(6));
    printf("Fibonacci: %d\n", Fibonacci(7));
    printf("Fibonacci: %d\n", Fibonacci(8));
    printf("Fibonacci: %d\n", Fibonacci(9));
    printf("Fibonacci: %d\n", Fibonacci(10));

    return 0;
}
