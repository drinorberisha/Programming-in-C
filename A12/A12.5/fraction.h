// simple class for fractions
#ifndef FRACTION_H_
#define FRACTION_H_
 
class Fraction {
 
private:                        // internal implementation is hidden
    int num;                    // numerator
    int den;                    // denominator
 
    int gcd(int a, int b);        // calculates the gcd of a and b
    int lcm(int a, int b);        // calculates the lcm of a and b
 
public:
    Fraction();                    // empty constructor
    Fraction(int, int = 1);     // constructor taking values for fractions and
                                // integers. Denominator by default is 1
    //void print();                // prints it to the screen
 
    //Replace the method print() by an overloaded
    //operator << such that you can use cout <<
    //for printing a fraction on the screen.
    friend std::ostream & operator <<( std::ostream& ,const Fraction&);
    //Overload the operator >> such that you
    //can enter from the keyboard a fraction using
    //cin >>. Check the validity of the input
    //(you can assume that the numerator and denominator will be numbers).
    friend std::istream & operator >>( std::istream & ,Fraction& );
    //Overload the operators ∗ and / for computing t
    //he multiplication and division of two fractions.
    Fraction operator *(Fraction);
    Fraction operator /(Fraction);
    Fraction operator +(Fraction);
    Fraction operator -(Fraction);
    Fraction operator =(Fraction);
    bool operator >(Fraction);
    bool operator <(Fraction);
    void simplify(Fraction*);
};
 
 
#endif /* FRACTION_H_ */