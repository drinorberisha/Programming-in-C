/*
  CH-230-A
  a4_p12.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include<stdio.h>
#include<string.h>
 
// Function takes an address to an array of chars and 2 characters
// and it replaces all occurrences of first char in the array
// with the second char
void replaceAll(char *str, char c, char e);
 
int main() {
    char c, e, str[80];
 
    while(1) {
        fgets(str, sizeof(str), stdin);
        str[strlen(str) - 1] = '\0';
//Put \0 to terminate string chars
        if(strcmp(str, "stop") == 0) {
// condition for string to match stop
            break;
// Stop the program
        }
        scanf("%c", &c);
        getchar();
        scanf("%c", &e);
        getchar();
 
// Print chars to be replaced
        printf("%c\n%c\n%s\n", c, e, str);
        replaceAll(str, c, e);
        printf("%s\n", str);
// Print string after replaceAll
    }
    return 0;
}
 
void replaceAll(char *str, char c, char e) {
    int i;
    for(i = 0; i < strlen(str); i++) {
// Go through all the elements of the array
        if(str[i] == c) {
// Make sure element matches char to be replaced
            str[i] = e;
        }
    }
}