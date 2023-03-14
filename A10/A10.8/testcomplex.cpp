/*
  CH-230-A
  a10_p8.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Complex.h"
 
using namespace std;
 
int main(int argc, char **argv){
    int real,imaginary;
    Complex c1,c2,c3;
// input, output
    cout<<"Please enter the first number:"<<endl<<"Real = ";
    cin>>real;
    cout<<"Imaginary = ";
    cin>>imaginary;
// set the real and imaginary parts of the first number
    c1.setReal(real);
    c1.setImaginary(imaginary);
 
    cout<<"Please enter the second number:"<<endl<<"Real = ";
    cin>>real;
    cout<<"Imaginary = ";
    cin>>imaginary;
// set the real and imaginary parts of the second number
    c2.setReal(real);
    c2.setImaginary(imaginary);
// call the conjugation function and put the result in c3
    cout<<"The conjugate of the first number is: ";
    c3 = c1.conjugate();
    c3.print();
// call the addition function and put the result in c3  
     cout<<"The sum between the two is: ";
    c3 = c2.addition(c1);
    c3.print();
// call the difference function and put the result in c3
    cout<<"The difference between the two is: ";
    c3 = c2.substraction(c1);
    c3.print();
// call the multiplication function and put the result in c3
    cout<<"The product of the two is: ";
    c3 = c1.multiplication(c2);
    c3.print();
 
    return 0;
 
 
}