#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
//attributes
string name;
double balance;

public:
// Methods
// declared_inline
void set_balance(double bal){balance = bal;}
double get_balance(){return balance;}

void set_name(string n);
string get_name();

bool deposit(double amount);
bool withdraw(double amount);
};

void Account::set_name(string n)
{
    name = n;
    
}
string Account::get_name()
{
    return name;
}

bool Account::deposit(double amount)
{
    
        balance += amount;
        
    
}

bool Account::withdraw(double amount)
{
    if(balance-amount >= 0)
    {
        balance -= amount;
    }
    else
    {
        return false;
    }
}

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
