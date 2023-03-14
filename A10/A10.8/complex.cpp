#include <iostream>
#include "Complex.h"
 
using namespace std;
// constructor with 2 parameters
Complex::Complex(int Real, int Imaginary){
    real = Real;
    imaginary = Imaginary;
}
// empty constructor
Complex::Complex(){
    real = 0;
    imaginary = 0;
}
// copy constructor
Complex::Complex(Complex& num) : real(num.real), imaginary(num.imaginary){
 
}
// destructor
Complex::~Complex(){
 
}
// setter
void Complex::setReal(int newReal){
    real = newReal;
}
 
void Complex::setImaginary(int newImaginary){
    imaginary = newImaginary;
}
// getter
int Complex::getReal(){
    return real;
}
 
int Complex::getImaginary(){
    return imaginary;
}
// for each function declare a temp to return a result
// do the calculations mathmatically correct
Complex Complex::conjugate(){
    Complex temp;
    temp.setReal(getReal());
    temp.setImaginary((-1)*getImaginary());
    return temp;
 
}
 
Complex Complex::addition(Complex& num){
    Complex temp;
    temp.setReal(getReal()+ num.getReal());
    temp.setImaginary(getImaginary()+ num.getImaginary());
    return temp;
}
 
Complex Complex::substraction(Complex& num){
    Complex temp;
    temp.setReal(getReal()- num.getReal());
    temp.setImaginary(getImaginary()-num.getImaginary());
    return temp;
}
Complex Complex::multiplication(Complex& num){
    Complex temp;
    temp.setReal(getReal()* num.getReal() - getImaginary()
                                            *num.getImaginary());
    temp.setImaginary(getReal()*num.getReal() + getImaginary()
                                                *num.getImaginary());
    return temp;
}
// check if the the imaginary part is negative or positive to
// put the '-' sign and * by (-1)
void Complex::print(){
    if(getImaginary() >=0){
        cout<<getReal()<<"+"<<getImaginary()<<"i"<<endl;
    }else{
        cout<<getReal()<<"-"<<(-1)*getImaginary()<<"i"<<endl;
    }
}