/*
  CH-230-A
  a13_p4.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B:  public virtual A
{
public:
  B()  { setX(10); }
};
 
class C:  public virtual A  
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;
// error because print request is ambigues
    d.print();
/*
Multiple inheritance creates ambiguity because the child classes take
the same properties from more than one parent class.
That is why we should set classes as virtual to avoid this conflict
*/
    return 0;
}