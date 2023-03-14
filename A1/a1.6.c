/*
  CH-230-A
  a1_p3.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
int main(){
    char c = 'F';
    c = c + 3;
    printf("c=%c\n",c);
    printf("ASCII value of c=%d\n",c);
 
    return 0;
}
/*
If we print the %c type of a char it will display the actual value we assigned between "''".
If we print the %d type of a char it will display the ASCII value of that string.
*/