#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
public:
	std::string name;
	int health;
	int xp;

	void set_name(std::string name_val){
		name=name_val;
	}
	std::string display_name(){
	return name;}
	int display_health(){
	return health;}
	int display_xp(){
	return xp;}
	
	
	
	
	// Constructors
	
	Player(std::string names="NONE", int healths=0, int xps=0):name{names},health{healths},xp{xps}{
	cout << "Three args constructors called"<<endl;}
	// Copy Constructor
	Player(const Player &source);
	
	~Player(){
		cout<< "Destructor called for"<< name <<endl;
	}
};
Player::Player(const Player &source):name{source.name},health{source.health},xp{source.xp}{
	cout << "Copied Successfully"<<endl;
}
void display_player(Player P){
		
		cout<< P.display_name()<<endl;
		cout<< P.display_health()<<endl;
		cout<< P.display_xp()<<endl;
	}

int main()
{
	{
	Player zahid;
	Player zahid2("Zahid");
	Player zahid3("Zahid",20);
	Player zahid4("Zahid",20,30);
	display_player(zahid4);
	}
//	{
//	Player zahid2("zahid2");
//	
//	}
//	{
//	Player Zahid3("zahidr",20,30);
//	
//	}
	
	
	return 0;
}
