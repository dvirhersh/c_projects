#include <stdio.h> // Required for fprintf and stderr
#include <stdlib.h> // Required for EXIT_FAILURE

int main() {
    int dividend = 10;
    int divisor = 1;

    // Print a regular message to standard output
    fprintf(stdout, "Attempting a division operation.\n");

    if (divisor == 0) {
        // Print an error message to standard error
        fprintf(stderr, "Error: Division by zero is not allowed.\n");
        return EXIT_FAILURE; // Indicate an error occurred
    }

    int result = dividend / divisor;
    fprintf(stdout, "The result of the division is: %d\n", result);

    return 0; // Indicate successful execution
}