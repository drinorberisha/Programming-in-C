#include <string>
// CLASS DECLARATION
class City
{
    private:
            std::string name;
            int numberI;
            std::string mayor;
            int area;
 
    public:
// setter
            void setName(std::string newname);
            void setNumberI(int newnumber);
            void setMayor(std::string newmayor);
            void setArea(int area);
// getter
                std::string getName();
                int getNumberI();
                std::string getMayor();
                int getArea();
// print function
                void print();
 
};