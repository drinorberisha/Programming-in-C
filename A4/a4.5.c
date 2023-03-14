/*
  CH-230-A
  a4_p5.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
// declaring the function that takes the address of the
// array that contains string and returns an int that
// is the number of consonants
#include <stdio.h>
#include <string.h>
int count_consonants(char *in_it);
 
int main() {
    int count = 0;
    char str[100];
 
// Loop until an empty string with \n as its only element is found
    while(1) {
        fgets(str, sizeof(str), stdin);
        if(str[0] == '\n') {
// Check if the first element is newline
            break;
// Stop the program
        }
        count = count_consonants(str);
        printf("Number of consonants=%d\n", count);
    }
 
    return 0;
}
 
int count_consonants(char *in_it) {
    int i, count = 0;
 
    for(i = 0; (*(in_it + i)) != '\0'; i++) {
// Go to every position
// Make sure every input is a letter
        if(((*(in_it + i)) >= 'A' && (*(in_it + i)) <= 'Z') ||
        ((*(in_it + i)) >= 'a' && (*(in_it + i)) <= 'z')) {
// Make sure only consonants count
            if((*(in_it + i))=='a' || (*(in_it + i))=='e' || (*(in_it + i))=='i' ||
             (*(in_it + i))=='o' || (*(in_it + i))=='u' || (*(in_it + i))=='A' ||
             (*(in_it + i))=='E' || (*(in_it + i))=='I' || (*(in_it + i))=='O' ||
             (*(in_it + i))=='U') {
                continue;
            } else count++;
// str[i] is a consonant
        }
    }
 
    return count;
}