#include <stdio.h>
#include <stdlib.h> // For exit()

int main() {
    FILE *fptr;
    int numbers[] = {10, 20, 30, 40, 50};
    int num_elements = sizeof(numbers) / sizeof(numbers[0]);

    // Open the file in binary write mode ("wb")
    fptr = fopen("data.bin", "wb");

    if (fptr == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    // Write the array of integers to the file
    // ptr: &numbers (address of the array)
    // size: sizeof(int) (size of each integer)
    // count: num_elements (number of integers in the array)
    // stream: fptr (the file pointer)
    size_t written_elements = fwrite(numbers, sizeof(int), num_elements, fptr);

    if (written_elements != num_elements) {
        printf("Error writing to file. Only %zu elements written out of %d.\n", written_elements, num_elements);
    } else {
        printf("Successfully wrote %zu elements to data.bin\n", written_elements);
    }

    // Close the file
    fclose(fptr);

    return 0;
}