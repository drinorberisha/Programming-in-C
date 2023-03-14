#include <string>
// Class declaration
class Critter
{
        private:
            std:: string name;
            int hunger;
            int boredom;
            int height;
 
 
        public:
// when height not supplied, it is 10
            Critter(std::string Name, int Hunger, int Bored, int Height = 10);
            Critter(std::string Name);
            Critter();
 
            void setName(std::string& newName);
            void setHunger(int newHunger);
            void setBoredom(int newBoredom);
            void setHeight(int newHeight);
 
            std::string getName();
            int getHunger();
            int getBoredom();
            int getHeight();
 
            void print();
 
};