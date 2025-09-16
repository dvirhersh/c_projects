#include <stdio.h>
#include <stdlib.h> // For malloc and free

// Define the number of bits in our bit array
#define NUM_BITS 64
// Define the underlying data type for storing bits (e.g., unsigned long for 64 bits)
typedef unsigned long bitarray_t;

// Function to allocate and initialize a bit array
bitarray_t *create_bit_array()
{
    bitarray_t *arr = (bitarray_t *)malloc(sizeof(bitarray_t));
    if (arr == NULL)
    {
        perror("Failed to allocate memory for bit array");
        exit(EXIT_FAILURE);
    }
    *arr = 0; // Initialize all bits to 0
    return arr;
}

// Function to set a specific bit to 1
void set_bit(bitarray_t *arr, int index)
{
    if (index >= 0 && index < NUM_BITS)
    {
        *arr |= (1UL << index); // Use 1UL for unsigned long literal
    }
    else
    {
        fprintf(stderr, "Error: Index %d out of bounds for bit array.\n", index);
    }
}

// Function to clear a specific bit (set to 0)
void clear_bit(bitarray_t *arr, int index)
{
    if (index >= 0 && index < NUM_BITS)
    {
        *arr &= ~(1UL << index);
    }
    else
    {
        fprintf(stderr, "Error: Index %d out of bounds for bit array.\n", index);
    }
}

// Function to check if a specific bit is set (returns 1 if set, 0 otherwise)
int test_bit(const bitarray_t *arr, int index)
{
    if (index >= 0 && index < NUM_BITS)
    {
        return (*arr >> index) & 1UL;
    }
    else
    {
        fprintf(stderr, "Error: Index %d out of bounds for bit array.\n", index);
        return -1; // Indicate error
    }
}

// Function to print the bit array
void print_bit_array(const bitarray_t *arr)
{
    printf("Bit Array: ");
    for (int i = NUM_BITS - 1; i >= 0; i--)
    {
        printf("%d", test_bit(arr, i));
    }
    printf("\n");
}

int main()
{
    bitarray_t *my_bit_array = create_bit_array();

    printf("Initial state:\n");
    print_bit_array(my_bit_array);

    set_bit(my_bit_array, 5);
    set_bit(my_bit_array, 10);
    set_bit(my_bit_array, 63); // Set the highest bit

    printf("After setting bits 5, 10, and 63:\n");
    print_bit_array(my_bit_array);

    printf("Is bit 5 set? %d\n", test_bit(my_bit_array, 5));
    printf("Is bit 7 set? %d\n", test_bit(my_bit_array, 7));

    clear_bit(my_bit_array, 10);
    printf("After clearing bit 10:\n");
    print_bit_array(my_bit_array);

    // Free the allocated memory
    free(my_bit_array);
    my_bit_array = NULL;

    return 0;
}