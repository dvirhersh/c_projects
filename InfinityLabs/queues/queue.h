#pragma once

#include "status.h"
#include "list.h"

typedef struct Queue
{
    list_type list;
} queue_type;

void QueueConstruct(queue_type *queue);
void QueueDestruct(queue_type *queue);
status_type QueueEnqueue(queue_type *queue, int data);
int QueueDequeue(queue_type *queue);
