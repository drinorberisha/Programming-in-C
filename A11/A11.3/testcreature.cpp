#include <iostream>
#include "Creature.h"
using namespace std;
int main(){
// same as previous problem
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();
 
    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();
 
    cout << "\nCreating a Bigfoot.\n";
    Bigfoot b;
    b.run();
    b.Height();
 
    cout << "\nCreating a dragon.\n";
    dragon d;
    d.run();
    d.Flame();
 
    return 0;
 
 
}