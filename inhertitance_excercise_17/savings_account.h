#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "account.h"
class savings_account: public account
{
	//using account::account;
private:
	double interest_rate;
	double deposit_savings;
public:
	savings_account();
	~savings_account();
	
	savings_account(double deposit);
	void deposit_amount_savings(double deposit);
	void withdraw_amount_savings(double deposit);
	//copy constructor
	savings_account(const savings_account &source);
	
	savings_account &operator=(const savings_account &rhs); 
};

#endif // SAVINGS_ACCOUNT_H
