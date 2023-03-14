/**
 * @file queue.c
 */
 
#include <stdio.h>
#include <stdlib.h>
 
#include "queue.h"
 
void initialize_queue(Queue *pq)
{
    pq->front = pq->rear = NULL;
    pq->items = 0;
}
 
int queue_is_full(const Queue *pq)
{
    return pq->items == MAXQUEUE;
}
 
int queue_is_empty(const Queue *pq)
{
    return pq->items == 0;
}
 
int queue_item_count(const Queue *pq)
{
    return pq->items;
}
 
int enqueue(Item item, Queue *pq)
{
// first of all, I need to check if the queue is full
 
    if(queue_is_full(pq) == 1)
        return -1;
    else{
// then create new node element
        Node *enqueueON;
// dynamically allocate it
        enqueueON = (Node *) malloc(sizeof(Node));
// make sure it was successfully mallocated
        if(enqueueON == NULL){
            return -1;
        }
// Give value to the new node
        (*enqueueON).item = item;
        (*enqueueON).next = NULL;
// Now, check if the cue is empty
        if(queue_is_empty(pq) == 1){
// The new node now is front and rear
            (*pq).front = enqueueON;
        }else{
// link them inbetween with the rear elem
            (*(*pq).rear).next = enqueueON;
        }
        (*pq).rear = enqueueON;
        (*pq).items++;
        return 0;
    }
}
 
int dequeue(Item *pitem, Queue *pq)
{
// just decrease the number of item count each time
    (*pq).items--;
    return 0;
}
 
void empty_queue(Queue *pq)
{
    Item dummy;
    while (!queue_is_empty(pq)) {
        dequeue(&dummy, pq);
    }
}