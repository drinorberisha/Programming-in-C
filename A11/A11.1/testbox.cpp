/*
  CH-230-A
  a11_p1.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <iostream>
#include "Box.h" 
 
using namespace std;
 
int main(int argc, char** argv){
    int n;
    cin>>n;
    double bheight, bwidth, bdepth;
// memory allocation 
    Box *box_array = new Box[2*n];
// input the height, width, depth of each box
    for(int i = -0; i <= n; i++){
        cout<<"Enter the height of Box "<<i<<" = ";
        cin>>bheight;
        box_array[i].setbheight(bheight);
 
        cout<<"Enter the width of Box "<<i<<" = ";
        cin>>bwidth;
        box_array[i].setbwidth(bwidth); 
 
        cout<<"Enter the depth of Box "<<i<<" = ";
        cin>>bdepth;
        box_array[i].setbdepth(bdepth);
 
    }
// copy constructor 
    for(int i = n; i < (2*n); i++){
        box_array[i] = box_array[i-n];
    }
// volume
    double volume;
    for(int i = 0; i < (2*n); i++){
        volume = box_array[i].getbheight() * box_array[i].getbwidth() 
                                           * box_array[i].getbdepth();
        cout<<"The volume of Box "<<i<<"= "<<volume<<endl;
    }
// destructor
    delete[] box_array;
    
    return 0;
}