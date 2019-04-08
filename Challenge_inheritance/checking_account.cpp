#include "checking_account.h"

checking_account::checking_account():Account::Account(),checking_balance{0},widhrawal_fee{1.50}
{
	std::cout<<"Checking Account Created"<<std::endl;
}
checking_account::checking_account(std::string name, double balance, double fee):Account::Account(name),checking_balance{balance},widhrawal_fee{fee}{
	std::cout<<"Checking Account Created"<<std::endl;
}

checking_account::~checking_account()
{
}

void checking_account::deposit( double amount){
	checking_balance +=amount;
	std::cout<<"Checking Account Created"<<std::endl;
}
void checking_account::widthraw( double widthraw){
	if (checking_balance < widhrawal_fee)
		std::cout<< "Insufficient balance"<<std::endl;
	else 
		checking_balance -= (widthraw +widhrawal_fee);
}