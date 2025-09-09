#include <stdio.h>

void Main(int argc)
{
    int num;
    const int num2= 6;
    const int num3;

    printf("%d", num);
    (double)num;
    num = 4.7;

    num = 2 * ++num;
}

int main(void)
{
    Main(1);

    return 0;
}