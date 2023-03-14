#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
 
// call all the functions
void goUp(char *my_arraY, int size);
void goDown(char *my_arraY, int size);
void backWards(char *my_arraY, int size);
void finish(char *my_arraY, int size);
 
int main() {
    int size;
    char *tempo, *strinG, x;
// make sure malloc is successful
    tempo = (char *) malloc(sizeof(char) * 100);
 
    if(tempo == NULL) {
        exit(1);
    }
// scanf for input until newline is ocurred
    scanf("%[^\n]%*c", tempo);
// make sure malloc is successful
    strinG = (char *) malloc(sizeof(char) * strlen(tempo));
 
    if(strinG == NULL) {
        exit(1);
    }
 
    strcpy(strinG, tempo);
    free(tempo);
    size = strlen(strinG);
 
    while(1) {
        scanf("%c", &x);
        getchar();
// convert char to its int equivalence
        int num = x - '0';
 
 
        void (*arrayOfFunc[4])(char *, int) = {goUp, goDown, backWards, finish};
 
 
        (*arrayOfFunc[num - 1])(strinG, size);
    }
    return 0;
}
 
void goUp(char *my_arraY, int size) {
    int i;
    char *copymy_string = (char *) malloc(sizeof(char) * size);
    if(copymy_string == NULL)
        exit(1);
    strcpy(copymy_string, my_arraY);
 
    for(i = 0; i < size; i++) {
// check if lowercase || if so upper the case of the char
        if(copymy_string[i] >= 'a' && copymy_string[i] <= 'z') {
            copymy_string[i] = toupper(copymy_string[i]);
        }
    }
    printf("%s\n", copymy_string);
    free(copymy_string);
}
 
void goDown(char *my_arraY, int size) {
    int i;
    char *copymy_string = (char *) malloc(sizeof(char) * size);
    if(copymy_string == NULL)
        exit(1);
    strcpy(copymy_string, my_arraY);
 
    for(i = 0; i < size; i++) {
// check if uppercase || if so lower the case of char
        if(copymy_string[i] >= 'A' && copymy_string[i] <= 'Z') {
            copymy_string[i] = tolower(copymy_string[i]);
        }
    }
    printf("%s\n", copymy_string);
    free(copymy_string);
}
 
void backWards(char *my_arraY, int size) {
    int i;
    char *copymy_string = (char *) malloc(sizeof(char) * size);
    if(copymy_string == NULL)
        exit(1);
// call function from string.h
    strcpy(copymy_string, my_arraY);
    for(i = 0; i < size; i++) {
// check if uppercase -> lower the case of char
// check if lowercase -> upper the case of char
        if(copymy_string[i] >= 'A' && copymy_string[i] <= 'Z') {
            copymy_string[i] = tolower(copymy_string[i]);
        } else if(copymy_string[i] >= 'a' && copymy_string[i] <= 'z') {
            copymy_string[i] = toupper(copymy_string[i]);
        }
    }
    printf("%s\n", copymy_string);
    free(copymy_string);
}
 
void finish(char *my_arraY, int size) {
// free the memory
    free(my_arraY);
    exit(1);
}