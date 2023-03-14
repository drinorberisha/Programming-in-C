
//   CH-230-A
//   a3_p5.c
//   Drinor Berisha
//   dberisha@jacobs-university.de

#include <stdio.h>
 
int main(){
 
    char c;
    scanf("%c",&c);
    int n;
    scanf("%d",&n);
    double array[n];
    float sum=0;
    float average=0;
    int i;
    for(i=0;i<n;i++){
 
        double m;
        scanf("%lf",&m);//give value to m
        sum=sum+m;
        average=sum/m;
        array[i]=m;
    }
    switch(c){
//use switch to differentiate and use cases
 
    case 's':
        printf("%f",sum);
        break;
 
    case 'p':
        for(i=0;i<n;i++){
            printf("%lf\n",array[i]);
        }
    case 't':
        printf("%f",(float)9/5*array[n]+32);
        /*one of the numbers should be float
        to be calculated as float*/
        break;
 
    default:
        printf("%lf",average);
 
    }
    return 0;
}