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
    : Player{"none",0,0} {
        cout << "Refactored No args Constructor" << endl;
}

Player::Player(std::string name_val) 
   : Player{name_val,0,0} {
       cout << "Refactored name args Constructor" << endl;
}
  
Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
      cout << "Refactored all args Constructor" << endl;

}
int main()
{
    Player frank;
    
   
       
    
    return 0;
}
