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
	
	Player(std::string names="NONE", int healths=0, int xps=0):name{names},health{healths},xp{xps}{
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
	Player zahid3("Zahid",20);
	Player zahid4("Zahid",20,30);
	
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
