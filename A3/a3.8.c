/*
  CH-230-A
  a3_p8.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
 
 
    float array[10];
 
    float summ1(float array[]){
        float suM=0;
        for(int i=0;i<=10;i++){
            suM+= array[i];
        }
        return suM;
    }
    float averA(float a[],int i){\
        float average1=summ1(a)/(i+1);
        return average1;
    }
 
int main(){
    int indeX;
    float a,b;
    for(indeX=0;indeX<10;indeX++){
        float m;
        scanf("%f",&m);
        array[indeX]=m;
        if(m==-99){
            break;
        }
    a=summ1(array);
    b=averA(array,indeX);
 
    }
    printf("%f %f",a,b);
    return 0;
}