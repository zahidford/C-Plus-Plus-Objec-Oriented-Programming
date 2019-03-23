#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Account{
private:
	//attributes
	string name;
	double balance;
	
	//methods
public:
	void set_balance(double bal){balance = bal;}
	double get_balance(){return balance;}
	
	// methods defiened outside class
	void set_name(string n);
	string get_name();
	bool deposit(double amount);
	bool withdraw(double amount);
};

	void Account::set_name(string n){
		name = n;
	}
	string Account::get_name(){
		return name;
	}
	bool Account::deposit(double amount){
		balance += amount;
		return true;
	}
	bool Account::withdraw(double amount){
		if (balance-amount >= 0){
			balance -=amount;
			return true;
		} else{
			return false;
		}
		
		}
	



int main()
{
	Account Zahid_account;
	Zahid_account.set_name("Zahid");
	Zahid_account.set_balance(100000);
	Zahid_account.deposit(220000);
	Zahid_account.withdraw(2000);
	
	return 0;
}
