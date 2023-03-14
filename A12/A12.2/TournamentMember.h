#include <string.h>
class TournamentMember
{
    protected:
        char name[36];
        char surname[36];
        char date[11];
        static std::string location;
        static std::string team_name;
        int age;
    public:
// default constructor
        TournamentMember();
// parametic constructor
        TournamentMember(const char*, const char*, const char*, int);
// copy constructor
        TournamentMember(const TournamentMember&);
// destructor
        ~TournamentMember();
// setters and getters
        void set_name(const char *);
        void set_surname(const char *);
        void set_date(const char *);
        void change_location(std::string);
        void set_team_name(std::string);
        void set_age(int new_age){age=new_age;}
        char* get_name(){return name;}
        char* get_surname(){return surname;}
        char* get_date(){return date;}
        std::string get_location(){return location;}
        std::string get_team_name(){return team_name;}
        int get_age(){return age;}
 
// service
        void print();
};
// Player class should be derived from the TournamentMember class
class Player:public TournamentMember
{
    private:
// additional properties such as number,
// position,
// number of goals scored,
// and whether the player is left-footed or right-footed
        int number;
        std::string position;
        int goals;
        char foot;
    public:
        Player();
// An appropriate constructor
        Player(const char*,const char*, const char*, int, int,std::string,char,int);
// copy constructor
        Player(const Player&);
// destructor
        ~Player();
// setters and getters provided as inline methods
        void set_number(int new_number){number=new_number;}
        void set_podition(std::string new_position){position=new_position;}
        void set_foot(int new_foot){foot=new_foot;}
        int get_number(){return number;}
        std::string get_position(){return position;}
        int get_goals(){return goals;}
        char get_foot(){return foot;}
// a method which increments the number of goals scored by a player
        void increase();
// a method which prints all the information of a player on the screen
        void print_p();
};
inline void TournamentMember::set_name(const char *new_name)
{
    for (int i = 0; i < 36; i++)
    {
        name[i]=new_name[i];
    }
}
inline void TournamentMember::set_surname(const char *new_surname)
{
    for (int i = 0; i < 36; i++)
    {
        surname[i]=new_surname[i];
    }
}
inline void TournamentMember::set_date(const char *new_date)
{
    for (int i = 0; i < 11; i++)
    {
        date[i]=new_date[i];
    }
}
inline void TournamentMember::change_location(std::string new_location)
{
    location=new_location;
}
inline void Player::increase()
{
    std::cout<<"goals updated"<<std::endl;
    goals++;
}