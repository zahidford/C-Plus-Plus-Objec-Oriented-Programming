#include "savings_account.h"
#include <iostream>
savings_account::~savings_account(){
		std::cout<<"Savings Destroyed"<<std::endl;
	}
savings_account::savings_account():account::account(),deposit_savings{0},interest_rate{.5}{
		std::cout<<"No args Savings created"<<std::endl;
	}
savings_account::savings_account(double deposit):account::account(deposit),deposit_savings{deposit},interest_rate{.5}{
	std::cout<<"one args Savings created"<<std::endl;
}
void savings_account::deposit_amount_savings(double deposit1){
	deposit_savings += deposit1;
	std::cout<<"Savings depostied"<<std::endl;
}
void savings_account::withdraw_amount_savings(double deposit1){
	deposit_savings +=deposit1;
	std::cout<<"Savings Widhraw"<<std::endl;
}

	
	savings_account::savings_account(const savings_account &source):account(source),deposit_savings{source.deposit_savings},interest_rate{source.interest_rate}{
		std::cout<<"Savings_account Copy Mde Base Sliced"<<std::endl;
		
	}
	
	savings_account &savings_account::operator=(const savings_account &rhs){
	if (this != &rhs){
		account::operator=(rhs);
		interest_rate=rhs.interest_rate;
		deposit_savings=rhs.deposit_savings;
	std::cout<<"Savings account operator account called"<<std::endl;}
		
	return *this;
	}