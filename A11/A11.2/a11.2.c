/*
  CH-230-A
  a11_p2.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <iostream>
 
using namespace std;
 
class Creature {
    public:
        Creature();  
        void run() const;
 
    protected:
        int distance;
};
 
Creature::Creature(): distance(10)
{}    
 
void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  
 
class Wizard : public Creature {
    public:
        Wizard();
        void hover() const;
 
    private:
        int distFactor;
};
 
Wizard::Wizard() : distFactor(3)
{}  
 
void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}
 
 
// new class 1
class Bigfoot : public Creature {
    public:
            Bigfoot();
            ~Bigfoot();
            void Height() const;
    private:
            double height;
};
// empty constructor
Bigfoot::Bigfoot() : height(5){
    cout<<"Using empty constructor\n";
}
// destructor
Bigfoot::~Bigfoot() {
    cout<<"Destroying Bigfoot\n";
}
// function Height
void Bigfoot::Height() const{
    cout<<"Height of the Bigfoot is: "<<(height * distance)<<" m\n";
}
 
// new class 2
class dragon : public Creature {
    public:
            dragon();
            ~dragon();
            void Flame() const;
    private:
            double Fspit;
};
// empty constructor
dragon::dragon() : Fspit(200){
    cout<<"Using empty constructor\n";
}
// destructor
dragon::~dragon() {
    cout<<"Destroying dragon\n";
}
// function Flame
void dragon::Flame() const{
    cout<<"Flame of the dragon is: "<<(Fspit * distance)<<" grade Celcius\n";
}
 
 
int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();
 
    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();
 
    cout << "\nCreating a Bigfoot.\n";
    Bigfoot b;
    b.run();
    b.Height();
 
    cout << "\nCreating a dragon.\n";
    dragon d;
    d.run();
    d.Flame();
 
    return 0;
}