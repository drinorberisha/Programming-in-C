#ifndef __VECTOR_H
#define __VECTOR_H
// Class declaration
class Vector {
    private:
        double *pointer;
        int size;
    public:
// parametric constructor
        Vector(double *Pointer, int Size);
// empty constructor
        Vector();
// copy constructor
        Vector(const Vector&);
// destructor
        ~Vector();
// setter
        void setPointer(double *Pointer);
        void setSize(int Size);
// getter
        double* getPointer() const;
        int getSize() const;
// function declaration
        void printComponents() const;
        double norm() const;
        Vector add(const Vector& secAddend) const;
        Vector subtract(const Vector& subtrahend) const;
        double scalarP(const Vector& second) const;
};
#endif