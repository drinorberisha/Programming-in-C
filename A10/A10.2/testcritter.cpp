/*
  CH-230-A
  a10_p2.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
 
#include <iostream>
#include <cstdlib>
#include "Critter.h"
 
using namespace std;
 
int main(int argc, char** argv)
{
    Critter c;
 
    string name;
// declare the variables used
    int hunger, speed, happy;
 
    cout << endl << "Please enter data: " << endl;
    cout << "Name: ";
    // cin >> name; will not work if name contains
    // spaces
    getline(cin, name);
    c.setName(name);
    cout << "Hunger: ";
    cin >> hunger;
    c.setHunger(hunger);
// add the following inputs and setters 
    cout << "Speed: ";
    cin>> speed;
    c.setSpeed(speed);
    cout << "Happiness: ";
    cin>> happy;
    c.setHappiness(happy);
 
    cout << "You have created:" << endl;
    c.print();
        return 0;
}