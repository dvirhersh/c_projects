#include <stdio.h>
#include <stdlib.h>

#include "queue.h"
#include "list.h"
#include "status.h"

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

status_type QueueEnqueue(queue_type *queue, int data)
{
    queue_node_type *node = NULL;

    node = malloc(sizeof(*node));
    if (node == NULL)
        return ERROR;

    node->data = data;

    ListInsert(&queue->list.head, &node->link);

    return SUCCESS;
}