/*
  CH-230-A
  a10_p5.c
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
 
    return 0;
}