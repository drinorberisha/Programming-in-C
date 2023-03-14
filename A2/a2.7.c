/*
  CH-230-A
  a2_p7.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
int main(){
 
    int i = 8;
    while (i >= 4){// the brackets were not here so I put them
    printf("i is %d\n", i);
    i--;// we substract 1 from i until it is equal to 3
 
    }
    printf("That is it.\n");// Put this line out of the brackets to not be repeated.
    return 0;
}