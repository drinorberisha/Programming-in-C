/*
  CH-230-A
  a7_p2.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
 
int sizeOfList = 0;
 
struct list {
    char ch;
    struct list *prev;
    struct list *next;
};
 
struct list *add_begin(struct list *pointer_, char chVal);
 
struct list *remove_allchars(struct list *pointer_, char chVal);
 
void printTheList(struct list *pointer_);
 
void printBackwards(struct list *pointer_);
 
void emptyAndFree(struct list *pointer_);
 
 
 
int main(){
 
    int x;
    char ch;
    struct list *pointer_ = NULL;
    while(1){
        scanf("%d", &x);
        getchar();
 
        switch(x){
 
            case 1:
                scanf("%c",&ch);
                pointer_ = add_begin(pointer_, ch);
                break;
            case 2:
                scanf("%c",&ch);
                pointer_ = remove_allchars(pointer_, ch);
                break;
            case 3:
                printTheList(pointer_);
                break;
            case 4:
                printBackwards(pointer_);
                break;
            case 5:
                emptyAndFree(pointer_);
                return 0;
            default:
                return 0;
 
 
 
        }
 
    }
 
}
 
struct list *add_begin(struct list * pointer_, char chVal){
    struct list *newEl;
    newEl = (struct list*) malloc(sizeof(struct list));
    if (newEl == NULL){
        return pointer_;
    }
 
    (*newEl).ch = chVal;
    (*newEl).prev = NULL;
 
    if(pointer_ == NULL) {
        (*newEl).next = NULL;
    }else {
        (*newEl).next = pointer_;
        (*pointer_).prev = newEl;
 
    }
    sizeOfList++;
    return newEl;
 
}
 
struct list *remove_allchars(struct list* pointer_, char chVal){
    struct list *cursor = pointer_;
    struct list *tempo;
    int count = 0;
 
    if(pointer_ == NULL){
        return pointer_;
    }
    while(cursor != NULL){
        if((*cursor).ch == chVal){
            count++;
            tempo = cursor;
            if(tempo == pointer_){
                if((*cursor).next != NULL){
                    cursor = (*cursor).next;
                    pointer_ = (*pointer_).next;
                    (*pointer_).prev = NULL;
                    free(tempo);
                }else{
                free(tempo);
                pointer_ = NULL;
                return pointer_;
 
                }
 
            }else if((*cursor).next != NULL){
            (*(*cursor).prev).next = (*cursor).next;
            (*(*cursor).next).prev = (*cursor).prev;
            cursor = (*cursor).next;
            free(tempo);
            }else{
 
            (*(*cursor).prev).next = NULL;
            cursor = (*cursor).next;
            free(tempo);
            }
 
        }else cursor = (*cursor).next;
    }
 
    if(count == 0)
        printf("The element is not in the list!\n");
    return pointer_;
 
}
 
 
void printTheList(struct list *pointer_){
    struct list *cursor = pointer_;
    while(cursor != NULL){
        printf("%c ", (*cursor).ch);
        cursor = (*cursor).next;
    }
    printf("\n");
}
 
 
void printBackwards(struct list *pointer_){
    struct list *cursor = pointer_;
 
    while (((*cursor).next) != NULL){
        cursor = (*cursor).next;
    }
    while(cursor != NULL){
        printf("%c ", (*cursor).ch);
        cursor = (*cursor).prev;
    }
    printf("\n");
}
 
 
void emptyAndFree(struct list *pointer_){
    struct list *nextEl;
    while(pointer_ != NULL){
        nextEl = (*pointer_).next;
        free(pointer_);
        pointer_ = nextEl;
    }
 
}