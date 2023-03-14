/*
    CH-230-A
    a1_p2.c
    Drinor Berisha
    dberisha@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
 
int main(){
    double do1,do2;
    scanf("%lf %lf",&do1,&do2);
    printf("sum of doubles=%lf\n",do1+do2);
    printf("difference of doubles=%lf\n",do1-do2);
    printf("square=%lf\n",do1*do1);
    /*First, the  declaration of doubles and that assigning the result as a double.
    At the end the computational part*/
    int in1,in2;
    scanf("%d %d",&in1,&in2);
    int sum2 = in1+in2;
    int product2 = in1*in2;
    printf("sum of integers=%d\n",sum2);
    printf("product of integers=%d\n",product2);
    char ch1,ch2;
    /*We need to write the getchar() because when we press "enter" before the char input,
    the "enter" is listed in the ASCII table
    and will count as a value. Basically does not give us the output wanted. */
    getchar();
    scanf("%c",&ch1);
    getchar();
    scanf("%c",&ch2);
    int sumc = ch1 + ch2;
    int proc = ch1 * ch2;
    printf("sum of chars=%d\n",sumc);
    printf("product of chars=%d\n",proc);
    printf("sum of chars=%c\n",sumc);
    printf("product of chars=%c\n",proc);
    /*we input "(",")" to make the sum and product total required.
    After that we tell the program the type of result we want -- in the first 2 printf's as an integer
    the second printf's as a character*/
    return 0;
}