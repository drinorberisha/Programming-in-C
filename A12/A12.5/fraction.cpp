#include <iostream>
#include <cstdlib>
#include "fraction.h"
//default constructor
Fraction::Fraction()
{
    num = 1;
    den = 1;
}
//parametric default constructor
Fraction::Fraction(int n, int d)
{
    int tmp_gcd = gcd(n, d);
 
    num = n / tmp_gcd;
    den = d / tmp_gcd;
}
//Greatest common divisor
int Fraction::gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
//least common multiple
int Fraction::lcm(int a, int b)
{
    return (a*b)/gcd(a,b);
}
 
// void Fraction::print()
// {
//     std::cout << num << "/" << den << std::endl;
// }
std::ostream & operator <<( std::ostream & out ,const Fraction & z )
{
    if(z.den==0)
    {
        out<<"invalid fraction"<<std::endl;
    }
    else if(z.num==0)
    {
        out<<0<<std::endl;
    }
    else if(z.den==1)
    {
        out<<z.num<<std::endl;
    }
    else
    {
        out<<z.num<<"/"<<z.den<<std::endl;
    }
    return out;
}
std::istream & operator >>( std::istream & in ,Fraction & z )
{
    int a=1;
    while (a)
    {
        in>>z.num>>z.den;
        if(z.den==0)
        {
            std::cout<<"invalid input...try again"<<std::endl;
        }
        else
        {
            a=0;
        }
    }
    return in;
}
//method for simplifcation of the fraction
void Fraction::simplify(Fraction* temp)
{
    int div=gcd(temp->num,temp->den);
    if (div!=0)
    {
        temp->num=temp->num/div;
        temp->den=temp->den/div;
    }
}
//Overload the operators ∗ and / for computing the multiplication
//and division of two fractions.
Fraction Fraction::operator *(Fraction z)
{
    Fraction temp;
    temp.num=z.num*num;
    temp.den=z.den*den;
    simplify(&temp);
    return temp;
}
Fraction Fraction::operator /(Fraction z)
{
    Fraction temp;
    temp.num=num*z.den;
    temp.den=den*z.num;
    simplify(&temp);
    return temp;
}
//exercise 5
//Overload the operators +, - for computing the sum and difference of two fractions.
Fraction Fraction::operator +(Fraction z)
{
    Fraction temp;
    temp.num=num*lcm(den,z.den)/den + z.num*lcm(den,z.den)/z.den;
    temp.den=lcm(den,z.den);
    simplify(&temp);
    return temp;
}
Fraction Fraction::operator -(Fraction z)
{
    Fraction temp;
    temp.num=num*lcm(den,z.den)/den - z.num*lcm(den,z.den)/z.den;
    temp.den=lcm(den,z.den);
    if(temp.num!=0)
    {
        simplify(&temp);
    }
    return temp;
}
// Overload the operator = for assigning.
Fraction Fraction::operator =(Fraction z)
{
    num=z.num;
    den=z.den;
    return z;
}
bool Fraction::operator >(Fraction z)
{
    return (num*z.den)>(z.num*den);
}
//Overload the operators < and > to compare two fractions
bool Fraction::operator <(Fraction z)
{
    return (num*z.den)>(z.num*den);
}