/*
  CH-230-A
  a6_p6.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
void bb_Represent(unsigned char c, unsigned char temp){
// check i for < 8 because 1 byte has 8 bits and to go through all them
    for(int i=0; i<8; i++){
// use bitwise operator & to check for 1 and 0
        if((temp & 128) == 128){
// use 128 as 2^7 for the first element in the left side
            printf("1");
        }else{
            printf("0");
        }
// move bits 1 to the left
        temp = temp <<1;
    }
 
}
int main(){
    unsigned char c,temp;
    scanf("%c", &c);
    temp = c;
// use %d to write the ASCII value of the input
    printf("The decimal representation is: %d\n", temp);
    printf("The binary representation is: ");
// call the function to print the value
    bb_Represent(c, temp);
 
    printf("\n");
    return 0;
}