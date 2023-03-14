/*
  CH-230-A
  a7_p6.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
 
// call the functions
struct njeriu {
    char emri[30];
    int mosha;
};
 
int emriComp(const struct njeriu x, const struct njeriu y);
 
int moshaComp(const struct njeriu x, const struct njeriu y);
 
void sort_bubble(struct njeriu *my_arraY, int njerzit,
                int (*Comp)(const struct njeriu x, const struct njeriu y));
 
void njerzit_Print(struct njeriu *my_arraY, int njerzit);
 
int main(){
// declaration of the variables needed
    int i, njerzit;
    struct njeriu *my_arraY;
    scanf("%d", &njerzit);
// memory allocation and checking for successful
    my_arraY = (struct njeriu *) malloc(sizeof(struct njeriu) * njerzit);
    if(my_arraY == NULL){
        exit(1);
    }
 
    for(i = 0; i < njerzit; i++){
        getchar();
        fgets((my_arraY[i]).emri, sizeof((my_arraY[i]).emri),stdin);
// place the null terminator to mark the end of the string
        my_arraY[i].emri[strlen(my_arraY[i].emri) - 1] = '\0';
        scanf("%d",&((my_arraY[i]).mosha));
    }
// call functions to sort by name(emri) and print
    sort_bubble(my_arraY, njerzit, emriComp);
    njerzit_Print(my_arraY, njerzit);
// call functions to sort by age(mosha) and print
    sort_bubble(my_arraY, njerzit, moshaComp);
    njerzit_Print(my_arraY, njerzit);
// free the memory
    free(my_arraY);
 
    return 0;
}
 
 
int emriComp(const struct njeriu x, const struct njeriu y){
    int Comp = strcmp(x.emri, y.emri);
// check if x.emri and y.emri are equal
    if(Comp == 0){
        return x.mosha - y.mosha;
    }else{
        return Comp;
    }
}
 
int moshaComp(const struct njeriu x, const struct njeriu y){
    int Compa = strcmp(x.emri, y.emri);
// check if mosha(age) parts are equal
    if(x.mosha == y.mosha){
        return Compa;
    }else{
//  return age difference
        return x.mosha - y.mosha ;
    }
}
 
void sort_bubble(struct njeriu *my_arraY, int njerzit,
                int (*Comp)(const struct njeriu x, const struct njeriu y )) {
 
    int i;
    bool swapped = true;
// go through the loop until there are not anymore elements to swap
    while(swapped){
        swapped = false;
        for(i = 1; i < njerzit; i++){
// swap if value of comp > 0
            if(Comp(my_arraY[i-1], my_arraY[i]) > 0){
                struct njeriu temporary = my_arraY[i-1];
                my_arraY[i-1] = my_arraY[i];
                my_arraY[i] = temporary;
// check the element
                swapped = true;
            }
        }
    }
}
 
void njerzit_Print(struct njeriu *my_arraY, int njerzit){
// loop through the elements of the my_arraY
    for(int i = 0; i < njerzit; i++){
// print the elements in the requested format
        printf("{%s, %d}; ", my_arraY[i].emri, my_arraY[i].mosha);
    }
    printf("\n");
    return;
}