#include <iostream>
#include "Account.h"
int main()
{
	Account acc(50);
	std::cout << acc.getBalance() << std::endl;
	acc.debit(1);
	std::cout << acc.getBalance() << std::endl;
	acc.credit(1);
	std::cout << acc.getBalance();

}
