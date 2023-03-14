#include <iostream>
#include "Critter.h"
 
using namespace std;
 
void Critter::setName(string& newname) {
    name = newname;
}
 
void Critter::setHunger(int newhunger) {
    hunger = newhunger;
}
// add the following properties
void Critter::setSpeed(int newspeed){
    speed = newspeed;
}
 
void Critter::setHappiness(int newhappy){
    happy = newhappy;
}
// add the text equivalent to the properties
void Critter::print() {
    cout<< "I am " << name << ". My hunger level is " << hunger << "." << endl;
    cout<< "My hunger level is " << hunger << "."<< endl;
    cout<< "My speed is " << speed << "." << endl;
    cout<< "My happines level is " << happy << "." << endl;
}
 
int Critter::getHunger() {
    return hunger;
}
// functions to return the wanted value
int Critter::getSpeed(){
    return speed;
}
 
int Critter::getHappiness(){
    return happy;
}