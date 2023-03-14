/*
  CH-230-A
  a3_p10.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
 
 
 
 
    float product(float a, float b){
        float producT= a*b;
        return producT;
 
    }
    void productbyref(float a,float b,float *p){
        //function to give value to pointer
        *p = a*b;
 
    }
    void modifybyref(float *a,float *b){
    *a=*a+3;
    *b=*b+11;
    //modification of pointer
 
    }
int main(){
 
    //declaration of variables in use
    float nr1;
    float nr2;
    float ptr;
    scanf("%f",&nr1);
    scanf("%f",&nr2);
 
    //accessing values and printing them
 
    float result = product(nr1,nr1);
    printf("%f\n",result);
 
    productbyref(nr1,nr2,&ptr);
    printf("%f\n",ptr);
 
    modifybyref(&nr1,&nr2);
    printf("%f %f",nr1,nr2);
 
    return 0;
}