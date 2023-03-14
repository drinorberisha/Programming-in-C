/*
  CH-230-A
  a8.p7.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
 
#include <stdio.h>
#include <stdlib.h>
 
int main(){
//declare a string that has capacity of 60 characters
    char lineS[60];
// declaring file pointers
    FILE *fp1,*fp2,*mergefp;
// get the characters from the file text1.txt
    fp1=fopen("text1.txt","r");
// if text1.txt is unaccessible print the following and exit
    if(fp1==NULL){
        printf("Could not access file\n");
        exit(1);
    }
// same as with fp1 here
    fp2=fopen("text2.txt","r");
    if(fp2==NULL){
        printf("Could not access file\n");
        exit(1);
    }
// get the chars from 2 previous .txt files and put them in the new
// merge12.txt
    mergefp=fopen("merge12.txt","w");
// if file merge12.txt is not accessible print the following and exit
    if(mergefp==NULL){
        printf("Could not access file\n");
        exit(1);
    }
 
// while input is being given print the string created
    while(fgets(lineS,60,fp1)){
        fprintf(mergefp,"%s",lineS);
    }
// same here with the other fp
    while(fgets(lineS,60,fp2)){
        fprintf(mergefp,"%s",lineS);
    }
// close the following
    fclose(fp1);
    fclose(fp2);
    fclose(mergefp);
 
    return 0;
}