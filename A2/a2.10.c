/*
  CH-230-A
  a2_p10.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
#include <ctype.h>
int main(){
    int n,x,i;
    scanf("%d",&n);
 
    i = 1;
    while(n>0){
 
        x = i * 24;//convert days into hours
        //use while loop to avoid 0 and negative numbers
 
        if(i==1){
            printf("%d %s = %d %s\n",i,"day",x,"hours\n");
            //1 day is specific because of the "s"
            i++;
        }else if(i<=n){
            printf("%d %s = %d %s\n",i,"days",x,"hours\n");
            //print for i>1
            i++;
 
        }
 
    }
  return 0;
 
 
}