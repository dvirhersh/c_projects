#include <stdio.h>

int AbsoluteValue(int num1)
{
    if (num1 < 0)
    {
        num1 = -num1;
    }

    return num1;
}

int main()
{
    printf("Testing Report:\n");
    printf("Running test: AbsoluteValue(8): %d\n", AbsoluteValue(8));
    return 0;
}