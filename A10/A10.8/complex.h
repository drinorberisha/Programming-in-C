#include <string>
// class declaration
class Complex
{
    private:
        int real;
        int imaginary;
 
 
    public:
// 3 types of constructors
        Complex(int real, int complex);
        Complex();
        Complex(Complex& num);
// destructor
        ~Complex();
// setter
        void setReal(int newReal);
        void setImaginary(int newImaginary);
// getter
        int getReal();
        int getImaginary();
// functions 
        Complex addition(Complex& num);
        Complex substraction(Complex& num);
        Complex multiplication(Complex& num);
        Complex conjugate();
 
        void print();
 
};