#include <stdio.h>
#include <string.h> // Required for strcspn

int main() {
    char name[50]; // Declare a character array to store the name, size 50

    printf("Enter your name: ");

    // Read input from stdin into the 'name' array
    // It reads up to 49 characters, or until a newline, or EOF is encountered.
    // The newline character, if present, is stored in 'name'.
    fgets(name, sizeof(name), stdin);
    printf("stdin = %p\n", (void *)stdin);

    // Remove the trailing newline character that fgets often includes
    // strcspn finds the index of the first occurrence of a newline in 'name'
    // If a newline is found, replace it with a null terminator '\0'
    name[strcspn(name, "\n")] = '\0';

    printf("Hello, %s!\n", name);

    return 0;
}