#include <stdio.h>

#include "list.h"

/* ### Write your code below this line ### */
void ListConstruct(list_type *list)
{
    if (!list)
        return;

    list->head.next = &list->head;
    list->head.prev = &list->head;
}

/* ### A one time bonus :-) ### */
int ListIsEmpty(const list_type *list)
{
    return (list->head.next == &list->head && list->head.prev == &list->head);
}

int main(void)
{
    list_type list;
    ListConstruct(&list);

    /* ConstructTest1: Initialization validation */
    if (ListIsEmpty(&list) &&
        list.head.next == &list.head &&
        list.head.prev == &list.head)
    {
        printf("ConstructTest1: Initialization validation --  Passed\n");
    }
    else
    {
        printf("ConstructTest1: Initialization validation --  Failed\n");
    }

    printf("\nDone\n");
    return 0;
}