/*
  CH-230-A
  a2_p6.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
int main(){
    double x,y;
    scanf("%lf %lf",&x,&y);
    double *ptr_one,*ptr_two,*ptr_three;//declare the pointers
    ptr_one = &x;// assign the pointers to the doubles
    ptr_two = &x;
    ptr_three = &y;
    printf("address of ptr_one=%p\n",ptr_one);// print both ptr_one and ptr_two that contain the same address
    printf("address of ptr_two=%p\n",ptr_two);
    printf("address of ptr_three=%p\n",ptr_three);// print ptr_three that contains y address
 
    return 0;
}