/*
  CH-230-A
  a9_p6.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <iostream>
#include <cmath>
using namespace std;
 
int myfirst(int *array_int){
    int array_size = 5;
// iterate through the loop and check for the two conditions
    for(int i = 0; i<array_size;i++){
        if(array_int[i] % 2 == 0 && array_int[i] > 0){
            return array_int[i];
        }
 
    }
    return -1;
}
double myfirst(double *array_double){
    int array_size = 5;
    for(int i = 0;i<array_size;i++){
// use floor to check if it has fractional parts and check whether
// double is negative
        if((array_double[i] < 0) && (array_double[i] == floor(array_double[i]))){
            return array_double[i];
        }
    }
    return -1.1;
}
 
char myfirst(char *array_chars){
    int array_size = 5;
    for(int i = 0;i<array_size;i++){
        if(isalpha(array_chars[i])){
// check for every vowel because it is easier than to check for 
// every consonant
            if(array_chars[i] != 'a' && array_chars[i] != 'e'
            && array_chars[i] != 'i' && array_chars[i] != 'o'
            && array_chars[i] != 'u' && array_chars[i] != 'y' 
            && array_chars[i] != 'A' && array_chars[i] != 'Y'
            && array_chars[i] != 'E' && array_chars[i] != 'I'
            && array_chars[i] != 'O' && array_chars[i] != 'U'){
                return array_chars[i];
            }
        }
    }
    return '0';
    
}
 
 
 
int main(){
    int array_size = 5;
    int i;
    int my_ints[array_size];
    cout<<"Input the numbers of int array"<<endl;
// input loop
    for(i = 0;i<array_size;i++){
        cin>>my_ints[i];
    }    
// call the function
    cout<<"Result: "<<myfirst(my_ints)<<endl;
 
    double my_doubles[array_size];
    cout<<"Input the doubles of double array"<<endl;
// input loop
    for(i = 0;i<array_size;i++){
        cin>>my_doubles[i];
    }
// call the function
    cout<<"Result: "<<myfirst(my_doubles)<<endl;
 
    char my_chars[array_size];
    cout<<"Input the chars of char array"<<endl;
// input loop
    for(i = 0;i <array_size;i++){
        cin>>my_chars[i];
    }
// call the function
    cout<<"Result: "<<myfirst(my_chars);
 
 
 
 
    return 0;
}