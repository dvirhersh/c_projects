#include <stdio.h>
#include <string.h> // For strcpy

// Structure definition
struct Student {
    char name[50];
    int roll_number;
    float gpa;
};

int main() {
    // Declare a structure variable
    struct Student student1;

    // Initialize members
    strcpy(student1.name, "Alice Smith");
    student1.roll_number = 101;
    student1.gpa = 3.85;

    // Access and print members
    printf("Student Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.roll_number);
    printf("GPA: %.2f\n", student1.gpa);

    return 0;
}