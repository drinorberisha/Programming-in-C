/*
  CH-230-A
  a7_p5.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
// call the functions
int ascend(const void *aA, const void *bB);
int descend(const void *aA, const void *bB);
void elementPrint(int *my_arraY, int size);
 
int main(){
    int *my_arraY, l, i;
    char charact;
    scanf("%d", &l);
 
    my_arraY = (int *) malloc(sizeof(int) * l);
    if(my_arraY == NULL){
        exit(1);
    }
// input the elements
    for(i = 0; i < l; i++){
        scanf("%d", &my_arraY[i]);
    }
    getchar();
// use qsort to sort the order of the input
    while(1){
        scanf("%c", &charact);
        getchar();
        if(charact == 'a'){
            qsort(my_arraY, l, sizeof(int), ascend);
            elementPrint(my_arraY,l);
        }else if(charact == 'd'){
            qsort(my_arraY, l, sizeof(int), descend);
            elementPrint(my_arraY,l);
// free the memory when e is the input
        }else if(charact == 'e'){
            free(my_arraY);
            return 0;
        }
    }
 
    free(my_arraY);
    return 0;
 
}
// find the difference between the void pointers
int ascend(const void *aA, const void *bB){
    return (*(int *)aA - *(int*)bB);
}
// find the difference between the void pointers
int descend(const void *aA, const void *bB){
    return (*(int *)bB - *(int*)aA);
}
// function to print the results
void elementPrint(int *my_arraY, int size){
    int i;
    for(i = 0;i < size; i++){
        printf("%d ", my_arraY[i]);
    }
    printf("\n");
}