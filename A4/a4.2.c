/*
  CH-230-A
  a4_p2.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
 
#include <stdio.h>
#include <string.h>
 
int main(){
//assign how many values as input
    char s[50];
    fgets(s, 50, stdin);
    int lenG=strlen(s);
/*use for loop to print every character
in the correct form required*/
    for(int i = 0; i<(lenG-1); i++){
//use if condition to put spaces
       if(i % 2 == 1){
            printf(" %c\n",s[i]);
 
       }else{
            printf("%c\n",s[i]);
       }
}
return 0;
}