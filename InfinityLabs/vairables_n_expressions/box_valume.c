#include <stdio.h>

int BoxVolume(int length, int width, int height)
{
    return length * width * height;
}

int main()
{
    printf("Testing Report:\n");
    printf("Running test: BoxVolume(length=8, width=5, height=12): %d\n", BoxVolume(8, 5, 12));
    return 0;
}