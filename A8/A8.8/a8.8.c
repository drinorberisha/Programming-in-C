/*
  CH-230-A
  a8.p8.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(){
    char file1[20],ch;
    int count=0,pin=0;
    FILE *fp;
// give the file1 a name
    printf("Name of file:\n");
    scanf("%s",file1);
 
    fp=fopen(file1,"r");
    if(fp==NULL){
        exit(1);
    }
// while the ch is not the end of file do the following conditions
    while((ch=getc(fp))!=EOF){
        if(ch==' ' || ch==',' || ch=='?' || ch=='!' ||
           ch=='.' || ch=='\t' || ch=='\r' || ch=='\n'){
            if(pin==1){
                count++;
            }else{
            pin=0;
            }
        }
        else{
            pin=1;
        }
    }
    printf("The file contains %d words.",count);
    return 0;
}