#include <stdio.h>
#include <stdlib.h>

unsigned BoxSurfaceArea(unsigned length, unsigned width, unsigned height)
{
    unsigned area = 0;

    area = 2 * ((length * width) + (length * height) + (width * height));

    return area;
}

int main()
{
    unsigned length = 8;
    unsigned width = 5;
    unsigned height = 12;

    printf("area = %d\n", BoxSurfaceArea(length, width, height));

    return 0;
}
