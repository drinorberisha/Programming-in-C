/*
  CH-230-A
  a1_p2.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
int main(){
    int x , y;
    x = 17;
    y = 4;
 
    int sum = x + y;
    int proD = x * y;
    int difF = x - y;
    float diV = (float)x / y;
    int reM = x % y;
 
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    printf("sum=%d\n",sum);
    printf("product=%d\n",proD);
    printf("difference=%d\n",difF);
    printf("division=%f\n",diV);
    printf("remainder of division=%d\n",reM);
 
return 0;
}