#include <stdio.h>

// void swap()
// {
//     int temp;
// }

double power(double x, int y)
{
    double result = 1;

    if (y < 0)
    {
        y = -y;
        x = 1 / x;
    }

    for (int i = 0; i < y; i++)
    {
        result *= x;
    }

    return result;
}

int main(void)
{
    double x;
    int y = 1;

    while (1)
    {
        printf("enter x and y\n");
        scanf("%lf", &x);
        scanf("%d", &y);
        printf("the answer is %f\n", power(x, y));

        if (y == 100000)
            break;
    }
    return 0;
}
