#include <stdio.h>

enum Status {
    SUCCESS = 0,
    ERROR = 1,
    WARNING = 2
};

int main() {
    enum Status operationStatus = SUCCESS;

    if (operationStatus == SUCCESS) {
        printf("Operation completed successfully.\n");
    } else if (operationStatus == ERROR) {
        printf("An error occurred.\n");
    }

    return 0;
}