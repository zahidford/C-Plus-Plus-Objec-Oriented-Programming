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
    // Methods
public:
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);

};

Player::Player() 
    : name{"None"}, health{0}, xp{0} {
}

Player::Player(std::string name_val) 
   : name{name_val}, health{0}, xp{0} {
}
  
Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {

}
int main()
{
    Player frank;
    
   
       
    
    return 0;
}
