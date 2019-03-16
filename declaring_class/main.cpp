#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player
{
    // attributes
    string name;
    int health {100};
    int xp{5};
    // Methods
    void talk(string);
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
    Account frank_account;
    Account jim_account;
    Player frank;
    Player hero;
    Player array [] {hero, frank};
    vector <Player> player_vec{frank};
    player_vec.push_back(hero);
    
    Player *enemy {nullptr};
    enemy = new Player;
    (*enemy).name="enemy";
    (*enemy).talk("I will destroy you");
    return 0;
}
