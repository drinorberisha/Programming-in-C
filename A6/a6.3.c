/*
  CH-230-A
  a6_p3.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
//use macro to compute the biggest variable
//use if else to create the conditions to get the result needed
#define MAXimum(max, a, b, c){\
    if((a > b) && (a > c)){\
        max = a;\
    }else if((b > a) && (b > c)){\
        max = b;\
    }else{\
        max = c;\
    }\
}
// same as for maximum but with < as a condition
#define MINimum(min, a, b, c){ \
    if((a < b) && (a < c)){\
        min = a;\
    }else if((b < a) && (b < c)){\
        min = b;\
    }else{\
        min = c;\
    }\
}
// compute the average of min and max stored before --> to compute average(a+b)/2
// in our case put 2.0 instead of 2 because we need float type result
#define mid_range(min, max, miD){\
    miD = (min + max)/2.0 ;\
}
int main(){
// declare every variable used in the macros
    int a,b,c,max,min;
    float miD;
// basic input
    scanf("%d %d %d",&a,&b,&c);
// call the 3 macros with the variables used inside
    MAXimum(max, a, b, c);
    MINimum(min, a, b, c);
    mid_range(max, min, miD);
// output the result in type float
    printf("The mid-range is: %f\n", miD);
 
 
    return 0;
}