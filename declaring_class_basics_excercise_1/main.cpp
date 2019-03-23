#include <iostream>
#include <string>
#include <vector>

class Player{
	//attributes
	std::string name;
	int health;
	int xp;
	//Methods
	void talk(std::string);
	bool is_dead();
};

class Account{
	std::string name{"Zahid"};
	double balance{0.0};
	//methods
	bool deposit(double);
	bool withdraw(double);
};

int main(){
	Account zahid_account;
	Account Jim_account;
//	Player zahid;
//	Player hero;
//	Player players[]{zahid,hero};
//	std::vector <Player> player_vec{zahid};
//	player_vec.push_back(hero);
//	Player *enemy{nullptr};
//	enemy = new Player;
	//delete enemy;
	return 0;
}
