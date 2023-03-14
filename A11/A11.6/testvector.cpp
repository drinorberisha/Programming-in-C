/*
  CH-230-A
  a11_p6.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <iostream>
#include "Vector.h"
using namespace std;
 
int main(int argc, char** argv) {
// dynamic memory allocation
    double *firstComponents = new double[5]{2, 3, 4, 5, 6};
    double *thirdComponents = new double[5]{11, 6, 5, 2, 3};
 
// used default constructor
    Vector instance1;
    cout << "Components of first Vector (default constructed): ";
    instance1.printComponents();
    instance1.setPointer(firstComponents);
    instance1.setSize(5);
    cout << "Components of first Vector (components set using setter): ";
    instance1.printComponents();
 
// used copy constructor
    Vector instance2(instance1);
    cout << "Components of second Vector (copy constructed): ";
    instance2.printComponents();
 
// used parameter constructor
    Vector instance3(thirdComponents, 5);
    cout << "Components of third Vector (parametric constructed): ";
    instance3.printComponents();
 
    cout << "Norm of first Vector: "
              << instance1.norm()
              << endl;
    
    cout << "Scalar Product of first and third Vector: "
              << instance1.scalarP(instance3)
              << endl;
 
    cout << "Sum of first and third Vector: ";
    (instance1.add(instance3)).printComponents();
 
    cout << "Difference of first and third Vector: ";
    (instance1.subtract(instance3)).printComponents();
 
    return 0;
}