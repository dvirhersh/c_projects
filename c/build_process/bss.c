#include <stdio.h>

// Uninitialized global variable (BSS)
int global_var;

void my_function()
{
    // Uninitialized local static variable (BSS)
    static int static_var;
    printf("Inside function: static_var = %d\n", static_var);
    static_var++; // Modifying the static variable
}

int main()
{
    printf("In main: global_var = %d\n", global_var);
    my_function();
    my_function();
    my_function();
    return 0;
}
