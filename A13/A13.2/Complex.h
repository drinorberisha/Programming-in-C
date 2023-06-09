#include <string>
 
class Complex {
    private:
        int real;
        int imaginary;
    public:
 
// Constructor with parameters
        Complex(int real, int complex);
// Empty constructor
        Complex();
// Copy constructor
        Complex(Complex& num);
 
// Destructor
        ~Complex();
 
// Setter
        void setReal(int newReal);
        void setImaginary(int newImaginary);
 
// Getter
        int getReal();
        int getImaginary();
 
// Overloaded friend functions for extractor and inserter
        friend std::ostream& operator<<(std::ostream &out, const Complex &c);
        friend std::istream& operator>>(std::istream& in, Complex &c);
 
// Overloaded addition, subtraction and multiplication operators
        Complex operator+(const Complex& secondComplex);
        Complex operator-(const Complex& secondComplex);
        Complex operator*(const Complex& secondComplex);
 
// Overloaded assignment operator for Complex instances
        Complex& operator=(const Complex& obj);
 
        void print();
};