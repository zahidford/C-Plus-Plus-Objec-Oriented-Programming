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
    void talk(string text_to_say) {cout << name << " Says:" << text_to_say <<endl;}
    bool is_dead();
};

class Account 
{
    // attributes
    string name;
    double balance;
    //methods
    bool deposit(double);
    bool widraw (double);
    
};
int main()
{
    Player frank;
//    frank.name = "Frank"; compiler Error
//    frank.health = 100;
//    frank.xp =12;
    
    frank.talk("Hi there");
    
    
     Player *enemy {nullptr};
//    enemy = new Player;
//    (*enemy).name="enemy";
    (*enemy).talk("I will destroy you");
       
    
    return 0;
}
