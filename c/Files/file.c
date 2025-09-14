#include <stdio.h>

struct MyStruct {
    double i2;
    int i1;
    char c;
};

int main() {
    printf("Size of struct MyStruct: %lu bytes\n", sizeof(struct MyStruct));
    return 0;
}