#include <stdio.h>

#include "queue.h"
#include "list.h"

/* ### This struct will be used in QueueEnqueue */
typedef struct
{
    list_node_type link;
    int data;
} queue_node_type;

/* ### Write your code below this line ### */
void QueueConstruct(queue_type *queue)
{
    ListConstruct(&queue->list);
}

int main(void)
{
    printf("Testing Report:\n");

    queue_type q;
    QueueConstruct(&q);

    /* ConstructTest1: Initialization validation */
    // if (ListIsEmpty(&q.list) &&
    //     q.list.head.next == &q.list.head &&
    //     q.list.head.prev == &q.list.head)
    // {
    //     printf("ConstructTest1: Initialization validation --  Passed\n");
    // }
    // else
    // {
    //     printf("ConstructTest1: Initialization validation --  Failed\n");
    // }

    printf("\nDone\n");
    return 0;
}