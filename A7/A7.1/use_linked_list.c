/*
  CH-230-A
  a7_p1.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
 
int main(){
  char ch;            //introduce char and int
    int x;
     struct my_list5 *list5 = NULL ;
 
// while true
    while(1){
        scanf(" %c", &ch);
// use switch to call different cases which we need for our test cases
        switch(ch){
// input values, call function and break for the 2 first cases
            case 'a':
                scanf("%d", &x);
                add_to_End5(x, list5);
                break;
            case 'b':
                scanf("%d", &x);
                add_to_Front5(x, list5);
                break;
// call the function and break for the rest of the cases
            case 'r':
                removeF_Element5(list5);
                break;
            case 'p':
                print5(list5);
                break;
            case 'q':
                dAllocation5(list5);
                exit(1);
                break;
            default:
// print invalid char for inputing invalid elements and break
                printf("Invalid character!\n");
                break;
        }
    }
    return 0;
 
 
 
 
 
}