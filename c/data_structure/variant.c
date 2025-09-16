#include <stdio.h>

// Define an enum to represent the possible types
typedef enum
{
    INT_TYPE,
    FLOAT_TYPE,
    CHAR_TYPE
} VariantType;

// Define the variant structure
typedef struct
{
    VariantType type; // Discriminator
    union
    {
        int i;
        float f;
        char c;
    } value; // The union holding the actual data
} Variant;

int main()
{
    Variant myVariant;

    // Store an integer
    myVariant.type = INT_TYPE;
    myVariant.value.i = 42;
    printf("Integer variant: %d\n", myVariant.value.i);

    // Store a float
    myVariant.type = FLOAT_TYPE;
    myVariant.value.f = 3.14f;
    printf("Float variant: %f\n", myVariant.value.f);

    // Store a character
    myVariant.type = CHAR_TYPE;
    myVariant.value.c = 'A';
    printf("Char variant: %c\n", myVariant.value.c);

    return 0;
}