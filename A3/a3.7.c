/*
  CH-230-A
  a3_p7.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
/*create function where the computing happens
following the conditions*/
void print_form(int n,int m,char c){
    for(int ii=1;ii<=n;ii++){
        for(int i =1;i<=m+ii-1;i++){
            printf("%c",c);
        }
     printf("\n");
    }
}
 
int main(){
    int nr1,nr2;
    char char1;
    //give values to integers and char
    scanf("%d",&nr1);
    scanf("%d",&nr2);
    getchar();
    scanf("%c",&char1);
    print_form(nr1,nr2,char1);
    //call function
 
    return 0;
 
}