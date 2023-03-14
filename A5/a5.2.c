/*
  CH-230-A
  a5_p2.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
void divby5(float array[], int size);
 
int main() {
    float array[6] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
//give exact values
    int size = sizeof(array)/ sizeof(float);
 
    printf("Before:\n");
//use for loop to print the calculations in the required way
    for(int k=0; k<6; k++){
        printf("%.3f ", array[k]);
    }
// call function divby5
    divby5(array, size);
 
    printf("\nAfter:\n");
//use for loop to print the calculations in the required way
    for(int i =0; i<size; i++){
    printf("%.3f ", array[i]);
    }
    printf("\n");
 
 
    }
void divby5(float array[], int size){
    int i;
    for(i = 0; i < size; i++) {
// Loop through the array until requirements are met
// Divide element by 5 and assign value to the element
        array[i] = array[i] / 5;
    }
}
