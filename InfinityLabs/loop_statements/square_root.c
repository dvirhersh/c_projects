#include <stdio.h>

float SquareRoot(float number)
{
    float sqrt, temp = 0;
    sqrt = number / 2;

    while (sqrt != temp)
    {
        temp = sqrt;
        printf("trial : %f\n", temp);
        sqrt = (sqrt + number / sqrt) / 2;
    }

    return sqrt;
}

float main()
{
    printf("Testing Report:\n");
    printf("SquareRoot: %f\n", SquareRoot(82));

    return 0;
}
