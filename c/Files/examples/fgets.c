#include <stdio.h>

int main()
{
    char buffer[100];

    printf("Enter a string: \n");
    fgets(buffer, sizeof(buffer), stdin); // Read from standard input

    printf("You entered: %s\n", buffer);

    // Example with file reading
    FILE *file = fopen("example.txt", "r");
    if (file != NULL)
    {
        fgets(buffer, sizeof(buffer), file); // Read from a file
        printf("From file: %s\n", buffer);
        fclose(file);
    }
    else
    {
        printf("Error opening file.\n");
    }

    return 0;
}