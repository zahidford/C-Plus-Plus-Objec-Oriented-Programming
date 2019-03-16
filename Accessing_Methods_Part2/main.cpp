#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
    Account zahid_account;
    zahid_account.set_name("Zahid's account");
    zahid_account.set_balance(100.00);
    
    if (zahid_account.deposit(200.00))
        cout << "Deposit OK" << endl;
    if (zahid_account.withdraw(500.00))
        cout << "Withdraw OK" << endl;
    else
        cout << "Not sufficient funsds" << endl;
    if (zahid_account.withdraw(1500.00))
         cout << "Withdraw OK" << endl;
    else
        cout << "Not sufficient funsds" << endl;
        
    
   
    return 0;
}
