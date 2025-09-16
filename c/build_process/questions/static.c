#include <stdio.h>

void counter()
{
    static int count = 0; // Initialized only once
    count++;
    printf("Count: %d\n", count);
}

int main()
{
    counter(); // Output: Count: 1
    counter(); // Output: Count: 2
    counter(); // Output: Count: 3
    return 0;
}