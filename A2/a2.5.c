/*
  CH-230-A
  a2_p5.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    printf("a=%d\n",a);// declare integer, input a value, print it
    int *ptr_a;
    ptr_a = &a;
    *ptr_a = *ptr_a + 5;// add value 5 to *ptr_a (big difference if it is ptr_a)
    printf("address of a=%p\n",ptr_a);
    printf("value of a=%d\n",*ptr_a);
    /*declare the pointer, assign it to the integer, add 5, print address and value */
return 0;
}