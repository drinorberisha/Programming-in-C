/*
  CH-230-A
  a13_p6.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    vector<int> v(20);
 
    for (int i = 0; i < 20; i++) {
// Equals all elements to 8
        v[i] = 8;
    }
 
    try {
        v.at(20);
    } catch (out_of_range& error) {
        cerr << error.what() << endl;
    } // Catching an out_of_range error when trying to access an invalid index
 
    return 0;
}