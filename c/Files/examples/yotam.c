#include <stdio.h>

int main()
{
    char buffer[20]; // Declare a character array (buffer) to store the input
    printf("Buffer Address = 1 %p\n", buffer);

    printf("Enter a line of text: \n");

    // Read input until newline or buffer is full (minus 1 for null terminator)
    fgets(buffer, sizeof(buffer), stdin);

    printf("Buffer Address = 2 %p\n", buffer);

    printf("You entered: %s\n", buffer); // Print the entered string

    return 0;
}