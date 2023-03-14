/*
  CH-230-A
  a13_p8.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <iostream>
 
using namespace std;
 
class Motor {
    private:
        string problem;
    public:
        Motor() {
// Throw exception when constructing Motor instance
            problem = "This motor has problems";
            cerr << "Error inside Motor : " << problem << endl;
            throw problem;
        }
};
 
class Car {
    private:
        Motor *motor;
    public:
        Car() {
// Initialize motor when constructing Car instance
            motor = new Motor();
        }
};
 
class Garage {
    private:
        string info = "The car in this garage has problems with the motor";
        Car *car;
    public:
        Garage() {
            try {
// Initialize car and check for thrown exceptions
                car = new Car();
            }
            catch (string Exception) {
// Throw new string when catching exception from Motor
                throw info;
            }
        }
};
 
int main() {
    try {
        Garage obj;
    }
 
    catch (string mainException) {
        cerr << "Caught in main : " << mainException << endl;
    }
 
    return 0;
}