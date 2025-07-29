#include <stdio.h>

float SquareRoot(float number)
{
    float sqrt, temp = 0;
    sqrt = number / 2;

    while (sqrt != temp)
    {
        temp = sqrt;
        sqrt = (sqrt + number / sqrt) / 2;
    }

    return sqrt;
}

float main()
{
    printf("Testing Report:\n");
    printf("SquareRoot: %f\n", SquareRoot(9));
    printf("SquareRoot: %f\n", SquareRoot(10));

    return 0;
}
