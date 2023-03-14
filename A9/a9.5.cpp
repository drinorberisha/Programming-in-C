/*
  CH-230-A
  a9_p5.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <iostream>
#include <ctime>
using namespace std;
 
int main(){
 
    string player1;
    cout<<"Please enter your name"<<endl;
    cin>>player1;
// initialize the variables
    int die;
    int count = 0;
    int randomNumber;
    int guess;
// number generator
    srand(static_cast <unsigned int >(time (0)));
        randomNumber = rand();
// include numbers from 0 to 50
        die = (randomNumber % 50) + 1;
        cout<<"Hey "<<player1<<" ,try guessing the number"<<endl;
// endless loop to give hints for the player
        while(1){
            cin>>guess;
            count++;
            if(guess < die){
                cout<<"Too low, try higher ";
            }else if(guess > die){
                cout<<"Too high, try lower ";
            }else{
                cout<<"Nice job "<<player1
                    <<"! You found the number after "
                    <<count
                    <<" attempts."<<endl;
// break the loop when the number is found
                break;
            }
        }
    return  0; 
}