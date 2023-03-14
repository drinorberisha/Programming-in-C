/*
  CH-230-A
  a4_p1.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
 
#include <stdio.h>
#include <math.h>
/*use math.h to use mathematical functions
 and calculations*/
 
int main() {
    float lower,upper,i,step;
    scanf("%f",&lower);
    getchar();
    scanf("%f",&upper);
    getchar();
    scanf("%f",&step);
    //declare and give values to all floats;
 
    for(i=lower;i<=upper;i+=step)
    //the logic to gradually increase i
 
    printf("%f %f %f\n",i,i*i*M_PI,2*M_PI*i);
    //print the result required
 
}