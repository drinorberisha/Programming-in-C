// call functions and declare what the stack contains
struct stack {
    unsigned int count;
    int array[12];
};
 
void push(struct stack *my_stacK, int x);
 
void pop(struct stack *my_stacK);
 
void empty(struct stack *my_stacK);
 
int isEmpty(struct stack *my_stacK);