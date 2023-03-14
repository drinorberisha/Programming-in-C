/*
  CH-230-A
  a3_p9.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
 
 
 
    double sum25(double v[], int n){
        if (n>5){
        //check if n is more than 5
            double sum=v[2]+v[5];
            return sum;
        }
        else{
            return -111;
        }
    }
int main(){
    int nr1;
    scanf("%d",&nr1);
    double array[20];
    int indeX;
    float result;
    //declaration and giving values to variables
    for(indeX=0;indeX<nr1;indeX++){
        float m;
        scanf("%f",&m);
        array[indeX]=m;
    }
    result=sum25(array,nr1);
    if(result==-111){
    //check two cases, one of them is the result
        printf("One or both positions are invalid\n");
    }else{
        printf("sum=%lf\n",result);
    }
    return 0;//terminate
 
}