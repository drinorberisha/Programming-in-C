/*
  CH-230-A
  a10_p4.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"
 
using namespace std;
 
int main(int argc, char **argv){
 
    Critter D;
 
    D.setHunger(2);
    D.print();
 
    Critter G("Gani");
// Critter with 1 parameter
    G.setHunger(2);
    G.print();
// without the height
    Critter T("Torte", 2, 6);
    T.print();
// Critter with all parameters
    Critter L("Lindita",2, 5, 20);
    L.print();
 
 
    return 0;
}