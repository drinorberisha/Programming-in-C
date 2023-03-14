/*
  CH-230-A
  a9_p9.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
#include <iostream>
#include <string>
#include <time.h>
using namespace std;
   
int main(){
// variables declaration
    int count = 0;
    int randoM;
    string guess, p_answer;
    string array[17]={"computer","television","keyboard","laptop","mouse",
              "madanaj", "gjakova", "berisha","sakica","drinor",
              "dafina","gani","lindita","blendon","luan","dardan","hasan"};
    do{
// random number generator
        srand(static_cast<unsigned int>(time(0)));
        randoM = (rand() % 17);
        string tempo = array[randoM];
 
        for(int i = 0;i < (int) tempo.length(); i++){
            char c = tempo[i];
// replace every vowel with '_'
            if(c == 'a' || c == 'e' ||c == 'i' ||c == 'o' ||c == 'u' ||
            c == 'y'){
                tempo[i]= '_';
            }
        }
        cout<<"Guess this word: "<<tempo<<endl;
// while loop to give the message after guessing the right
// word, and asking if the user wants to continue playing
        while(1){
            cout<<"Try to guess the word: ";
            cin>>guess;
            count++;
            
            if(guess == "quit"){
                return 0;
            }else if(guess == array[randoM]){
                cout<<"Number of attemps: "<< count<<endl;
                cout<<"Do you want to play again>"<<endl;
                cin>>p_answer;
                if(p_answer == "YES"){
                    break;
 
                }else if(p_answer == "NO"){
                    return 0;
                }
            }else{
                continue;
            }
        }
    }while(1);
return 0;
 
}