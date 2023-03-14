/*
  CH-230-A
  a5_p10.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
 
void cDown(int n){
 
    if(n == 1){
        printf("1\n");
    }else{
        printf("%d\n", n);
//take out 1 from n until n is 1
        cDown(n-1);
    }
}
 
int main (){
 
    int n;
    scanf("%d",&n);
//check for negative number, if the case scanf again
    if(n<1){
        scanf("%d",&n);
    }
//call the function
    cDown(n);
    return 0;
 
}