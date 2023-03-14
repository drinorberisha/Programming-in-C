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
 
class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
    private:
        double Radius;
    public:
        Circle(const std::string&, double, double, double);
        Circle();
        Circle(const Circle&);
// setter & getter
        void setRadius(double RADIUS);
        double getRadius() const;
// perimeter and area
        double perimeter() const;
        double area() const;
};
 
class Rectangle: public RegularPolygon {
    private:
        double nwidth;
        double nheight;
    public:
        Rectangle(const std::string& n, double nx, double ny, double nheight,
                                                              double nwidth);
        Rectangle();
        Rectangle(const Rectangle& obj);
// setter & getter
        void setNWidth(double NWidth);
        void setNHeight(double NHeight);
        double getNWidth() const;
        double getNHeight() const;
// perimeter and area
        double perimeter() const;
        double area() const;
};
 
class Square : public Rectangle {
    private: 
            double nside;
    public:
            Square(const std::string& n, double nx, double ny, double Nside);
            Square();
            Square (const Square& obj);
            void setNside(double Nside);
            double getNside() const;
// perimeter and area
            double perimeter() const;
            double area() const;
};
    
#endif