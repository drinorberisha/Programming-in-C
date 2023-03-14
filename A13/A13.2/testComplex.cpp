/*
  CH-230-A
  a13_p2.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <iostream>
#include <fstream>
#include "Complex.h"
 
using namespace std;
 
int main(int argc, char **argv) {
     Complex Number1, Number2, result;
 
// Open both in files
     ifstream in1("in1.txt");
     ifstream in2("in2.txt");
// Check if it didn't open successfully
     if (!in1.good()) { 
          cerr << "Error opening input file 1!" << endl;
          exit(1);
     }
// Check if it didn't opne successfully
     if (!in2.good()) { 
          cerr << "Error opening input file 2!" << endl;
          exit(1);
     }
 
// Open the out file with truncate flag
     ofstream out("output.txt", ios::trunc);
// Check if it didn't open successfully
     if (!out.good()) { 
          cerr << "Error opening output file!" << endl;
          exit(2);
     }
 
// Check if files are open
     if (in1.is_open() && in2.is_open() && out.is_open()) {
          in1 >> Number1;
          in2 >> Number2;
          result = Number1 + Number2;
          cout << "Complex Sum: " << result <<endl;
          out << "Complex Sum: " << result <<endl;
          result = Number1 - Number2;
          cout << "Complex Difference: " << result <<endl;
          out << "Complex Difference: " << result <<endl;
          result = Number1 * Number2;
          cout << "Complex Product: " << result <<endl;
          out << "Complex Product: " << result;
     } else{
     cout << "At least one of the files couldn't be opened!";
     }
// Close files
 
     in1.close();
     in2.close();
     out.close();
 
     return 0;
}