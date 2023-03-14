/*
  CH-230-A
  a4_p10.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>
//used math.h because of arithmetic problems
void proddivpowinv(float a,float b, float *prod, float *div,float *pwr, float *invb);
//used the above from the assignment
int main(){
    float a,b,proD,divI,poW,inV;
//input 2 floats
    scanf("%f", &a);
    scanf("%f", &b);
//call the void proddivpowinv
    proddivpowinv(a,b,&proD,&divI,&poW,&inV);
//print all the values needed
    printf("a = %f\n",a);
    printf("b = %f\n",b);
    printf("Product of a, b =%f\n",proD);
    printf("Division of a and b =%f\n",divI);
    printf("a to the power b =%f\n",poW);
    printf("Inverse of b =%f\n",inV);
    return 0;
}
void proddivpowinv(float a,float b, float *prod, float *div,float *pwr, float *invb){
// writing the calculations
    *prod=a*b;
    *div=a/b;
    *pwr=pow(a,b);
    *invb=1.0/b;
 
}