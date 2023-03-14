/*
  CH-230-A
  a2_p3.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
int main(){
int w,d,h;
scanf("%d %d %d",&w,&d,&h);//declare weeks,days and hours as integers. Give them values
h= (w*168) + (d*24) + h;//write the formula of the conversion
printf("Total number of hours=%d",h);//print result
 
return 0;
}