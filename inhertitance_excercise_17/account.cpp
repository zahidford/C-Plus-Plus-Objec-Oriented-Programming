#include "account.h"
#include <iostream>

	account::~account(){
		std::cout<<"Avvount object Destroyed"<<std::endl;
	}

	account::account():deposit{0}{
		std::cout<<"No args Constructor called from Account"<<std::endl;
		
	}
	account::account(double deposit):deposit{deposit}{
		std::cout<<"One args Constructor called from Account"<<std::endl;
	}
	void account::deposit_amount(double amount){
		deposit += amount;
		std::cout<<"Deposit method called from Account"<<std::endl;
	}
	void account::withdraw_amount(double amount){
		deposit -= amount;
		std::cout<<"Withdraw Method called from Account"<<std::endl;
		
	}

account::account(const account &source):deposit{source.deposit}{
	std::cout<<" Account Copy Constructor Called"<<std::endl;
}

account &account::operator=(const account &rhs){
	if (this != &rhs){
		
		deposit=rhs.deposit;
	std::cout<<"operator account called"<<std::endl;}
		
	return *this;
}
	