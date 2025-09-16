#include <stdio.h>

union Data
{
    int i;
    float f;
    char c;
};

int main()
{
    union Data data;

    data.i = 10; // Assign value to 'i'
    printf("data.i: %d\n", data.i);

    data.f = 220.5; // Assign value to 'f', overwriting 'i'
    printf("data.f: %f\n", data.f);
    printf("data.i: %d\n", data.i);
    // Attempting to access data.i now would yield an unpredictable value

    data.c = 'A'; // Assign value to 'c', overwriting 'f'
    printf("data.c: %c\n", data.c);
    // Attempting to access data.f or data.i now would yield an unpredictable value

    return 0;
}