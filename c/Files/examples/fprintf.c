#include <stdio.h>

int main()
{
    FILE *fp; // Declare a file pointer
    char name[50];
    int age;

    // Open a file named "person_data.txt" in write mode ("w")
    fp = fopen("person_data.txt", "w");

    // Check if the file was opened successfully
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1; // Indicate an error
    }

    // Get input from the user
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);

    // Write the formatted data to the file
    fprintf(fp, "Name: %s, Age: %d\n", name, age);

    // Close the file
    fclose(fp);

    printf("Data written to person_data.txt successfully.\n");

    return 0; // Indicate successful execution
}