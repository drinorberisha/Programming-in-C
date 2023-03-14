/*
  CH-230-A
  a5_p6.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
 
void countbnegative(int count, float *ptr);
 
int main() {
 
    int n, i, count = 0;
    float *arraY;
 
    scanf("%d", &n);
// basic malloc and check for successful malloc
    arraY = (float *) malloc(sizeof(float) * n);
 
    if(arraY == NULL){
        exit(1);
    }
 
    //loop for reading the elements of the array
    for(i = 0; i < n; i++){
        scanf("%f", &arraY[i]);
    }
// call the function to be executed
    countbnegative(count, arraY);
 
    free(arraY);
 
    return 0;
 
}
 
void countbnegative(int count, float *ptr){
 
// if else statement to stop the counting when encountering negative numbers
    if((*(ptr + count)) < 0){
        printf("Before the first negative value: %d elements", count);
    }else{
        count++;
// use recursive call to check for the next element
        countbnegative(count, ptr);
    }
}
