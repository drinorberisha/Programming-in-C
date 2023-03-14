#include<iostream>
#include <string.h>
#include "TournamentMember.h"
using namespace std;
TournamentMember::TournamentMember()
{
    cout<<"default constructor"<<endl;
    strcpy(name,"name");
    strcpy(surname,"surname");
    strcpy(date,"00-00-0000");
    age=0;
}
TournamentMember::TournamentMember(const char *new_name, const char *new_surname, const char *new_date, int new_age)
{
    cout<<"parametric constructor"<<endl;
    for (int i = 0; i < 36; i++)
    {
        name[i]=new_name[i];
    }
    for (int i = 0; i < 36; i++)
    {
        surname[i]=new_surname[i];
    }
    for (int i = 0; i < 11; i++)
    {
        date[i]=new_date[i];
    }
    age=new_age;
}
TournamentMember::TournamentMember(const TournamentMember& copy_member)
{
    cout<<"copy constructor"<<endl;
    for (int i = 0; i < 36; i++)
    {
        name[i]=copy_member.name[i];
    }
    for (int i = 0; i < 36; i++)
    {
        surname[i]=copy_member.surname[i];
    }
    for (int i = 0; i < 11; i++)
    {
        date[i]=copy_member.date[i];
    }
    age=copy_member.age;
}
TournamentMember::~TournamentMember()
{
    cout<<"destructor"<<endl;
// destructor;
}
void TournamentMember::print()
{
    char* n=get_name();
    char* s=get_surname();
    char* d=get_date();
    string l=get_location();
    string tn=get_team_name();
    int a=get_age();
    cout<<"name: "<<n<<endl<<"surname: "<<s<<endl<<"birthday: "<<d<<endl
    <<"location: "<<l<<endl<<"name of the team: "<<tn<<endl<<"age: "<<a<<endl<<endl;
}
string TournamentMember::location="bremen";
string TournamentMember::team_name="jbu";
 
//-----------------------------------------------------------------
//the extra code
//default constructor
Player::Player()
{
    cout<<"player default constructor..."<<endl;
    number=0;
    position="cm";
    goals=0;
    foot='R';
}
//parametric default constructor
Player::Player(const char *new_name, const char *new_surname, const char *new_date, int new_age,
int new_number, string new_position, char new_foot, int new_goals)
:TournamentMember(new_name,new_surname,new_date,new_age)
{
    cout<<"player parametric constructor..."<<endl;
    number=new_number;
    position=new_position;
    foot=new_foot;
    goals=new_goals;
}
//copy constructor
Player::Player(const Player& copy_player)
{
    cout<<"player copy constructor..."<<endl;
    for (int i = 0; i < 36; i++)
    {
        name[i]=copy_player.name[i];
    }
    for (int i = 0; i < 36; i++)
    {
        surname[i]=copy_player.surname[i];
    }
    for (int i = 0; i < 11; i++)
    {
        date[i]=copy_player.date[i];
    }
    age=copy_player.age;
    number=copy_player.number;
    position=copy_player.position;
    foot=copy_player.foot;
    goals=copy_player.goals;
}
//destructor
Player::~Player()
{
    cout<<"player destructor..."<<endl;
    //destructor
}
//service
void Player::print_p()
{
    cout<<endl<<"==================================="<<endl;
    print();
    cout<<"number: "<< get_number()<<endl;
    cout<<"position: "<< get_position()<<endl;
    cout<<"goals: "<< get_goals()<<endl;
    cout<<"foot: "<< get_foot()<<endl;
}