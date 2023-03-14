/*
  CH-230-A
  a13_p7.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <iostream>
 
using namespace std;
 
class OwnException : public exception {
    private:
        string Exception;
    public:
// Parametric constructor
        OwnException(string except) {
            (*this).Exception = except;
        }
// Overriden what() method
        virtual const char* what() const noexcept {
            return "OwnException\n";
        }
};
 
void throwException(int input) {
// Different exceptions are thrown from different cases depending   
    switch(input) {
        case 1:
            throw 'a';
            break;
        case 2:
            throw 2;
            break;
        case 3:
            throw true;
            break;
        default:
            throw OwnException("Default case exception");
            break;
    }
}
 
int main() {
// Looping through all possible cases of the switch case     
    for (int i = 1; i < 5; i++) { 
        try {
            throwException(i);
        }
        catch (char error) {
            cerr << "Caught in main: " << error << endl;
        }
        catch (int error) {
            cerr << "Caught in main: " << error << endl;
        }
        catch (bool error) {
            cerr << "Caught in main: " << error << endl;
        }
        catch (OwnException& error) {
            cerr << "Caught in main: " << error.what() << endl;
        }
    }
    
    return 0;
}