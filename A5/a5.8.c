/*
  CH-230-A
  a5_p8.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
 
void read(int **arr, int a, int b);
void print(int **arr, int a, int b);
void matrixMultiply(int **arrA, int **arrB, int **arrC, int a, int b, int c);
 
int main() {
    int i;
    int n, m, p;
    int **Aa, **Bb, **Cc;
 
    scanf("%d%d%d", &n, &m, &p);
 
// Malloc for three matrices
    Aa = (int **) malloc(sizeof(int *) * n);
    Bb = (int **) malloc(sizeof(int *) * m);
    Cc = (int **) malloc(sizeof(int *) * n);
 
    if(Aa == NULL || Bb == NULL || Cc == NULL) {
// make sure malloc was successfull
        exit(1);
    }
 
    for(i = 0; i < n; i++) {
        Aa[i] = (int *) malloc(sizeof(int) * m);
// make sure malloc was successfull
        if(Aa[i] == NULL) {
            exit(1);
        }
    }
 
    for(i = 0; i < m; i++) {
        Bb[i] = (int *) malloc(sizeof(int) * p);
// make sure malloc was successfull
        if(Bb[i] == NULL) {
            exit(1);
        }
    }
 
    for(i = 0; i < n; i++) {
        Cc[i] = (int *) malloc(sizeof(int) * p);
// make sure malloc was successfull
        if(Cc[i] == NULL) {
            exit(1);
        }
    }
 
    read(Aa, n, m);
    read(Bb, m, p);
 
    printf("Matrix A:\n");
    print(Aa, n, m);
    printf("Matrix B:\n");
    print(Bb, m, p);
 
    matrixMultiply(Aa, Bb, Cc, n, m, p);
    printf("The multiplication result AxB:\n");
    print(Cc, n, p);
 
    // Deallocate memory of A and C since they have same amount of
    // pointers to arrays (rows)
    for(i = 0; i < n; i++) {
        free(Aa[i]);
        free(Cc[i]);
    }
    free(Aa);
    free(Cc);
 
    for(i = 0; i < m; i++)
        free(Bb[i]);
    free(Bb);
 
    return 0;
}
 
void read(int **arr, int a, int b) {
    int i, j;
    for(i = 0; i < a; i++) {
        for(j = 0; j < b; j++) {
// Input elements of the array
            scanf("%d", &arr[i][j]);
        }
    }
}
 
void print(int **arr, int a, int b) {
    int i, j;
    for(i = 0; i < a; i++) {
        for(j = 0; j < b; j++) {
// Input elements of the array
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
 
void matrixMultiply(int **arrA, int **arrB, int **arrC, int a, int b, int c) {
    int i, j, k;
//use for loop for rows of the new matrix
    for(i = 0; i < a; i++) {
//use for loop for cols of the new matrix
        for(j = 0; j < c; j++) {
            arrC[i][j] = 0;
//do the calculation needed with k as an element of both arrays
//to get the new array by their multiplication
            for(k = 0; k < b; k++) {
                arrC[i][j] = arrC[i][j] + (arrA[i][k] * arrB[k][j]);
            }
        }
    }
}