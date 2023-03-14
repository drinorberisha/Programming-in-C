#include <iostream>
#include "Box.h"
 
using namespace std;
 
Box::Box(double bHeight, double bWidth, double bDepth){
    bheight = bHeight;
    bwidth = bWidth;
    bdepth = bDepth;
}
 
Box::Box(){
    bheight = 0;
    bwidth = 0;
    bdepth = 0;
}
 
Box::Box(Box& box){
    bheight = box.bheight;
    bwidth = box.bwidth;
    bdepth = box.bdepth;
}
 
Box::~Box(){
}
 
void Box::setbheight(double bHeight){
    bheight = bHeight;
}
void Box::setbwidth(double bWidth){
    bwidth = bWidth;
}
void Box::setbdepth(double bDepth){
    bdepth = bDepth;
}
 
double Box::getbheight() const{
    return bheight;
}
double Box::getbwidth() const{
    return bwidth;
}
double Box::getbdepth() const{
    return bdepth;
}