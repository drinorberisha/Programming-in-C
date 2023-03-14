#include <iostream>
#include "City.h"
// CLASS DEFINITION
using namespace std;
 
// set the following properties
void City::setName(string newname) {
    name = newname;
}
 
void City::setNumberI(int newnumber) {
    numberI = newnumber;
}
 
void City::setMayor(string newmayor){
    mayor = newmayor;
}
void City::setArea(int newarea){
    area = newarea;
}
// get the following properties
string City::getName(){
    return name;
}
 
int City::getNumberI(){
    return numberI;
}
 
string City::getMayor(){
    return mayor;
}
 
int City::getArea(){
    return area;
}
// function to print the details
void City::print() {
    cout<<"The City of "<<getName()<<endl;
    cout<<"The Number of inhabitants: "<<getNumberI()<<endl;
    cout<<"The Mayor of "<<getName()<<" is "<<getMayor()<<endl;
    cout<<"The Area of "<<getName()<<" is "<<getArea()<<"kilometers squared"<<endl;
}