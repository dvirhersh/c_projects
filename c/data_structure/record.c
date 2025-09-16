#include <stdio.h>
#include <string.h>

int main(void)
{
    struct Person
    {
        char name[50];
        int age;
        float height;
    };

    struct Person p1;
    struct Person p2 = {"Bob", 25, 1.80};
    struct Person *ptr_p1 = &p1;

    p1.age = 30;
    strcpy(p1.name, "Alice");
    p1.height = 1.75;

    ptr_p1->age = 31;

    return 0;
}