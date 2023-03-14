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