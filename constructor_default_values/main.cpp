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
    
    Player(std::string name_val="none", int health_val=100, int xp_val=3);

};



  
Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
      cout << "Refactored all args Constructor" << endl;

}
int main()
{
    Player frank;
    Player zahid("zahid");
    Player ("Frank",0,0);
   
       
    
    return 0;
}
