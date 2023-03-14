/*
  CH-230-A
  a13_p1.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
 
int main(int argc, char **argv) {
    char c;
    string input, filename, extension;
    char delimiter = '.';
 
    cout << "Enter file name: ";
    cin >> input;
 
// find position of period in input
    size_t found = input.find_last_of(delimiter);
 
// spread apart the input into filename and extension by the position of "."
    filename = input.substr(0, found);
    extension = input.substr(found, input.length());
// the result wanted 
    string result = filename + "_copy" + extension;
 
// Open the in file
    ifstream in(input);
// Check for unsuccessfull opening   
    if (!in.good()) {
        cerr << "Error opening input file!" <<endl;
        exit(1);
    }
 
// Open the out file with truncate flag
    ofstream out(result,std::ios::trunc);
// Check for unsuccessfull opening
    if (!out.good()) { 
        cerr << "Error opening output file!" <<
        endl;
        exit(2);
    }
 
// Make sure the files are open
    if (in.is_open() && out.is_open()) {
// Extract the in file character by character
        while (in.get(c)){
// Insert each character into out
            out << c;
        }
    } else cout << "At least one of the files couldn't be opened!";
 
// Close files
    in.close(); 
    out.close();
 
    return 0;
}