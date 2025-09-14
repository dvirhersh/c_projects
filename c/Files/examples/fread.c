#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *file;
    char buffer[100];   // buffer to hold the data
    size_t bytesRead;

    // Open file for reading in binary mode
    file = fopen("example.txt", "rb");
    if (file == NULL)
    {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // fread(destination, size of each element, number of elements, file pointer)
    bytesRead = fread(buffer, sizeof(char), sizeof(buffer) - 1, file);

    if (bytesRead == 0)
    {
        if (feof(file))
            printf("Reached end of file.\n");
        else if (ferror(file))
            perror("Error reading file");
    }
    else
    {
        buffer[bytesRead] = '\0'; // null-terminate since it's text
        printf("Read %zu bytes: \n%s\n", bytesRead, buffer);
    }

    fclose(file);
    return EXIT_SUCCESS;
}
