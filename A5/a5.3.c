/*
  CH-230-A
  a5_p3.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
#include <ctype.h>
//use ctype.h to find lowercase letters
int count_lower(char* str);
 
int main(){
    char str[50];
    int lowcount;
 
    while(1){
//using fgets to input the values we want
        fgets(str, sizeof(str),stdin);
        if(str[0] == '\n'){
            break;
        }
// call the function to print it
        lowcount = count_lower(str);
        printf("%d\n", lowcount);
    }
    return 0;
}
int count_lower(char* str){
 
    int i,count = 0;
    for(i = 0; (*(str+i)) !='\0'; i++){
// \0 null terminator
        if(islower((*(str+i))))
// check if the characters are lowercase
            count++;
    }
    return count;
}
