/*
  CH-230-A
  a7_p7.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
#include "stack.h"
 
int main(){
// declaration of variables
    int x;
    char Char;
    struct stack my_stacK;
    my_stacK.count = 0;
 
    while(1){
//input char and ignore char
        scanf("%c*c",&Char);
        switch(Char){
// based on input call the cases of switch that include other fucntions
            case 's':
                scanf("%d", &x);
                getchar();
                push(&my_stacK,x);
                break;
            case 'p':
                pop(&my_stacK);
                break;
            case 'e':
                empty(&my_stacK);
                break;
            case 'q':
                printf("Quit\n");
                return 0;
 
        }
    }
 
return 0;
 
}