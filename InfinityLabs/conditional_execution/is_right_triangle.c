#include <stdio.h>

static int IsRight(float a, float b, float c);
static int IsEqual(float a, float b);
static float Abs(float x);

int IsRightTriangle(float a, float b, float c)
{
    if (IsRight(a, b, c))
        return 1;
    if (IsRight(a, c, b))
        return 1;
    if (IsRight(b, c, a))
        return 1;
    return 0;
}

static int IsRight(float a, float b, float c)
{
    return IsEqual(a * a + b * b, c * c);
}

static int IsEqual(float a, float b)
{
#define EPSILON 0.01
    return (Abs(a - b) < EPSILON);
}

static float Abs(float x)
{
    return (x < 0) ? -x : x;
}

int main()
{
    printf("Testing Report:\n");
    printf("Is right triangle: %d\n", IsRightTriangle(27.00, 33.24, 23.00)); // 1
    printf("Is right triangle: %d\n", IsRightTriangle(33.46, 12.00, 8.00));  // 1
    printf("Is right triangle: %d\n", IsRightTriangle(3, 4, 5));             // 0

    return 0;
}
