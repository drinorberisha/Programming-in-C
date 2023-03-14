/*
  CH-230-A
  a4_p7.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include<stdio.h>
//declaring 2 functions , first for creating the matrix
//and for inputing the number of rows & cols
void printarraY(int arraY[30][30], int n);
//to find and print the integers under the M diagonal
void underMainDiag(int arraY[30][30], int n);
int main() {
    int i, j, n, arraY[30][30];
 
    scanf("%d", &n);
 
//creating the loop for input of rows and cols
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arraY[i][j]);
        }
    }
 
    printarraY(arraY, n);
    underMainDiag(arraY, n);
 
    return 0;
}
 
void printarraY(int arraY[30][30], int n) {
    int i, j;
    printf("The entered matrix is:\n");
//using for loops to go through the array
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", arraY[i][j]);
        }
//put a new line at the end of the first row
        printf("\n");
    }
}
 
void underMainDiag(int arraY[30][30], int n) {
    int i, j;
    printf("Under the main diagonal:\n");
//using for loops to go through the array
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(j < i) // Check if column index is less than row index
                printf("%d ", arraY[i][j]);
        }
    }
    printf("\n");
}