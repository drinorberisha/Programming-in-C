/*
  CH-230-A
  a5_p5.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
 
#include <stdio.h>
#include <stdlib.h>
 
double scalarProduct(int n, double v[], double w[]);
 
void smallestVec(int n, double v[]);
 
void largestVec(int n, double v[]);
 
int main() {
 
//declare and give value to n that is the number of components
//of both vectors v and w
    int n, i;
    double *v, *w;
    double product;
    scanf("%d", &n);
 
    v = (double *) malloc(sizeof(double) * n);
    w = (double *) malloc(sizeof(double) * n);
 
// make sure the malloc is successful
    if((v == NULL) || (w == NULL)) {
        exit(1);
    }
 
//use for loop to input values to arrays
    for(i = 0; i < n; i++) {
        scanf("%lf", &v[i]);
    }
    for(i = 0; i < n; i++) {
        scanf("%lf", &w[i]);
    }
 
//call the function and print results
    product = scalarProduct(n, v, w);
    printf("Scalar product=%lf\n", product);
 
//call these functions to print the results of the calc they contain
    smallestVec(n, v);
    largestVec(n, v);
    smallestVec(n , w);
    largestVec(n, w);
 
//release memory after not in use
    free(v);
    free(w);
 
    return 0;
}
 
double scalarProduct(int n, double v[], double w[]) {
 
//go through the array and do the calculations
    int i;
    double scalP = 0;
 
    for(i = 0; i < n; i++) {
        scalP = scalP + (v[i] * w[i]);
    }
    return scalP;
}
 
void smallestVec(int n, double v[]) {
    int i, pos = 0;
//set minimum to the first element of the array
    float min = v[0];
    for(i = 1; i < n; i++) {
//finding minimum and assigning it correctly
        if(v[i] < min) {
            min = v[i];
            pos = i;
        }
    }
    printf("The smallest = %lf\n", min);
    printf("Position of smallest = %d\n", pos);
}
 
void largestVec(int n, double v[]) {
    int i, pos = 0;
//set maximum to the first element of the array
    float max = v[0];
    for(i = 1; i < n; i++) {
//finding maximum and assigning it correctly
        if(v[i] > max) {
            max = v[i];
            pos = i;
        }
    }
    printf("The largest = %lf\n", max);
    printf("Position of largest = %d\n", pos);
}