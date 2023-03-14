/*
  CH-230-A
  a2_p4.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
int main(){
    float a,b,h;
    scanf("%f",&a);
    printf("square area=%f\n",a*a);//declare the float numbers, give float "a" a value, print the calculation
    scanf("%f",&b);
    printf("rectangle area=%f\n",a*b);//give float "b" a value, print the calculation
    scanf("%f",&h);
    printf("triangle area=%f\n",a*h/2);
    printf("trapezoid area=%f\n",(a+b)*h/2);// give float "h" a value, print the 2 last calculations.
return 0;
}