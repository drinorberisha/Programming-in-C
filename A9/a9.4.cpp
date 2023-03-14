/*
  CH-230-A
  a9_p4.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <iostream>
#include <string>
using namespace std;
 
int mycount(int d, int b){
// do the calculation
    return b-d;
}
int mycount(char c, string str){
// should declare unsigned because of string
    unsigned int i;
    int count = 0;
// check for the char in the string until i is bigger than the string length
    for(i = 0;i<str.length();i++){
        if(str[i] == c){
            count++;
        }
        
    }
// print the number of occurances
        return count;
}
int main(){
    int d,b;
    cin>>d>>b;
// print the return of the function 
    cout<<mycount(d,b)<<endl;
// call the function with the parameters inside
    char c;
    string str;
    cin>>c;
   
    cout<<mycount(c,"This is a string");
 
    return 0;
}