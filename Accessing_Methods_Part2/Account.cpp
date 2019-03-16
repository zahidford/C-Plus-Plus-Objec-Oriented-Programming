#include "Account.h"

void Account::set_name(std::string n)
{
    name = n;
    
}
std::string Account::get_name()
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
