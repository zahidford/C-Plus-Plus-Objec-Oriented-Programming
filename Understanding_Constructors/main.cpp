#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player
{
    
private: 
// attributes
string name;
int health {100};
int xp{5};
public:
// Methods
void set_name(std::string name_val) 
{name = name_val;}
bool is_dead();
    
Player()
{
name = "NONE";
health = 100;
xp = 3;
}



Player(std::string name_val, int health_val,int xp_val)
{
    name_val = name;
    health_val = health;
    xp_val = xp;
}

};
int main()
{
    Player Zahid;
    Player Amin ("Zahid",100,3);
    
    
  
    
    
}