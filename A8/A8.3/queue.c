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
//check if the queue is empty
    if(queue_is_empty(pq)== 1){
    return -1;
    }else{
//initialize pointer and dynamically allocate it
        Node *temporary;
        temporary = (Node *)malloc(sizeof(Node));
// copy item to the waiting variable
        temporary = (*pq).front;
        *pitem = (*(*pq).front).item;
// reset to the next item in queue
        (*pq).front = (*(*pq).front).next;
// free memory
        free(temporary);
// reseting front and rear pointer to NULL
        if((*pq).items == 1){
            (*pq).front = NULL;
            (*pq).rear = NULL;
        }
// if the last item is removed decrement item count
        (*pq).items--;
        return 0;
    }
}
 
void printq(Queue *pq){
// declaring a pointer to the front of the queue
    Node *target = (*pq).front;
// print the required string
    printf("content of the queue: ");
// print items and assign next value to target
    while(target != NULL){
        printf("%d ",(*target).item);
        target = (*target).next;
    }
    printf("\n");
 
 
}
 
void empty_queue(Queue *pq)
{
    Item dummy;
    while (!queue_is_empty(pq)) {
        dequeue(&dummy, pq);
    }
}