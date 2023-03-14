// call functions and declare what the stack contains
struct stack {
    unsigned int count;
    int array[32];
};
 
void push(struct stack *my_Stack, int number);
 
void pop(struct stack *my_Stack);
 
void empty(struct stack *my_Stack);
 
int isEmpty(struct stack *my_Stack);