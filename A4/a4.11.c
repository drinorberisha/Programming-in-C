/*
  CH-230-A
  a4_p11.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
//use ctype.h to use functions tolower(), toupper()
 
//This function returns an integer that shows us how many times
//test characters are seen in the input
int count_insensitive(char *str, char c);
 
int main() {
    int i, count = 0;
    char test[5] = {'b','H','8','u','$'};
// declare the test case values
    char *temp, *str;
    temp = (char *) malloc(sizeof(char) * 50);
 
    if(temp == NULL) {
// Make sure malloc is successful
        exit(1);
    }
 
    // Input characters
    fgets(temp,sizeof(temp),stdin);
 
    str = (char *) malloc(sizeof(char) * strlen(temp));
 
    if(str == NULL) { // Check if malloc was successful on str
        exit(1);
    }
// use strcpy to copy string pointed to by source into the destination
    strcpy(str, temp);
    free(temp);
// Deallocate memory at temp
 
// go through the string
    for(i = 0; i < strlen(str); i++) {
// condition if characters are uppercase
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = tolower(str[i]);
// use tolower to lower the letters if condition is met
        }
    }
 
// go through all 5 test cases to check if loop is correct
    for(i = 0; i < 5; i++) {
        count = count_insensitive(str, test[i]);
        printf("The character '%c' occurs %d times.\n", test[i], count);
    }
    return 0;
}
 
int count_insensitive(char *str, char c) {
    int i;
    int count = 0;
    char lowerC = tolower(c); // Lower the case of the character we search for
    for(i = 0; i < strlen(str); i++) {
        // Check if character of string matches the char we search for
        if(str[i] == lowerC) {
            count++; // Occurrence of character incremented by 1
        }
    }
    return count;
}