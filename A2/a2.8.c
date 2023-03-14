/*
  CH-230-A
  a2_p8.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x % 2 == 0){// x divided by 2 should be equal to 0
       if(x % 7 == 0){// x divided by 7 should be equal to 0, to execute correctly
        printf("The number is divisible by 2 and 7\n");  //use printf to print 2 cases of if loop
       }
    }else{
        printf("The number is NOT divisible by 2 and 7\n");
    }
    return 0;
}