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

void ListInsert(list_node_type *position, list_node_type *node)
{
    list_node_type *next = position->next;

    position->next = node;
    node->prev = position;
    next->prev = node;
    node->next = next;
}

int ListIsEmpty(const list_type *list)
{
    return (list->head.next == &list->head && list->head.prev == &list->head);
}

/* simple client data type with an intrusive link */
typedef struct
{
    list_node_type link;
    int data;
} myData;

int main(void)
{
    printf("Testing Report:\n");

    list_type list;
    ListConstruct(&list);

    myData a = {.data = 123};

    /* Insert one node after head (into an empty list) */
    ListInsert(&list.head, &a.link);

    /* Validate circular doubly-linked invariants */
    int ok = 1;
    ok &= (list.head.next == &a.link);
    ok &= (list.head.prev == &a.link);
    ok &= (a.link.prev == &list.head);
    ok &= (a.link.next == &list.head);
    ok &= (!ListIsEmpty(&list)); /* should no longer be empty */

    if (ok)
        printf("Running test: ListInsertTest1 --  Passed\n");
    else
        printf("Running test: ListInsertTest1 --  Failed\n");

    printf("\nDone\n");
    return 0;
}