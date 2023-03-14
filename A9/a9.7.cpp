/*
  CH-230-A
  a9_p7.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <iostream>
using namespace std;
// declare empty temp in order to do the swap and put '&' to call by reference
void swapping(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
// declare empty temp in order to do the swap and put '&' to call by reference
void swapping(float &x, float &y){
    float temp;
    temp  = x;
    x = y;
    y = temp;
}
// declare empty temp in order to do the swap and put '&' to call by reference
void swapping(const char *&str1, const char *&str2 ){
const char *temp;
temp = str1;
str1 = str2;
str2 = temp;
}
 
 
 
int main(){
// just write the values before and after swapping
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";
    cout<<"Before swapping"<<endl;
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);
    cout<<"After swapping"<<endl;
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
 
    return 0;
 
 
}