/*
  CH-230-A
  a3_p3.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
float conversion(int cm){
    float km = cm/100000.0;
    return km;
/*Create a float function to make the conversion */
};
 
int main(){
   int length;
   scanf("%d",&length);//give value to length
   float generatedLength=conversion(length);
   printf("Result of conversion: %f\n",generatedLength);
   return 0;
}