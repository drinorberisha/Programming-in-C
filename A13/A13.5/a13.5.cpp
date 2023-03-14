/*
  CH-230-A
  a13_p5.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include<iostream>
using namespace std;
 
class A{
    int x;
public:
    A( ) {
        x = 0;
    }
    A (int i) { 
        x = i; 
    }
    void print() {
        cout << x; 
    }
};
 
class B: virtual public A{
    public:
        B():A(10) {  }
};
 
class C:  virtual public A {
    public:
        C():A(10) {  }
};
 
class D: public B, public C {
    public:
     
};
 
int main(){
    
 
    D d;
// Error: no default constructor for class A
 
/*
Because there is no default constructor for class D the compiler
automatically generates one and then grandparent class A does not have
one so an error shows up.
*/
    d.print();
 
    return 0;
}