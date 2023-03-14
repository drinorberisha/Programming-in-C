/*
  CH-230-A
  a13_p3.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <iostream>
#include <fstream>
 
using namespace std;
 
int main() {
    int nr;
 
    cout << "Number of files: ";
    cin >> nr;
    string filename;
 
// Open the output file in binary and truncate it upon opening
    ofstream out("concatn.txt", ios::binary | ios::trunc);
// Check if it didn't open successfully
    if (!out.good()) { 
        cerr << "Error!" << endl;
        exit(2);
    }
    
// Loop to go through each file
    for (int i = 0; i < nr; i++) {
        cin >> filename;
        ifstream in(filename, ios::binary);
// Check if it didn't open successfully        
        if (!in.good()) { 
            cerr<<"Error "<<filename<< "!"<< endl;
            exit(2);
        }
 // Check if both files are open
        if (in.is_open() && out.is_open()) {
                out << in.rdbuf();
 
// Place end of line character after content copy
                out << endl;
                
// Store file length           
            int fileLength = in.tellg(); 
 
// Dynamically allocated char array to store entire file
            char *buf = new char[fileLength];
// Read whole file from in into buf
            in.read(buf, fileLength); 
// Write whole file from buf into out
            out.write(buf, fileLength); 
// Place end of line character after content copy
            out << endl;
            delete [] buf;
        }
// Close input file
        in.close(); 
    }
// Close output file
    out.close(); 
    return 0;
}
