/*
  CH-230-A
  a5_p11.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
 
int Prime(int x, int y){
 
//check when number is 1
    if(y == 1){
        return 1;
    }else{
//check when number is 0
        if(x%y == 0){
        return 0;
        }else{
//check when number is valid
        return Prime(x,y-1);
        }
    }
}
 
int main(){
    int x;
    int resulT;
    scanf("%d",&x);
    if(x == 1){
        resulT = 0;
    }else{
// formula for being a prime number
        resulT = Prime(x,x/2);
    }
    if(resulT == 1){
        printf("%d is prime\n",x);
    }else{
        printf("%d is not prime\n",x);
    }
}