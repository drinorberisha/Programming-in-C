/*
  CH-230-A
  a5_p9.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
 
void read(int ***arr, int x, int y, int z);
void p2DSections(int ***arr, int x, int y, int z);
 
int main() {
    int i, j, x, y, z, ***dynArray;
 
    scanf("%d%d%d", &x, &y, &z);
 
    dynArray = (int ***) malloc(sizeof(int **) * x);
// make sure memory allocation was successful
    if(dynArray == NULL) {
        exit(1);
    }
 
    for(i = 0; i < x; i++) {
        dynArray[i] = (int **) malloc(sizeof(int *) * y);
// make sure every array was successfully allocated
        if(dynArray[i] == NULL) {
            exit(1);
        }
        for(j = 0; j < y; j++) {
            dynArray[i][j] = (int *) malloc(sizeof(int) * z);
// make sure every array was successfully allocated
            if(dynArray[i][j] == NULL) {
                exit(1);
            }
        }
    }
 
    read(dynArray, x, y, z);
    p2DSections(dynArray, x, y, z);
 
// Memory deallocation
    for(i = 0; i < x; i++) {
        for(j = 0; j < y; j++) {
// from pointers of arrays
            free(dynArray[i][j]);
        }
// from pointers of pointers of arrays
        free(dynArray[i]);
    }
// from triple pointer
    free(dynArray);
 
    return 0;
}
 
void read(int ***arraY, int x, int y, int z) {
    int i, j, k;
    for(i = 0; i < x; i++) {
        for(j = 0; j < y; j++) {
            for(k = 0; k < z; k++) {
//we need 3 integers to represent the dimensions of the array
                scanf("%d", &arraY[i][j][k]);
            }
        }
    }
}
 
void p2DSections(int ***arraY, int x, int y, int z) {
    int i, j, k;
    // Outer loop goes through layers of depth
    for(k = 0; k < z; k++) {
        printf("Section %d:\n", k + 1); // State which layer we are on
        for(i = 0; i < x; i++) { // Loop through rows
            for(j = 0; j < y; j++) { // Loop through columns
                printf("%d ", arraY[i][j][k]);
            }
            printf("\n");
        }
    }
}