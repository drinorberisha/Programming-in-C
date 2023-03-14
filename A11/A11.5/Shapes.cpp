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
 
// CIRCLE ===============================
 
Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
    Radius = r;
}
Circle::Circle() : CenteredShape("Default Circle",0,0){
    Radius = 0;
}
 
void Circle::setRadius(double RADIUS){
    Radius = RADIUS;
}
double Circle::getRadius() const{
    return Radius;
}
// add the formula for finding perimeter and area of the circle
double Circle::perimeter() const{
    return (2*M_PI * getRadius());
}
double Circle::area() const{
    return (M_PI * pow(getRadius(), 2));
}
// END OF CIRCLE ============================
 
// RECTANGLE ==================================
 
Rectangle::Rectangle(const std::string& n, double nx, double ny, double NHeight,
                            double NWidth):RegularPolygon(n, nx, ny, 4){
    nwidth = NWidth; 
    nheight = NHeight;
}
Rectangle::Rectangle(): RegularPolygon("Default Rectangle",0,0,4){
    nwidth = 0;
    nheight = 0;
}
 
Rectangle::Rectangle(const Rectangle& obj) 
                                          : RegularPolygon(obj.getName(), obj.getX(), obj.getY(), 
                                            obj.getEdgesNumber()) {
    nwidth = obj.nwidth;
    nheight = obj.nheight;
}
 void Rectangle::setNWidth(double NWidth) {
    nwidth = NWidth;
}
 
void Rectangle::setNHeight(double NHeight) {
    nheight = NHeight;
}
 
double Rectangle::getNWidth() const {
    return nwidth;
}
 
double Rectangle::getNHeight() const {
    return nheight;
}
// add the formula for finding perimeter and area of the rectangle
double Rectangle::perimeter() const {
    return (2 * (getNWidth() + getNHeight()));
}
 
double Rectangle::area() const {
    return (getNWidth() * getNHeight());
}
 
// END RECTANGLE ==================================
 
// SQUARE ==========================================
 
Square::Square(const std::string& n, double nx, double ny, double Nside) : Rectangle(n, nx, ny, Nside, Nside){
    nside = Nside;
}
 
Square::Square() : Rectangle("Default Square", 0,0,0,0){
    nside = 0;
}
 
Square::Square(const Square& obj):
                                  Rectangle(obj.getName(), obj.getX(), obj.getY(), obj.getNside(), obj.getNside()){
    nside = nside;
}
 
void Square::setNside(double Nside){
    nside = Nside;
}
double Square::getNside() const{
    return nside;
}
// add the formula for finding perimeter and area of the square
double Square::perimeter() const{
    return (4*getNside());
}
double Square::area() const{
    return (pow(getNside(), 2));
}