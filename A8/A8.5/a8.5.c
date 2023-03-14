/*
  CH-230-A
  a8_p5.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    char ch;
    int count=0,sum=0;
 
    FILE *file_print;
    file_print=fopen("chars.txt","r");
 
    if(file_print==NULL){
        printf("Cannot access file!\n");
        exit(1);
    }
//getting the first character
    ch=getc(file_print);
//iterating through the first 2 chars and adding their ascii values
    while(ch!=EOF && count<2){
        sum+=ch;
        count++;
        ch=getc(file_print);
    }
    FILE *file_print2 = fopen("codesum.txt","w");
    if(file_print2==NULL){
        printf("Cannot create file");
        exit(1);
    }
//printing sum in file_print2
    fprintf(file_print2,"%d",sum);
    fclose(file_print);
    fclose(file_print2);
    return 0;
}