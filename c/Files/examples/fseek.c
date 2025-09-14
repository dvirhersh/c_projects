#include <stdio.h>
#include <stdlib.h> // Required for exit()

int main()
{
    FILE *fp;
    char buffer[20]; // Buffer to store read data

    // Create a file and write some content
    fp = fopen("example.txt", "w+"); // Open for read and write, create if not exists
    if (fp == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    fprintf(fp, "Hello, fseek example Dvir Hershkovits!");
    fclose(fp); // Close the file to ensure content is written

    // Open the file again for reading
    fp = fopen("example.txt", "r");
    if (fp == NULL)
    {
        perror("Error opening file for reading");
        return 1;
    }

    // 1. Move the file pointer to the 7th byte from the beginning (0-indexed)
    //    and read a character.
    fseek(fp, 6, SEEK_SET); // 'f' is at index 6 in "Hello, fseek example!"
    char c = fgetc(fp);
    printf("Character at position 7 (from start): %c\n", c); // Expected: 'f'

    // 2. Move the file pointer 5 bytes forward from the current position
    //    and read some characters.
    fseek(fp, 5, SEEK_CUR);
    fgets(buffer, sizeof(buffer), fp);                              // Read up to 19 characters or until newline
    printf("Read after moving 5 bytes from current: %s\n", buffer); // Expected: "eek example!"

    // 3. Move the file pointer to the end of the file, then 7 bytes back
    //    from the end, and read.
    fseek(fp, -7, SEEK_END); // Move 7 bytes back from the end
    fgets(buffer, sizeof(buffer), fp);
    printf("Read after moving 7 bytes back from end: %s\n", buffer); // Expected: "ample!"

    fclose(fp); // Close the file
    return 0;
}