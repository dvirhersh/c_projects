#include <stdio.h>
#include <assert.h>

    int StrCmp(const char *str1, const char *str2)
    {
        assert(str1);
        assert(str2);

        while(*str1 && (*str1 == *str2))
        {
            str1++;
            str2++;
        }
        return *str1 - *str2;
    }