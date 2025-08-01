#include <stdio.h>

const float PI = 3.14;

float CirclePerimeter(float radius)
{
    return 2 * radius * PI;
}

int main()
{
    printf("Testing Report:\n");
    printf("Running test: CirclePerimeter(5.8): %f\n", CirclePerimeter(5.8));
    return 0;
}