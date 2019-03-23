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
	// Constructors
	Player():Player("None",100,25){
		cout << "No args Constructor called"<< endl;
	}
	Player(std::string names):Player(names,100,25){
		cout << "one args constructors called"<<endl;
	}
	Player(std::string names, int healths, int xps):name{names},health{healths},xp{xps}{
		cout << "Three args constructors called"<<endl;
	}
	~Player(){
		cout<< "Destructor called for"<< name <<endl;
	}
};

int main()
{
	{
	Player zahid;
	
	Player zahid2("Zahid");
	
	Player zahid3("Zahid",20,30);
	cout<< zahid3.name << "" <<zahid3.health<< " " <<zahid3.xp<<endl;
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
