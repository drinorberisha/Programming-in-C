/*
  CH-230-A
  a5_p1.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include<stdio.h>
 
 
void triangleOfChars(int n, char ch);
 
int main() {
    int n;
    char ch;
//give values to n and char
 
    scanf("%d%*c", &n);
    scanf("%c", &ch);
//call the void below
    triangleOfChars(n, ch);
 
    return 0;
}
 
void triangleOfChars(int n, char ch) {
    int i;
//always check for bigger than 0
    if(n > 0) {
        for(i = n; i > 0; i--) {
//print the char n times each row and than print new line
            printf("%c", ch);
        }
        printf("\n");
//next time to call it n-1
        triangleOfChars(n - 1, ch);
    }
}