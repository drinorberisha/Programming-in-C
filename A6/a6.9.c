/*
  CH-230-A
  a6_p9.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
 
// struct initialization
struct my_list{
    int data;
    struct my_list *next;
};
 
// setting the list to empty initially
struct my_list *list = NULL;
 
// function to insert element in the beginning of the list
void add_to_Front(int value){
// malloc for the struct
    struct my_list *pushfront = (struct my_list*)malloc(sizeof(struct my_list));
    if(pushfront==NULL)
        printf("Could not allocate memory!\n");
 
// correcting the places for values
    pushfront->data = value;
    pushfront->next = list;
    list = pushfront;
}
 
// function to insert elements at the end of the list
void add_to_End(int value){
    if(list==NULL)
// if list is empty call the function add_to_Front to give value to add_to_End
        add_to_Front(value);
    else{
// malloc for the struct
        struct my_list *pushfront = (struct my_list*)malloc(sizeof(struct my_list));
        if(pushfront==NULL){
            printf("Could not allocate memory!\n");
        }
// correcting the places for values
        pushfront->data = value;
        pushfront->next = NULL;
        struct my_list *cursor = list;
        while(cursor->next!=NULL)
// while the next element of cursor is empty correct the places for values
            cursor = cursor->next;
        cursor->next = pushfront;
    }
}
// function to remove the element
void removeF_Element(){
                   //if null then print
    if(list != NULL){
        struct my_list *cursor = list->next;
 
// free memory from list
        free(list);
// set cursor value
        list = cursor;
    }
    }
// function to free the memory of list
 
void dAllocation(){
    if(list==NULL)                    //if null then print
        printf("\n");
    else{
        struct my_list *cursor;
//while list!= null, set value, free memory, set value
        while(list!=NULL){
            cursor = list->next;
            free(list);
            list = cursor;
        }
    }
}
void print(){
 
        struct my_list *cursor = list;
        while(cursor!=NULL){
//while cursor is not empty, print the values taken from cursor to data
            printf("%d ", cursor->data);
// give value from cursor to the next element
            cursor = cursor->next;
        }
        printf("\n");
    }
//introduce function to insert a list
void insertList(int value, int position){
//
    if(list==NULL && position!=0)
        printf("Invalid position!\n");
// point the cursor to list
    struct my_list *cursor = list;
//  set value of count to 0
    int count = 0;
    while(cursor!=NULL){
// go to the next element of cursor
        cursor = cursor->next;
//  increase the count by 1
        count++;
    }
 
    if(position<0 || position>count)
// if the conditions are met print Invalid position!
        printf("Invalid position!\n");
    else if (position==0)
// check if position is zero then call function
        add_to_Front(value);
    else if (position==count)
// check if position is equal to count then call function
        add_to_End(value);
    else{
// if none of the conditions before are met, then malloc the my list struct
        struct my_list *pushfront = (struct my_list*)malloc(sizeof(struct my_list));
        if(pushfront==NULL)
            printf("Cannot allocate memory for node");
//correct the positions of elements and assign them
        pushfront->data = value;
        cursor = list;
        int i;
// use the for loop to set the values of each element of the cursor
        for(i=0; i<position-1; i++){
            cursor = cursor->next;
        }
        pushfront->next = cursor->next;
        cursor->next = pushfront;
    }
}
 
void reverseList(){
//check if list is empty
    if(list==NULL){
        printf("List is empty!\n");
    }
    else{
// if list is not empty, correct positions and set the values
        struct my_list *p, *n = NULL;
        struct my_list *c = list;
// while c is not empty set values for the pointers
        while(c!=NULL){
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        list = p;
    }
}
 
int main(){
    char ch;
    int value, position;
// while true
    while(1){
        scanf(" %c", &ch);
// use switch to call different cases which we need for our test cases
        switch(ch){
// input values, call function and break for the 2 first cases
            case 'a':
                scanf("%d", &value);
                add_to_End(value);
                break;
            case 'b':
                scanf("%d", &value);
                add_to_Front(value);
                break;
// call the function and break for the rest of the cases
            case 'r':
                removeF_Element();
                break;
            case 'p':
                print();
                break;
            case 'q':
                dAllocation();
                exit(1);
                break;
            case 'i':
                scanf("%d",&position);
                scanf("%d",&value);
                insertList(value, position);
                break;
            case 'R':
                reverseList();
                break;
            default:
// print invalid char for inputing invalid elements and break
                printf("Invalid position!\n");
                break;
        }
    }
    return 0;
}