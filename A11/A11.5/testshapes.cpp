/*
  CH-230-A
  a11_p5.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"
using namespace std;
// print the name, perimeter and area of each shape
int main(int argc, char** argv) {
 
    Circle c("Circle I", 3, 4, 7);
    Rectangle r("Rectangle I", 2,3,4,5);
    Square s("Square I",2,2,5);
 
    cout<<"Shape name: ";
    c.printName();
    cout<<"Perimeter is : "<<c.perimeter()<<endl;
    cout<<"Area is : "<<c.area()<<endl;
 
    cout<<"Next Shape : ";
    r.printName();
    cout<<"Perimeter is : "<<r.perimeter()<<endl;
    cout<<"Area is : "<<r.area()<<endl;
 
    cout<<"Last Shape : ";
    s.printName();
    cout<<"Perimeter is : "<<s.perimeter()<<endl;
    cout<<"Area is : "<<s.area()<<endl;
    
}