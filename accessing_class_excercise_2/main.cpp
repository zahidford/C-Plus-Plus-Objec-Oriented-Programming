#include <iostream>
#include <string>
#include <vector>

class Player{
	public:
	//attributes
	std::string name;
	int health;
	int xp;
	//Methods
	void talk(std::string says){std::cout<<name << " Says " << says << std::endl;};
	bool is_dead();
};

class Account{
	public:
	std::string name;
	double balance;
	//methods
	void deposit(double bal){balance +=bal; std::cout <<"Depositted"<<std::endl;};
	void withdraw(double bal){balance -=bal; std::cout <<"widthraw" <<std::endl;};
};

int main(){
	Player zahid;
	zahid.name="zahidulamin";
	zahid.health = 100;
	zahid.xp = 12;
	zahid.talk("dark silence");
	
	Player *enemy = new Player;
	(*enemy).name ="Dak_Silence";
	(*enemy).health = 100;
	enemy->xp=15;
	enemy->talk("I will destroy you");
	
	Account zahids_account;
	zahids_account={"Zahid"};
	zahids_account.deposit(1000.0);
	zahids_account.withdraw(500);
	return 0;
}
