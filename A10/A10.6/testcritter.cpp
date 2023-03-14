/*
  CH-230-A
  a10_p6.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Crittter.h"
 
using namespace std;
 
int main(int argc, char **argv){
    Critter A;
    A.setHunger(2);
    A.print();
 
    Critter D("Drinor");
    D.setHunger(2);
    D.print();
 
    Critter G("Gani",2,10);
    G.print();
 
    Critter L("Lindita",2,50,150.0);
    L.print();
 
    Critter DA("Dafina",2,35, 125.0,29.6);
 
    return 0;
}