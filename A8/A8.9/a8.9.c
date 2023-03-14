/*
  CH-230-A
  a8.p9.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
 
#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int n;
    scanf("%d",&n);
    char fnames[n][15];
    for(int i=0;i<n;i++){
        scanf("%s",fnames[i]);
    }
    FILE *fp,*out;
    //opening the output file
    out=fopen("output.txt","w");
    if(out==NULL){
        printf("Can't access file\n");
        exit(1);
    }
    printf("Concating the content of %d files...\n",n);
    printf("The result is:\n");
    for(int i=0;i<n;i++){
        char buffer[64];
        fp=fopen(fnames[i],"r");
        if(fp==NULL){
            printf("Error accessing file\n");
            exit(1);
        }
        while(!feof(fp)){
            int count=fread(buffer,1,64,fp);
            //writing the output in output.txt and stdout
            fwrite(buffer,count,1,out);
            fwrite(buffer,count,1,stdout);
        }
    }
    printf("The result was written into output.txt");
    fclose(fp);
    fclose(out);
    return 0;
}