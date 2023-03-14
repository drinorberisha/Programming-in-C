// please refer to shapes.h for methods documentation
 
#include <iostream>
#include <cmath>
#include "Shapes.h"
 
using namespace std; 
// SHAPE =========================================
Shape::Shape(const string& n) : name(n) {
}
 
Shape::Shape() : name("Default Shape"){}
 
Shape::Shape(const Shape& obj){
    name = obj.name;
}
void Shape::setName(std::string Name){
    name = Name;
}
std::string Shape::getName() const{
    return name;
}
 
void Shape::printName() const {
    cout << name << endl;
}
// END OF SHAPE ===================================
 
// CENTERED SHAPE ==============================
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
    x = 0;
    y = 0;
}
CenteredShape::CenteredShape() : Shape("Default CenteredShape"){}
 
CenteredShape::CenteredShape(const CenteredShape& obj) : Shape(obj.getName()){
    x = obj.x;
    y = obj.y;
}
void CenteredShape::setX(double X){
    x = X;
}
void CenteredShape::setY(double Y){
    y = Y;
}
double CenteredShape::getX() const {
    return x;
}
double CenteredShape::getY() const{
    return y;
}
 
void CenteredShape::move(double X, double Y){
    setX(X);
    setY(Y);
}
// END OF CENTERED SHAPE =============================
 
// REGULAR POLYGON ===============================
 
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
    CenteredShape(n,nx,ny) 
{
    EdgesNumber = nl;
}
RegularPolygon::RegularPolygon() : CenteredShape("Default RegularPolygon", 0, 0){
    EdgesNumber = 0;
}
RegularPolygon::RegularPolygon(const RegularPolygon& obj) : CenteredShape(obj.getName(), obj.getX()
                                                                                       , obj.getY()){
                                EdgesNumber = obj.EdgesNumber;                                                        
}
void RegularPolygon::setEdgesNumber(int EdgesNUMBER){
    EdgesNumber = EdgesNUMBER;
}
int RegularPolygon::getEdgesNumber() const{
    return EdgesNumber;
}
// END OF REGULAR POLYGON ==============================
 
// HEXAGON ============================================
 
Hexagon::Hexagon(const string& name, double pX, double pY,
                 int edgesnuM, int Side, const std::string& Colour)
                :RegularPolygon(name, pX, pY, edgesnuM){
    side = Side;
    colour = Colour;
    cout<<"The colour of the constructed parameter Hexagon is: "<<colour
        <<" and has "<<side<<" sides"<<endl;
}
 
Hexagon::Hexagon(): RegularPolygon("default Hexagon", 0.0, 0.0,6){
    side = 0;
    colour = "Black";
    cout<<"DC is Black Hexagon with 0 sides "<<endl;
}
Hexagon::Hexagon(const Hexagon& obj): RegularPolygon(obj.getName(), obj.getX(),
                                                     obj.getY(), obj.getEdgesNumber()){
    side = obj.side;
    colour = obj.colour;
    cout<<"The colour of the copy constructor Hexagon is: "<<colour
        << " and has "<<side<<" sides"<<endl;
}
 
Hexagon::~Hexagon(){
    cout<<"Destructor here\n";
}
void Hexagon::setSide(int Side) {
    side = Side;
}
 
void Hexagon::setColour(std::string Colour) {
    colour = Colour;
}
 
int Hexagon::GetSide() const {
    return side;
}
 
std::string Hexagon::getColour() const {
    return colour;
}
 
int Hexagon::perimeter() const {
    return (GetSide() * 6);
}
 
double Hexagon::area() const {
    return (1.5 * sqrt(3) * pow(GetSide(), 2));
}