#include <iostream>
#include "Critter.h"
// Class definition
using namespace std;
 
Critter::Critter(string Name, int Hunger, int Bored, int Height){
    cout<<"Constructer supplied with all parameters\n";
    name = Name;
    hunger = Hunger;
    boredom = Bored;
    height = Height;
 
}
 
 
Critter::Critter(string Name) : name(Name){
cout<<"Constructor supplied with only 1 parameter\n";
    hunger = 0;
    boredom = 0;
    height = 5;
 
}
// default critter without any properties
Critter::Critter(){
    cout<<"Constructor supplied with no parameters\n";
    name ="default_critter";
    hunger = 0;
    boredom = 0;
    height = 5;
}
// setter
void Critter::setName(std::string& newName){
    name = newName;
}
 
void Critter::setHunger(int newHunger){
    hunger = newHunger;
}
 
void Critter::setBoredom(int newBoredom){
    boredom = newBoredom;
}
 
void Critter::setHeight(int newHeight){
    height = newHeight;
}
// getter
string Critter::getName(){
    return name;
}
 
int Critter::getHunger(){
    return hunger;
}
 
int Critter::getBoredom(){
    return boredom;
}
 
int Critter::getHeight(){
    return height;
}
// print function
void Critter::print(){
 
    cout<<"Name is: "<<getName()<<endl;
    cout<<"Hunger level is: "<<getHunger()<<endl;
    cout<<"Boredom level is: "<<getBoredom()<<endl;
    cout<<"Height is: "<<getHeight()<<endl;
}