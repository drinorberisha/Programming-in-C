#include <string> // defines standard C++ string class
 
/* First C++ class */
class Critter
{
private:  // data members are private
    std::string name;
    int hunger;
    int boredom;
    int speed;
    int happy;
 
public: // business logic methods are public
    // setter methods
    void setName(std::string& newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    void setSpeed(int newspeed);
    void setHappiness(int happy);
    // getter method
    int getHunger();
    int getSpeed();
    int getHappiness();
    // service method
    void print();
};