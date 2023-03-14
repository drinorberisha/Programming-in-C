/*
  CH-230-A
  a12_p3.c
  Drinor Berisha
  dberisha@jacobs-university.de
*/
 
#include <iostream>
#include "TournamentMember.h"
using namespace std;
int main()
{
    char a;
    string location;
    TournamentMember format;
    cout<<"entering the data of the captain...";
    TournamentMember captain("Drinor","Berisha","11-05-2003",18);
    TournamentMember member;
    cout<<"FORMAT:"<<endl;
    format.print();
    cout<<"CAPTAIN:"<<endl;
    captain.print();
    cout<<"do u want to enter a member on the team?\ntype y/n: ";
    here:
    cin>>a;
    if(a=='y')
    {
        cout<<"entering Luan..."<<endl;
        member.set_name("Luan");
        member.set_surname("Berisha");
        member.set_date("29-08-1997");
        member.set_age(24);
        cout<<"is he in the same location as captain?\ntype y/n: ";
        here_2:
        cin>>a;
        if(a=='n')
        {
            cout<<"enter his location: ";
            cin>>location;
            member.change_location(location);
        }
        else if(a=='y')
        {
            cout<<"ok"<<endl;
        }
        else
        {
            cout<<"unknown input..try again"<<endl;
            goto here_2;
        }
 
    }
    else if (a=='n')
    {
        cout<<"ok"<<endl;
    }
    else
    {
        cout<<"unknown input..try again"<<endl;
        goto here;
    }
    cout<<"cloning..."<<endl;
    TournamentMember member_2(member);
    cout<<"MEMBER:"<<endl;
    member.print();
    cout<<"MEMBER CLONE:"<<endl;
    member_2.print();
//=========================================================
    //extra code
    cout<<"constructing players..."<<endl;
    // Create three players with different properties
    Player player_1;
    Player player_2("Blendon","Berisha","23-05-1998",23,10,"sw",'R',100);
    Player player_3(player_2);
    player_1.print_p();
    player_2.print_p();
    player_3.print_p();
    cout<<"has Blendon scored again?\ntype y/n: ";
    cin>>a;
    here_3:
    if(a=='y')
    {
        player_2.increase();
    }
    else if(a=='n')
    {
        cout<<"ok"<<endl;
    }
    else
    {
        cout<<"unknown input..try again"<<endl;
        goto here_3;
    }
    //Then move all players to the location "Hamburg".
    player_1.change_location("hamburg");
    //printing to see the change
    player_1.print_p();
    //player_2 has changes even in number of goals
    player_2.print_p();
    player_3.print_p();
 
    return 0;
}