/*
  CH-230-A
  a6_p5.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
void bb_Represent(unsigned char c){
    while(c!=0){
// use &(and) bitwise operator
        printf("%d", c&1);
// move the bits right by 1
        c = c >> 1;
    }
}
int main(){
    unsigned char c;
    scanf("%c", &c);
// use %d to write the ASCII value of the input
    printf("The decimal representation is: %d\n", c);
    printf("The backwards binary representation is: ");
// call the function to print the value
    bb_Represent(c);
    printf("\n");
 
    return 0;
}