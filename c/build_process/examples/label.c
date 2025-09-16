#include <stdio.h>

#define NATHAN 5

int main()
{
    int nir_dvir = NATHAN;

start_loop:

    printf("Count: %d\n", nir_dvir);
    nir_dvir++;
    if (nir_dvir < 5)

    {
        goto start_loop; // Jump back to 'start_loop'
    }

end_program:
    printf("Program finished.\n");
    return 0;
}