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
	Player():name{"none"},health{100},xp{200}{
		cout << "No args Constructor called"<< endl;
	}
	Player(std::string names):health{100},xp{25},name{names}{
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
	Player zahid("Zahid",100,20);
	cout<< zahid.name << " " <<zahid.health << " " <<zahid.xp<< endl;
	Player zahid2("Zahid",100,30);
	cout<< zahid2.name << "" <<zahid2.health<< " " <<zahid2.xp<<endl;
	Player zahid3("Zahid");
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
