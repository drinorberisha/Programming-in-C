/*
  CH-230-A
  a4_p6.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
//use stdlib.h when using malloc
 
void twoGreat( int arraY[], int n){
    int i;
    int biggie = arraY[0], secBiggie = arraY[0];
    for(i = 1; i < n; i++) {
        if(arraY[i] > biggie) {
// Make sure that the elements is bigger than biggie
// values assigned to different arrays
            secBiggie = biggie;
            biggie = arraY[i];
// Biggest assigned value of element
        }
// Check if it is bigger than secondBiggest and smaller than biggest
        else if (arraY[i] > secBiggie) {
            secBiggie =  arraY[i];
        }
    }
 
    printf("The biggest value in the array is: %d\n", biggie);
    printf("The second biggest value in the array is: %d\n", secBiggie);
 
 
 
 
}
 
int main(){
    int n,*dynamicA;
    scanf("%d",&n);
    dynamicA = (int *)malloc(sizeof(int) * n);
//check if the function malloc was successful
    if(dynamicA == NULL){
        printf("Memory allocation failed");
        exit(-1);
// link that helped me understand the implementation of checking malloc
// https://stackoverflow.com/questions/26831981/should-i-check-
// if-malloc-was-successful
    }
 
    for(int i=0; i<n; i++){
        scanf("%d", &dynamicA[i]);
    }
 
    twoGreat(dynamicA, n);
 
    free(dynamicA);
 
    return 0;
}