#include <stdio.h>

int main() {
    int result = 42;
    // The fprintf function is used to print the formatted output to stdout.
    fprintf(stdout, "Result: %d\n", result);
    printf("stdout = %p\n", (void *)stdout);
    return 0;
}
