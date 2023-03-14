#include <iostream>
#include <cmath>
#include "Vector.h"
 
using namespace std;
 
Vector::Vector(double *Pointer, int Size){
    pointer = Pointer;
    size = Size;
}
 
Vector::Vector(){
    pointer = NULL;
    size = 0;
}
 
Vector::Vector(const Vector &vec){
    pointer = new double[vec.size];
    size = vec.size;
    for (int i = 0; i < vec.size; i++)
    {
        pointer[i] = vec.pointer[i];
    }
}
 
Vector::~Vector(){
    delete[] pointer;
}
 
void Vector::setPointer(double *Pointer){
    pointer = Pointer;
}
 
void Vector::setSize(int Size){
    size = Size;
}
 
double *Vector::getPointer() const{
    return pointer;
}
 
int Vector::getSize() const{
    return size;
}
 
void Vector::printComponents() const{
    std::cout << "[ ";
    for (int i = 0; i < getSize(); i++){
        if (i != (getSize() - 1)){
            std::cout << getPointer()[i]
                      << " , ";
        }
        else
            std::cout << getPointer()[i];
    }
    std::cout << " ]" << endl;
}
 
double Vector::norm() const{
    double sum = 0;
    for (int i = 0; i < getSize(); i++){
        sum += pow(getPointer()[i], 2);
    }
    return sqrt(sum);
}
 
Vector Vector::add(const Vector &secAddend) const{
    double *vecResult = new double[getSize()];
    Vector additionVec(vecResult, getSize());
    for (int i = 0; i < getSize(); i++){
        vecResult[i] = getPointer()[i] + secAddend.getPointer()[i];
    }
    return additionVec;
}
 
Vector Vector::subtract(const Vector &subtrahend) const{
    double *vecResult = new double[getSize()];
    Vector subtractionVec(vecResult, getSize());
    for (int i = 0; i < getSize(); i++){
        vecResult[i] = getPointer()[i] - subtrahend.getPointer()[i];
    }
    return subtractionVec;
}
 
double Vector::scalarP(const Vector &second) const{
    double scalProd = 0;
    for (int i = 0; i < getSize(); i++){
        scalProd += (getPointer()[i] * second.getPointer()[i]);
    }
    return scalProd;
}