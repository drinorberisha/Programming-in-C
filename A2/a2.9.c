/*
  CH-230-A
  a2_p9.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
#include <ctype.h>
//use ctype.h to check the category of the input
int main(){
    char x;
    scanf("%c",&x);
    int a;
    //isalpha checks if the input is A-Z or a-z
    if((a = isalpha(x))){
        printf("%c %s",x,"is a letter\n");
    }else if((a = isdigit(x))){
    //isdigit checks if the input is 0-9
        printf("%c %s",x,"is a digit\n");
    }else{
    // if neither of the above are the case
        printf("%c %s",x,"is some other symbol\n");
    }
    return 0;
 
}
// link to the function isalpha, isdigit : https://riptutorial.com/c/example/23365/introduction
//