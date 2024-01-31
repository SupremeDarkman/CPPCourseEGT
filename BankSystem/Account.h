#pragma once
class Account
{
public:
	Account(double);
	void credit(double);
	void debit(double);
	double getBalance();

private:
	double balance;
};

