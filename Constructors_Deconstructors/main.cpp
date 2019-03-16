#include <iostream>
#include <string>




class Player
{
private:
    // attributes
    std::string name;
    int health {100};
    int xp{5};
public:
    // Methods
    
    void set_name(std::string name_val)
    {
        name = name_val;
    }
    std::string get_name()
    {
        return name;
    
    }
    bool is_dead();
    
// constructors

Player () 
{
    std::cout << "No args constructor called" << std::endl;
    
}
Player(std::string name)
{
    std::cout << "String constructor called " << std::endl;
}
Player(std::string name, int health, int xp)
{
    std::cout << " Three args constructor called " << std::endl;
}
~Player()
{
    std::cout << "Destructor called for " << name << std::endl;
}

//Player()
//{
//    name ="None";
//    health = 100;
//    xp = 3;
//    
//}
//player(std::string name_val, int health_val, int xp_val)
//{
//    name = name_val;
//    health = health_val;
//    xp = xp_val;
//    
//}
    
    
};


int main()
{
    {
    Player Zahid;
    Zahid.set_name("zahid");
    }
    {
    Player Zahid("zahid",12,30);
    
    }
    {
    Player Zahid{"Zahid"};
    
    }
    return 0;
}
