#include <stdio.h>

int main()
{
    FILE *file;
    long int position;

    // Create a dummy file for demonstration
    file = fopen("example.txt", "w");
    if (file == NULL)
    {
        perror("Error creating file");
        return 1;
    }
    fprintf(file, "Hello, C programming!");
    fclose(file);

    // Open the file in read mode
    file = fopen("example.txt", "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    // Get the initial position (should be 0)
    position = ftell(file);
    printf("Initial position: %ld\n", position);

    // Read some characters
    char buffer[10];
    fread(buffer, sizeof(char), 5, file); // Read 5 characters
    buffer[5] = '\0';                     // Null-terminate the string
    printf("Read: %s\n", buffer);

    // Get the current position after reading
    position = ftell(file);
    printf("Position after reading 5 characters: %ld\n", position);

    // Move the file pointer using fseek
    fseek(file, 7, SEEK_SET); // Move 7 bytes from the beginning
    position = ftell(file);
    printf("Position after fseek to 7: %ld\n", position);

    // Move the file pointer to the end and get the file size
    fseek(file, 0, SEEK_END);
    position = ftell(file);
    printf("File size (position at end): %ld bytes\n", position);

    fclose(file);
    return 0;
}