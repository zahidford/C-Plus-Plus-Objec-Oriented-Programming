#ifndef _Account_H_
#define _Account_H_
#include <string>
class Account
{
private:
//attributes
std::string name;
double balance;

public:
// Methods
// declared_inline
void set_balance(double bal){balance = bal;}
double get_balance(){return balance;}

void set_name(std::string n);
std::string get_name();

bool deposit(double amount);
bool withdraw(double amount);
};

#endif // _Account_H_
