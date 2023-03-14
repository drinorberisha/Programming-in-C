/*
  CH-230-A
  a3_p6.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
float to_pounds(int kg, int gr){
    //actual formula for the conversion
    float conV=kg*2.2 + gr*0.0022;
    return conV;
 
}
 
int main(){
 
    int nr1,nr2;
    scanf("%d %d",&nr1,&nr2);
    //give values to integers
    printf("Result of conversion: %f\n",to_pounds(nr1,nr2));
    //print the result wanted
    return 0;
 
}