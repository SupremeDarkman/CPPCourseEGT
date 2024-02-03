#include <iostream>

int main()
{
	int a;
	std::cout << "Enter a: ";
	std::cin >> a;
	if (a % 2 == 0)
	{
		std::cout << "even";
	}
	else
	{
		std::cout << "odd";
	}

	return 0;
}