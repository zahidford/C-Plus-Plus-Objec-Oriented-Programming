#include "Account.h"


int main()
{
	Account Zahid_account;
	Zahid_account.set_name("Zahid");
	Zahid_account.set_balance(100000);
	Zahid_account.deposit(220000);
	Zahid_account.withdraw(2000);
	
	return 0;
}
