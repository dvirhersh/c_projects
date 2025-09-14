#include <stdio.h>

/* Some regular functions */
int Add(int a, int b)
{
    return a + b;
}

int Sub(int a, int b)
{
    return a - b;
}

/* Function that takes a function pointer as argument */
int Compute(int x, int y, int (*operation)(int, int))
{
    return operation(x, y);
}

int main(void)
{
    /* Declare a function pointer */
    int (*func_ptr)(int, int);

    /* Point to Add */
    func_ptr = &Add;
    printf("Add via function pointer: %d\n", func_ptr(5, 3));   /* 8 */

    /* Point to Sub */
    func_ptr = &Sub;
    printf("Sub via function pointer: %d\n", (*func_ptr)(5, 3)); /* 2 */

    /* Pass function pointer to another function */
    printf("Compute(Add): %d\n", Compute(10, 7, Add)); /* 17 */
    printf("Compute(Sub): %d\n", Compute(10, 7, Sub)); /* 3 */

    return 0;
}
