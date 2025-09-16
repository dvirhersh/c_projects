#include <stdio.h>

int main()
{
    FILE *fp;
    char ch = 'H';

    // Open a file in write mode
    fp = fopen("output.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Write a character to the file
    if (fputc(ch, fp) == EOF)
    {
        printf("Error writing character!\n");
    }
    else
    {
        printf("Character '%c' written successfully.\n", ch);
    }

    // Close the file
    fclose(fp);

    return 0;
}