/*
  CH-230-A
  a8_p4.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>
#include "stack.h"
 
int main(){
// declaration of variables
    int i, remA;
    unsigned int my_numbeR;
    struct stack my_stacK;
    my_stacK.count = 0;
 
//input char and ignore char
    scanf("%u", &my_numbeR);
    unsigned int temporary = my_numbeR;
 
    for(i = 0; pow(2,i) < my_numbeR; i++){
// do the calculation for remainder and pushing that result onto Stack
        remA = temporary % 2;
        push(&my_stacK, remA);
        temporary = temporary / 2 ;
    }
    printf("The binary representation of %u is ", my_numbeR);
 
    for(i = 0; pow(2, i) < my_numbeR; i++){
// call pop function
        pop(&my_stacK);
    }
    printf(".\n");
 
    return 0;
}