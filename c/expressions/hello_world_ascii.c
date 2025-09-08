#include <stdio.h>
#include "hello_world_ascii.h"

void HelloWorldAscii()
{
    char str[] = {0x22, 0x48, 0x65, 0x6c, 0x6c, 0x6F, 0x20, 0x57, 0x6F, 0x72, 
                 0x6c, 0x64, 0x22, 0x00};
    printf("%s\n", str);
}

int main(void)
{
    HelloWorldAscii();
    return 0;
}