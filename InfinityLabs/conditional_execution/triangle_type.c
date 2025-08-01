#include <stdio.h>
#include <stdlib.h>

int TriangleType(unsigned angle1, unsigned angle2)
{
    unsigned angle3 = 180 - (angle1 + angle2);
    int result = 0;

    if (angle1 == 0 || angle2 == 0 || angle1 + angle2 >= 180)
        return -1;

    if (angle1 == 90 || angle2 == 90 || angle3 == 90)
        result++;

    if (angle1 == angle2 || angle1 == angle3 || angle2 == angle3)
        result += 2;

    return result;
}

int main()
{
    printf("the triangle kind is: %d\n", TriangleType(80, 80));

    return 0;
}
