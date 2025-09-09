#include <stdio.h>
#include <assert.h>

size_t StrLen(const char* my_str)
{
    size_t counter = 0;
 
    assert(my_str);
    
    while (*my_str++)
    {
        counter++;
    }

    return counter;
}