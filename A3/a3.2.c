/*
  CH-230-A
  a3_p2.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
int main(){
    char ch;
    int n,i;//declaration of variables
    scanf("%c %d",&ch, &n);//give value to variables
    getchar();
    printf("%c\n",ch);
    for(i=1;n>=i;i++){
    //give condition to increase value of i
        printf("%c-%d\n",ch,i);
    //print the wanted values
    }
    return 0;
}