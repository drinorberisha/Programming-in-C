#include <iostream>
#include "Creature.h"
// CLASS IMPLEMENTATION
using namespace std;
 
Creature::Creature() : distance(10){}
 
Creature::~Creature(){
    cout<<"Destroying Creature \n";
}
void Creature::setDist(int Distance){
    distance = Distance;
}
 
int Creature::getDist() const{
    return distance;
}
void Creature::run() const {
    cout<<"running"<< distance<<"meter!\n";
}
 
Wizard::Wizard() : distFactor(3) {}
 
Wizard::~Wizard() {
    cout << "Destroying Wizard!\n";
}
 
void Wizard::setDistFactor(int DistFactor) {
    distFactor = DistFactor;
}
 
int Wizard::getDistFactor() const {
    return distFactor;
}
 
void Wizard::hover() const {
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}
 
 
Bigfoot::Bigfoot() : height(5){}
Bigfoot::~Bigfoot() {
    cout<<"Destroying Bigfoot\n";
}
void Bigfoot::setheight(double my_height) {
    height = my_height;
}
 
double Bigfoot::getheight() const{
    return height;
}
 
void Bigfoot::Height() const{
    cout<<"Height of the Bigfoot is: "<<(distance * height)<<" m\n";
}
 
 
dragon::dragon() : Fspit(200){}
dragon::~dragon() {
    cout<<"Destroying dragon\n";
}
void dragon::setFspit(double FSPIT) {
    Fspit = Fspit;
}
 
double dragon::getheight() const{
    return Fspit;
}
 
void dragon::Flame() const{
    cout<<"Flame of the dragonis: "<<(distance * Fspit)<<" grade Celcius\n";
}