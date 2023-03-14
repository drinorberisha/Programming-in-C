/*
  CH-230-A
  a4_p3.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>
 
//declaring the wanted variables
float geometric_mean(float arr[], int numerim);
 
float max(float arr[], int numerim);
 
float min(float arr[], int numerim);
 
float sum(float arr[], int numerim);
 
 
int main(){
    //defining the size of arr
    float arr[15];
    int i;
    int numerim = 0;
// use for loop to input 15 values
    for(i=0; i<15; i++){
        scanf("%f",&arr[i]);
        if(arr[i]<0){
            arr[i]=0;
            break;
// if value is smaller than 0, break
        }
    numerim++;
    }
    char c;
    getchar();
    scanf("%c",&c);
    switch(c){
//declare all cases possible
 
        case 'm':
            printf("geometric mean = %f\n", geometric_mean(arr, numerim));
            break;
        case 'h':
            printf("highest number = %f\n", max(arr, numerim));
            break;
        case 'l':
            printf("lowest number = %f\n", min(arr, numerim));
            break;
        case 's':
            printf("sum of elements = %f\n", sum(arr, numerim));
            break;
 
        default:
            printf("Invalid input!\n");
            break;
 
    }
    return 0;
 
}
//create return values for every case
float geometric_mean(float arr[], int numerim){
    int i;
    float proD = 1.0;
    for (i=0; i<numerim; i++){
        proD *= arr[i];
    }
    return pow(proD, 1.0/numerim);
}
float max(float arr[], int numerim){
    int i;
    float max = 0;
    for (i=0; i<numerim; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
float min(float arr[], int numerim){
    int i;
    float min=arr[0];
    for(i=0; i<numerim; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
float sum(float arr[], int numerim){
    int i;
    float sum =0;
    for(i=0; i<numerim; i++){
        sum+=arr[i];
    }
    return sum;
}