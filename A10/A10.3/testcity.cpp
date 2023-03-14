/*
  CH-230-A
  a10_p3.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
 
#include <iostream>
#include <cstdlib>
#include "City.h"
 
using namespace std;
 
int main(int argc, char** argv){
// set the needed data  
    City Bremen, Paris, London;
 
    Bremen.setName("Bremen");
    Bremen.setNumberI(569352);
    Bremen.setMayor("Andreas Bovenschulte");
    Bremen.setArea(326.73);
    
    Paris.setName("Paris");
    Paris.setNumberI(2161000);
    Paris.setMayor("Anne Hidalgo");
    Paris.setArea(105);
 
    London.setName("London"); 
    London.setNumberI(8982000); 
    London.setMayor("Vincent Keaveny"); 
    London.setArea(1572); 
 
    Bremen.print();
    Paris.print();
    London.print();
 
    return 0;
}