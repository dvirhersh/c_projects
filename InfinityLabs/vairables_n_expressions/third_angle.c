#include <stdio.h>

int ThirdAngle(int angle1, int angle2)
{
    return 180 - angle1 - angle2;
}

int main()
{
    printf("Testing Report:\n");
    printf("Running test: ThirdAngle(8, 5): %d\n", ThirdAngle(8, 5));
    return 0;
}