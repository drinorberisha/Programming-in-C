#include <string>
// Class declaration
class Critter
{
    private:
// variable declaration
            std::string name;
            double hunger;
            int boredom;
            double height;
// convertor from int to double
            int convertI_D();
// convertor from double to int
            double convertback(int Hunger);
 
    public:
// types of Critter: with 4 properties, 1 property, without properties
            Critter(std::string Name, int Hunger, int Bored, double Height = 10.0);
            Critter(std::string Name);
            Critter();
 
// setter 
            void setName(std::string &newName);
            void setHunger(int newHunger);
            void setBoredom(int newBoredom);
            void setHeight(double newHeight);
// getter
            std::string getName();
            int getHunger();
            int getBoredom();
            double getHeight();
 
            void print();
};