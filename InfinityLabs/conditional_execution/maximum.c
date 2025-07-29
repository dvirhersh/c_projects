#include <stdio.h>

int Maximum(int num1, int num2)
{
    return num1 < num2 ? num2 : num1;
}

int main()
{
    printf("1 The max number is %d\n", Maximum(-1, 90));
    printf("2 The max number is %d\n", Maximum(85, 5));
    printf("3 The max number is %d\n", Maximum(70, 70));

    return 0;
}
