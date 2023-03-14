#include <iostream>
#include "Crittter.h"
// Class definition
using namespace std;
 
Critter::Critter(string Name, int Hunger, int Bored,
                              double Height, double Thirst){
    cout<<"Constructor with all the parameters\n";
    name = Name;
    hunger = convertback(Hunger);
    boredom = Bored;
    height = Height;
    thirst = Thirst;
}
Critter::Critter(string Name, int Hunger, int Bored, double Height){
    cout<<"Constructor with all the parameters\n";
    name = Name;
    hunger = convertback(Hunger);
    boredom = Bored;
    height = Height;
    thirst = convertback(Hunger);
}
 
Critter::Critter(string Name) : name(Name){
    cout<<"Constructor with one parameters\n";
    hunger = 0;
    boredom = 0;
    height = 5;
    thirst = 0.0;
}
 
Critter::Critter(){
    cout<<"Constructor without parameters\n";
    name = "default_critter";
    hunger = 0;
    boredom = 0;
    height = 5;
    thirst = 0.0;
}
// setter
void Critter::setName(std::string& newName){
    name = newName;
}
void Critter::setHunger(int newHunger){
    hunger = convertback(newHunger);
}
void Critter::setBoredom(int newBoredom){
    boredom = newBoredom;
}
void Critter::setHeight(double newHeight){
    height = newHeight;
}
void Critter::setThirst(double newThirst){
    thirst = newThirst;
}
// getter
 
string Critter::getName(){
    return name;
}
int Critter::getHunger(){
    return convertI_D();
}
int Critter::getBoredom(){
    return boredom;
}
double Critter::getHeight(){
    return height;
}
double Critter::getThirst(){
    return thirst;
}
//hide information
int Critter::convertI_D(){
    return ((int)(hunger * 10));
}
 
double Critter::convertback(int Hunger){
    return (((double) Hunger ) / 10);
}
// print function -- calling the getter functions to print results
void Critter::print(){
    cout<<"Name is : "<<getName()<<endl;
    cout<<"Hunger : "<<getHunger()<<endl;
    cout<<"Boredom : "<<getBoredom()<<endl;
    cout<<"Height : "<<getHeight()<<endl;
    cout<<"Thirst : "<<getThirst()<<endl;
}
