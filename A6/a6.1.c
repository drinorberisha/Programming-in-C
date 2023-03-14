/*
  CH-230-A
  a6_p1.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include<stdio.h>
#define swap(type, a, b) {type temp; temp = a; a = b; b = temp;}
 
int main() {
    int x, y;
    double w, z;
    scanf("%d%d%lf%lf", &x, &y, &w, &z);
 
//call with integers then with doubles by defining
    swap(int, x, y);
    swap(double, w, z);
 
 
    printf("After swapping:\n%d\n%d\n%.6f\n%.6f\n", x, y, w, z);
 
    return 0;
}