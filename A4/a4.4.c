/*
  CH-230-A
  a4_p4.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include<stdio.h>
#include<string.h>
 
// declaring the function that is an array of characters
// and at the end returning an integer for the number
// of consonants
int count_consonants(char str[]);
 
int main() {
    int count = 0;
    char str[100];
// Loop until an empty string with \n as its only element is found
    while(1) {
        fgets(str, sizeof(str), stdin);
// Check if the first element is newline
        if(str[0] == '\n') {
            break;
// stop the program
        }
        count = count_consonants(str);
        printf("Number of consonants=%d\n", count);
    }
 
    return 0;
}
 
int count_consonants(char str[]) {
    int i, count = 0;
 
    for(i = 0; str[i] != '\0'; i++) { // Loop through all positions
// Make sure input is a letter
        if((str[i] >= 'A' && str[i] <= 'Z') ||
        (str[i] >= 'a' && str[i] <= 'z')) {
// Make sure only consonants count
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' ||
            str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' ||
            str[i]=='O' || str[i]=='U') {
                continue;
            } else count++;
// str[i] is a consonant
        }
    }
 
    return count;
}