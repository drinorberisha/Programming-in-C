#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
 
 
// function to insert element in the beginning of the list
void add_to_Front5(int value, struct my_list5 *list5){
// malloc for the struct
    struct my_list5 *pushfront = (struct my_list5*)malloc(sizeof(struct my_list5));
    if(pushfront==NULL)
        printf("Could not allocate memory!\n");
 
// correcting the places for values
    pushfront->data = value;
    pushfront->next = list5;
    list5 = pushfront;
}
 
// function to insert elements at the end of the list
void add_to_End5(int value, struct my_list5 *list5){
    if(list5==NULL)
// if list is empty call the function add_to_Front to give value to add_to_End
        add_to_Front5(value,list5);
    else{
// malloc for the struct
        struct my_list5 *pushfront = (struct my_list5*)malloc(sizeof(struct my_list5));
        if(pushfront==NULL){
            printf("Could not allocate memory!\n");
        }
// correcting the places for values
        pushfront->data = value;
        pushfront->next = NULL;
        struct my_list5 *cursor = list5;
        while(cursor->next!=NULL)
// while the next element of cursor is empty correct the places for values
            cursor = cursor->next;
        cursor->next = pushfront;
    }
}
// function to remove the element
void removeF_Element5(struct my_list5 *list5){
                   //if null then print
    if(list5 != NULL){
        struct my_list5 *cursor = list5->next;
 
// free memory from list
        free(list5);
// set cursor value
        list5 = cursor;
    }
    }
// function to free the memory of list
 
void dAllocation5(struct my_list5 *list5){
    if(list5==NULL)                    //if null then print
        printf("\n");
    else{
        struct my_list5 *cursor;
//while list!= null, set value, free memory, set value
        while(list5!=NULL){
            cursor = list5->next;
            free(list5);
            list5 = cursor;
        }
    }
}
void print5(struct my_list5 *list5){
 
        struct my_list5 *cursor = list5;
        while(cursor!=NULL){
//while cursor is not empty, print the values taken from cursor to data
            printf("%d ", cursor->data);
// give value from cursor to the next element
            cursor = cursor->next;
        }
        printf("\n");
    }