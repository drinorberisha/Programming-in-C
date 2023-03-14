/*
  CH-230-A
  a6_p7.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>
//use math.h to get mathematical equations listed
unsigned char set3bits(unsigned char t, int a, int b, int c){
    int A = pow(2, a);
    int B = pow(2, b);
    int C = pow(2, c);
//set the value of x when checking for bit operator & for A, B, C
    if((t&A)==0)
        t = t + A;
    if((t&B)==0)
        t = t + B;
    if((t&C)==0)
        t = t + C;
 
    return t;
}
void bb_Represent(unsigned char t){
// check i for < 8 because 1 byte has 8 bits and to go through all them
    for(int i=0; i<8; i++){
// use bitwise operator & to check for 1 and 0
        if((t & 128) == 128){
// use 128 as 2^7 for the first element in the left side
            printf("1");
        }else{
            printf("0");
        }
// move bits 1 to the left
        t = t <<1;
    }
    printf("\n");
}
 
int main(){
    unsigned char t;
    int a, b, c;
// input values
    scanf("%c", &t);
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
// use %d to write the ASCII value of the input
    printf("The decimal representation is: %d\n", t);
// print the text and wait for the function to be called the next line
    printf("The binary representation is: ");
// call the function for the binary representation
    bb_Represent(t);
// print the text before calling the function in the next line of code
    printf("After setting the bits: ");
// call the function binary representation with the set3bits inside
    bb_Represent(set3bits(t, a, b, c));
 
    return 0;
 
}