#include <iostream>
#include <sstream>
#include "Complex.h"
 
using namespace std;
 
// Constructor Complex with 2 parameters
Complex::Complex(int Real, int Imaginary) {
    real = Real;
    imaginary = Imaginary;
}
 
// Default Constructor
Complex::Complex() {
    real = 0;
    imaginary = 0;
}
 
// Copy constructor
Complex::Complex(Complex& num) : real(num.real), imaginary(num.imaginary) {
 
}
 
// Destructor Complex
Complex::~Complex() {
 
}
 
// Setter
void Complex::setReal(int newReal) {
    real = newReal;
}
 
void Complex::setImaginary(int newImaginary) {
    imaginary = newImaginary;
}
 
// Getter
int Complex::getReal() {
    return real;
}
 
int Complex::getImaginary() {
    return imaginary;
}
 
ostream& operator<<(ostream &out, const Complex &c) {
    if (c.imaginary >= 0)
        out << c.real << "+" << c.imaginary << "i";
    else out << c.real << c.imaginary << "i";
    return out;
}
 
istream& operator>>(istream& in, Complex &c) {
    string delimiter = "+-";
    string number;
    getline(in, number);
// Find position of period in input
    size_t found = number.find_last_of(delimiter);
 
// Use the position of the period for division
    string Real = number.substr(0, found);
    string Imaginary = number.substr(found, number.length() - 1);
 
    stringstream stringToIntRe(Real);
    stringToIntRe >> c.real;
 
    stringstream stringToIntIm(Imaginary);
    stringToIntIm >> c.imaginary;
 
    return in;
}
 
Complex Complex::operator+(const Complex& secondComplex) {
    Complex result((*this).real + secondComplex.real,
                   (*this).imaginary + secondComplex.imaginary);
    return result;
}
 
Complex Complex::operator-(const Complex& secondComplex) {
    Complex result((*this).real - secondComplex.real,
                   (*this).imaginary - secondComplex.imaginary);
    return result;
}
 
Complex Complex::operator*(const Complex& secondComplex) {
    Complex result((*this).real * secondComplex.real - 
                   (*this).imaginary * secondComplex.imaginary,
                   (*this).real * secondComplex.imaginary +
                   secondComplex.real * (*this).imaginary);
    return result;
}
 
Complex& Complex::operator=(const Complex& obj) {
    real = obj.real;
    imaginary = obj.imaginary;
    return *this;
}