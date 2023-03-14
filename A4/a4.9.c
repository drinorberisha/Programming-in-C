/*
  CH-230-A
  a4_p9.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
 
// Function returns an int that calculates
// the sum of min and max input values
int prodmin_max(int arraY[], int n);
 
int main() {
    int i, n, *arraY, proD;
    scanf("%d", &n);
    arraY = (int *) malloc(sizeof(int) * n);
 
// use loop to accept the input
    for(i = 0; i < n; i++) {
        scanf("%d", &arraY[i]);
    }
 
    proD = prodmin_max(arraY, n);
    printf("%d\n", proD);
    return 0;
}
 
int prodmin_max(int arraY[], int n) {
    int i;
    int min = arraY[0];
// min and max set to first element
    int max = arraY[0];
    for(i = 1; i < n; i++) {
        if(arraY[i] > max) {
// If value at arr[i] is bigger than actual max
// max is assigned the value of arr[i]
            max = arraY[i];
        }
        if(arraY[i] < min) {
// If value at arr[i] is less than actual min
// min is assigned the value of arraY[i]
            min = arraY[i];
        }
    }
    return max * min;
// return product of min and max
}