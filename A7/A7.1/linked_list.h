struct my_list5{
    int data;
    struct my_list5 *next;
};
 
 
void add_to_Front5(int value, struct my_list5 *list5);
void add_to_End5(int value, struct my_list5 *list5);
void removeF_Element5(struct my_list5 *list5);
void dAllocation5(struct my_list5 *list5);
void print5(struct my_list5 *list5);