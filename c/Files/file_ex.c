#include <stdio.h>

int main() {
    FILE *fp; // Declares a file pointer named 'fp'

    // Open a file for writing
    fp = fopen("example.txt", "w"); 

    // Check if the file was opened successfully
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1; 
    }

    // Write to the file
    fprintf(fp, "This is some text written to the file.\n");

    // Close the file
    fclose(fp);

    printf("File operations completed.\n");
    return 0;
}