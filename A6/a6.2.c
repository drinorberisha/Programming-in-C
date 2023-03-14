/*
  CH-230-A
  a6_p2.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
 
#define lsBit(n) ;{if((n & 1) == 1) printf("1\n"); else printf("0\n");}
 
void decimalR(unsigned char n){
     printf("The decimal representation is: %d\n",n);
}
int main(){
 
    unsigned char n;
    scanf("%c",&n);
    decimalR(n);
 
    printf("The least significant bit is: ");
    lsBit(n);
 
    return 0;
}