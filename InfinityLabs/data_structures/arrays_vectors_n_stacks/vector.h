#pragma once

#include <stddef.h> /* size_t */

#include "status.h"

typedef struct
{
    size_t capacity; /* max number of elements in the array */
    size_t size;     /* number of "occupied" elements */
    int *array;      /* the dynamically allocated array */
} vector_type;

/* Initialize a given vector_type struct and allocate an int array of 'capacity' length. */
status_type VectorConstruct(vector_type *vector, size_t capacity);

/* Release the array allocated to this Vector. */
void VectorDestruct(vector_type *vector);

/* Increase/decrease the amount of "occupied" elements. */
void VectorResize(vector_type *vector, int addition);

/* Push an element to the top of the Vector. */
void VectorPush(vector_type *vector, int data);

/* Pop and return an element from the top of the Vector. */
int VectorPop(vector_type *vector);
