/*
  CH-230-A
  a5_p4.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
void divby5(float array[], int n);
 
int main() {
    int i, n;
    float *darraY;
    scanf("%d", &n);
 
// form dynamic allocation
    darraY = (float *) malloc(sizeof(float) * n);
 
// make sure malloc is working
    if(darraY == NULL) {
        exit(1);
    }
 
    for(i = 0; i < n; i++) {
        scanf("%f", &darraY[i]);
    }
 
// call the function that contains the calculation
    divby5(darraY, n);
 
// Print floats with up to 3 decimal digits precision
    printf("\nAfter division with 5:\n");
    for(i = 0; i < n; i++) {
        printf("%.3f ", darraY[i]);
    }
    printf("\n");
 
// free memory when not in use
    free(darraY);
 
    return 0;
}
 
void divby5(float array[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        array[i] = array[i] / 5;
    }
}