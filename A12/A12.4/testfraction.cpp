/*
  CH-230-A
  a12_p4.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
 
#include <iostream>
#include "fraction.h"
 
using namespace std;
 
int main(void)
{
    //Fraction a(4, 2);
    //Fraction b(17, 11);
    //Fraction c(5);
    Fraction frac_1;
    Fraction frac_2;
    Fraction product;
    Fraction division;
    Fraction sum;
    Fraction dif;
 
    // a.print();
    // b.print();
    // c.print();
    cout<<"enter the fractions: "<<endl;
    //entering the data of the fractions from the keyboard
    cin>>frac_1;
    cin>>frac_2;
    cout<<"calculating..."<<endl;
    //calculating the product and division
    product = frac_1*frac_2;
    division = frac_1/frac_2;
    //printing the results
    cout<<"product: "<<product;
    cout<<"division: "<<division;
}