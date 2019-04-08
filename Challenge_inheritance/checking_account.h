#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include <string>
#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"
#include "Account.h"
class checking_account: public Account
{
public:
	double checking_balance;
	double widhrawal_fee;
	
	checking_account();
	checking_account(std::string name, double balance, double fee);
	~checking_account();
	void deposit( double amount);
	void widthraw(double widthraw);
};

#endif // CHECKING_ACCOUNT_H
