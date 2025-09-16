#include <stdio.h>

int main()
{
    int count = 0;

start_loop:
    printf("Count: %d\n", count);
    count++;
    if (count < 5)
    {
        goto start_loop; // Jump back to 'start_loop'
    }

end_program:
    printf("Program finished.\n");
    return 0;
}