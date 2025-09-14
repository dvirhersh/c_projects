#include <stdio.h>

int main()
{
    FILE *file1 = fopen("file1.txt", "w");
    FILE *file2 = fopen("file2.txt", "w");

    if (file1 == NULL || file2 == NULL)
    {
        perror("Error opening files");
        return 1;
    }

    fprintf(file1, "Data for file 1.\n");
    fprintf(file2, "Data for file 2.\n");

    fflush(NULL); // Flush all open output streams

    fclose(file1);
    fclose(file2);

    return 0;
}