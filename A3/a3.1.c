/*
  CH-230-A
  a2_p9.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
int main(){
    float x;
    int n,i;
    i=1;
    scanf("%f",&x);
    scanf("%d",&n);
    //declare and give values to x,n and i;
    while(n<=0){
        printf("Input is invalid, reenter value\n");
        scanf("%d",&n);
    }
    //use while loop to correct wrong n inputs
    while(i<=n){
        printf("%f\n",x);
        i++;
    }
    //use while loop again to print the float x n times
 
 
 
    return 0;
    }