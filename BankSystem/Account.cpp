#include "Account.h"
#include <iostream>

Account::Account(double balance)
{
	if (balance <= 0)
	{
		std::cerr << "Initial balance invalid." << std::endl;
		this->balance = 0.0;
		return;
	}
	this->balance = balance;
}

void Account::credit(double amount)
{
	this->balance += amount;
}

void Account::debit(double amount)
{
	if (amount > this->balance)
	{
		std::cerr << "Debit amount exceeded account balance." << std::endl;
		return;
	}
	this->balance -= amount;
}

double Account::getBalance()
{
	return this->balance;
}
