/*
  CH-230-A
  a12_p1.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"
using namespace std;
 
int main(int argc, char** argv) {
 
    Hexagon Instance1("Hexagon 1",3,3,5,8,"Black");
    Hexagon Instance2("Hexagon 2",1,4,5,15,"Red");
    Hexagon Instance3(Instance2);
 
    cout<<"Hexagon name: ";
    Instance1.printName();
    cout<<"Perimeter is : "<<Instance1.perimeter()<<endl;
    cout<<"Area is : "<<Instance1.area()<<endl;
 
    cout<<"Hexagon name: ";
    Instance1.printName();
    cout<<"Perimeter is : "<<Instance2.perimeter()<<endl;
    cout<<"Area is : "<<Instance2.area()<<endl;
 
    cout<<"Hexagon name: ";
    Instance2.printName();
    cout<<"Perimeter is : "<<Instance3.perimeter()<<endl;
    cout<<"Area is : "<<Instance3.area()<<endl;
 
    return 0;
}