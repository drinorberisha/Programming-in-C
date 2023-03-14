/*
  CH-230-A
  a5_p7.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
void concatenate(char arr[], char string[], int size, char string2[],
                  int size2);
 
int main() {
    char string[100], string2[100], *dynArr;
// we use %[^\n]%*c to scan everything until \n but does not scan \n
// we use asterisk to discard the \n scanned
    scanf("%[^\n]%*c", string);
    scanf("%[^\n]%*c", string2);
 
// Malloc equal to sizeof(char) * sum of lengths of strings
 dynArr = (char *) malloc(sizeof(char) * (strlen(string) + strlen(string2)));
// Basic check if malloc was successful
    if(dynArr == NULL) {
        exit(1);
    }
 
//call the function with all the variables used
    concatenate(dynArr, string, strlen(string), string2, strlen(string2));
 
    free(dynArr);
    return 0;
}
 
void concatenate(char arr[], char string[], int size, char string2[],
                 int size2) {
    int i;
// First let every position from string[i] be equal to arr[i]
    for(i = 0; i < size; i++) {
        arr[i] = string[i];
    }
// we start from size to size+size2 to get assigned elements from
// string2 to arr.
// To access each element of string2, we use i - size instead of just i
    for(i = size; i < (size+size2); i++) {
        arr[i] = string2[i - size];
    }
// Null terminator
    arr[size+size2] = '\0';
 
 
    printf("Result of concatenation: %s\n", arr);
}