#ifndef ACCOUNT_H
#define ACCOUNT_H

class account
{
private:
		double deposit;
public:
		
	account();
	account(double deposit);
	void deposit_amount(double amount);
	void withdraw_amount(double amount);
	~account();
	// copy constructor
	account(const account &source);
	account &operator=(const account &rhs); 
};

	

#endif // ACCOUNT_H
