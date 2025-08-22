#pragma once

/* single node */
typedef struct ListNode list_node_type;

struct ListNode
{
    list_node_type *next;
    list_node_type *prev;
};

/* List control struct */
typedef struct List
{
    /* A standalone (dummy) node; doesn't have data */
    list_node_type head;
} list_type;

/* Match function signature. Used in ListFind API. */
typedef int (*list_isequal_type)(const list_node_type *, const void *);

/*
 * This is an example of a client Linked List element (intrusive):
 *
 * struct myData
 * {
 *     list_node_type link;  <-- the address of which is given to Insert/Remove
 *     int data;
 *     float more_data;
 * };
 */

/* Initialize a given list_type struct. */
void ListConstruct(list_type *list);

/* Insert a new node after a given node position.*/
void ListInsert(list_node_type *position, list_node_type *node);

/* Remove a given node from the list. */
void ListRemove(list_node_type *node);

/* Return 1 (true) or 0 (false), if the list is empty or not, respectively. */
int ListIsEmpty(const list_type *list);

/* Find and return a node which has data that matches the given data parameter.
 * The match is determined by calling the 'isequal' function. */
list_node_type *ListFind(const list_type *list, list_isequal_type isequal, const void *data);
