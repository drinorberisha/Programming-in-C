/*
  CH-230-A
  a9_p3.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <iostream>
using namespace std;
 
// create function to input output the results
void absolute_value(){
    float x;
    cin >> x;
    if(x<0){
        x = x * (-1);
    }
    cout<<x;
}
 
int main(){
// call the function
absolute_value();
 
return 0;
}