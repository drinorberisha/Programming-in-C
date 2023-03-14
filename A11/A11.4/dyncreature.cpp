/*
  CH-230-A
  a11_p4.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"
using namespace std;
int main(){
    string str;
    getline(cin, str);
// created while loop to iterate until it breaks
    while(str !="quit"){
// if else conditions to call different classes. 
        if(str == "Wizard"){
             cout << "\nCreating a Wizard.\n";
// dynamically allocated memory 
             Wizard *w = new Wizard;
             (*w).run();
             (*w).hover();
// released memory when program is finished
 
             delete w;
        }else if(str == "Bigfoot"){
            cout << "\nCreating a Bigfoot.\n";
            Bigfoot *b = new Bigfoot;
            (*b).run();
            (*b).Height();
            delete b;
        }else if(str == "dragon"){
            cout << "\nCreating a dragon.\n";
            dragon *d = new dragon;
            (*d).run();
            (*d).Flame();
            delete d;
        }
        getline(cin, str);
    }
    cout<<"The input was quit therefore the program stopped";
    return 0;
}