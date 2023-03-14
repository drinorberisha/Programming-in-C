#include <stdio.h>
#include <limits.h>
#include "stack.h"
 
void push(struct stack *my_stacK, int number) {
    // printf("Pushing ");
// checking if stack is full, if the case print the following output
    if((*my_stacK).count == 32)
        printf("Stack Overflow\n");
    else {
// if not the case, print the number, place the value inside stack
// and raise the value of count
        // printf("%d\n", number);
        (*my_stacK).array[(*my_stacK).count] = number;
        (*my_stacK).count++;
    }
}
 
void pop(struct stack *my_stacK) {
    // printf("Popping ");
//// use isEmpty to check if stack is empty, if that is the case
// 1 == 1 is true and go print the following string
    if(isEmpty(my_stacK) == 1){
        printf("Stack Underflow\n");
    }else {
// if that is not the case, 0 == 1 and print the following
// UINT_MAX is the maximum value for an unsigned int
// assign the max value of unsigned int to the element shown
        printf("%d", (*my_stacK).array[(*my_stacK).count - 1]);
 
        (*my_stacK).array[(*my_stacK).count - 1] = UINT_MAX;
// lower the value of count
        (*my_stacK).count--;
    }
}
 
void empty(struct stack *my_stacK) {
    printf("Emptying Stack ");
// lower the value of count that represents the number how many elements
// are in the stack until it goes to zero and empties the stack
    for(int i = (*my_stacK).count - 1; i >= 0; i--){
        printf("%d ", (*my_stacK).array[(*my_stacK).count - 1]);
        (*my_stacK).array[(*my_stacK).count - 1] = UINT_MAX;
        (*my_stacK).count--;
    }
    printf("\n");
}
// check if the stack is empty, if that is the case return 1, if not return 0
int isEmpty(struct stack *my_stacK) {
    if((*my_stacK).count == 0){
        return 1;
    }else{
        return 0;
    }
}