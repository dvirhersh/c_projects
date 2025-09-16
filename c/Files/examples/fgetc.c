#include <stdio.h>

int main()
{
    FILE *file_ptr;
    int character;

    // Open a file in read mode
    file_ptr = fopen("example.txt", "r");

    if (file_ptr == NULL)
    {
        perror("Error opening file");
        return 1; // Indicate an error
    }

    // Read characters one by one until EOF is reached
    while ((character = fgetc(file_ptr)) != EOF)
    {
        printf("%c \n", character); // Print the character
    }

    // Close the file
    fclose(file_ptr);

    return 0; // Indicate successful execution
}