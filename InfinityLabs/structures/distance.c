#include <math.h>
#include <stdio.h>

struct Point
{
    int x, y;
};

float Distance(struct Point p1, struct Point p2)
{
    return (pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
}

int main()
{

    struct Point p1 = {5, 10};
    struct Point p2 = {25, -5};

    printf("\nTesting Report:\n");

    printf("Distane = %f\n", Distance(p1, p2));

    return 0;
}
