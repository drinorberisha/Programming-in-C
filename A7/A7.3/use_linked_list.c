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
    int value;
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
            default:
// print invalid char for inputing invalid elements and break
                printf("Invalid character!\n");
                break;
        }
    }
    return 0;
}