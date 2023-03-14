/*
  CH-230-A
  a8.p6.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    FILE *file_print1,*file_print2,*file_print3;
    char file1[20],file2[20];
    double a,b,i,j,sum,diff,prod,div;
    printf("Enter name of first file:\n");
//getting name of first file and removing newline
    fgets(file1,20,stdin);
    file1[strlen(file1)-1]='\0';
//getting name of second file and removing newline
    printf("Enter name of second file:\n");
    fgets(file2,20,stdin);
    file2[strlen(file2)-1]='\0';
 
    file_print1=fopen(file1,"r");
    if(file_print1==NULL){
        printf("Could not access file\n");
        exit(1);
    }
 
    file_print2=fopen(file2,"r");
    if(file_print2==NULL){
        printf("Could not access file\n");
        exit(1);
    }
    i=fscanf(file_print1,"%lf",&a);
    j=fscanf(file_print2,"%lf",&b);
    file_print3=fopen("results.txt","w");
    if(file_print3==NULL){
        printf("Could not acces file\n");
        exit(1);
    }
//reading the doubles
    while((i==1)&&(j==1)){
// doing calculations
        sum=a+b;
        diff=a-b;
        prod=a*b;
        div=a/b;
        i=fscanf(file_print1,"%lf",&a);
        j=fscanf(file_print2,"%lf",&b);
    }
// now we print the results wanted in the third file
    fprintf(file_print3,"sum:%lf\ndiff:%lf\nprod:%lf\ndiv:%lf\n",sum,diff,prod,div);
    fclose(file_print1);
    fclose(file_print2);
    fclose(file_print3);
    return 0;
}