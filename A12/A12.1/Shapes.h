/* 
    Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
 
class Shape {            // base class
    private:                   // private access modifier: could also be protected
        std::string name;   // every shape will have a name
    public:
        Shape(const std::string&);  // builds a shape with a name
        Shape();                    // empty shape
        Shape(const Shape&);        // copy constructor
// setter & getter
        void setName(std::string Name);
        std::string getName() const;
        void printName() const ;      // prints the name  
};
 
class CenteredShape : public Shape {  // inherits from Shape
    private: 
        double x,y;  // the center of the shape
    public:
        CenteredShape(const std::string&, double, double);  // usual three constructors
        CenteredShape();
        CenteredShape(const CenteredShape&);
// setter & getter
        void setX(double x);
        void setY(double y);
        double getX() const;
        double getY() const;
        void move(double, double);    // moves the shape, i.e. it modifies it center
};
 
class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
    private: 
        int EdgesNumber;
    public:
        RegularPolygon(const std::string&, double, double, int);
        RegularPolygon();
        RegularPolygon(const RegularPolygon&);
// setter & getter
        void setEdgesNumber(int EdgesNUMBER);
        int getEdgesNumber() const;
};
 
class Hexagon : public RegularPolygon {
    private:
            int side;
            std::string colour;
            
    public:
// parametric constructor 
            Hexagon(const std::string& name, double pX, double pY,
                     int edgesnuM, int Side, const std::string& Colour);
// empty constructor
            Hexagon();
            Hexagon(const Hexagon& obj);
// destructor
            ~Hexagon();
// setter
            void setSide(int Side);
            void setColour(std::string Colour);
// getter
            int GetSide() const;
            std::string getColour() const;
// functions to return results
            int perimeter() const;
            double area() const;
};
 
 
 
#endif