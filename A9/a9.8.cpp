/*
  CH-230-A
  a9_p8.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <iostream>
using namespace std;
 
void subtract_max(int *array, int n){
 
    int max;
    cout<<"The max is : "<<endl;
 
// loop to find the maximum value
    for(int j = 1;j < n;j++){
        if(array[j]> array[0]){
            max = array[j];
        }
    }
    
    cout<<max<<endl;
    cout<<"The values after subtraction"<<endl;
// loop to subtract the max value from each element  
    for(int k = 0;k < n;k++){
        array[k] = array[k] - max;
        cout<<array[k]<<endl;
    }
}
 
void deallocate(int *array){
// release memory
    delete array;
}
 
int main(){
 
    int n, *array;
    cout<<"How many numbers you want to write?"<<endl;
    cin>>n;
 
// malloc
    array = new int[n]; 
 
// loop for input
    for(int i = 0; i < n;i++){
        cin>>array[i];
    }
 
//call the functions
    subtract_max(array,n);
    deallocate(array);
}