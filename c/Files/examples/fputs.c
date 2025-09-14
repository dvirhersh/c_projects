#include <stdio.h>

int main()
{
    FILE *file_ptr;
    char my_string[] = "Hello, C programming!";

    // Open a file in write mode
    file_ptr = fopen("output.txt", "w");

    if (file_ptr == NULL)
    {
        perror("Error opening file");
        return 1; // Indicate an error
    }

    // Write the string to the file
    if (fputs(my_string, file_ptr) == EOF)
    {
        perror("Error writing to file");
        fclose(file_ptr); // Close the file even if error occurred
        return 1;
    }

    // Close the file
    fclose(file_ptr);

    printf("String successfully written to output.txt\n");

    // Example of writing to standard output
    fputs("This is written to the console.\n", stdout);

    return 0;
}