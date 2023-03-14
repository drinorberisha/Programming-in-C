/*
  CH-230-A
  a1_p3.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
int main() {
    float result; /* The result of the division */
    int a = 5;
    float b = 13.5;
    result = a / b;
    printf("The result is %f\n", result);
    return 0;
}
/*
The problem with the code was that b was assigned as an integer --- It should be assigned as double or float.
Also in the printf section, the type of the result was %d --- It should be %lf for double or %f float (depends which one you take).
*/