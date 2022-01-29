// NAME:SUDIPTA SOTRA DHAR , ID: 202169990264 , COUNTRY: BANGLADESH.
#include<iostream>
#include <string>
using namespace std;

class Account
{
public:
	Account(int);
	void credit(int);
	void debit(int);
	int getAccountBalance();
private:
	int accountBalance;
};
Account::Account(int balance)
{
	if (balance >= 0)
		accountBalance = balance;
	else
	{
		accountBalance = 0;
		cout << "Initial balance was invalid." << endl;
	}
}
void Account::credit(int balance)
{
	accountBalance = accountBalance + balance;
}
void Account::debit(int balance)
{
	if (accountBalance >= balance)
	{
		accountBalance = accountBalance - balance;
	}
	else
	{
		cout << "Debit amount exceeded account balance." << endl;
	}
}
int Account::getAccountBalance()
{
	return accountBalance;
}
int main()
{
	Account A1(100);
	Account A2(-50);
	cout << "Account1's initial balance is: " << A1.getAccountBalance() << "\nAccount2's initial balance is: " << A2.getAccountBalance() << endl;
	A1.credit(500);
	A2.credit(80);
	cout << "\nAccount1's balance is: " << A1.getAccountBalance() << "\nAccount2's balance is: " << A2.getAccountBalance() << endl;
	A1.debit(300);
	A2.debit(80);
	cout << "\nAccount1's balance is: " << A1.getAccountBalance() << "\nAccount2's balance is: " << A2.getAccountBalance() << endl;
}