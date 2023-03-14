/*
  CH-230-A
  a6_p4.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
 
#include <stdio.h>
#include <stdlib.h>
#define INTERMEDIATE
int main(){
    int i, n, *x, *y;
 
// put scalar product to 0 in order to do the calculations later on the code
    int scalarproD = 0, temp = 0;
    scanf("%d", &n);
 
// memory allocation for x and y;
    x = (int *) malloc(sizeof(int) * n);
    y = (int *) malloc(sizeof(int) * n);
// make sure malloc is successful
    if((x == NULL) || (y == NULL)) {
        exit(1);
    }
 
// for loops for input values
    for(i = 0; i < n; i++){
        scanf("%d", &x[i]);
    }
    for(i = 0; i < n; i++){
        scanf("%d", &y[i]);
    }
// if intermediate is defined the output is the inte. results and the value of
// the scalar product of the two vectors
    #if defined INTERMEDIATE
    printf("The intermediate product values are:\n");
    #endif
// in intermediate is not defined, the output is only the scalar product of the
// two vectors
    for(i = 0; i < n; i++){
        temp  = (x[i] * y[i]);
// do the calculation
        scalarproD = scalarproD + temp;
        #if defined INTERMEDIATE
            printf("%d\n", temp);
        #endif
    }
 
    printf("The scalar product is: %d\n", scalarproD);
 
    free(x);
    free(y);
 
    return 0;
}