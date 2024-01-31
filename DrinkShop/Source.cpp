<<<<<<< HEAD
<<<<<<< HEAD
#include "Alcoholic.h"
#include "NoAlcoholic.h"
#include "Drinks.h"
#include "Order.h"
#include "Client.h"

#include <iostream>
#include <vector>
using std::vector;
int main()
{
	Client client1("Pensho");
	Order order1("First Order");

	vector<Drinks*> shopList;

	Alcoholic* beer = new Alcoholic("Beer", 2.50, 12, 6.0, 0.2);
	client1.addOrder(beer);
	NoAlcoholic* iceTea = new NoAlcoholic("Ice Tea", 3, 24, 12.0, 0.1);
	client1.addOrder(iceTea);

	shopList.push_back(beer);
	shopList.push_back(iceTea);

	client1.addOrder(order1);
	


	


	//for (unsigned i = 0; i < shopList.size(); i++)
	//{
	//	//Drinks* drink = dynamic_cast<Drinks*>(shopList.at(i));
	//	shopList.at(i)->CalculatePrice();
	//	std::cout << std::endl;
	//}
	/*

	iceTea.print();
	beer.print();
	std::cout << beer.CalculatePrice();*/


	return 0;
=======
#include "Alcoholic.h"
#include "NoAlcoholic.h"
#include "Drinks.h"
#include "Order.h"
#include "Client.h"

#include <iostream>
#include <vector>
using std::vector;
int main()
{
	Client client1("Pensho");
	Order order1("First Order");

	vector<Drinks*> shopList;

	Alcoholic* beer = new Alcoholic("Beer", 2.50, 12, 6.0, 0.2);
	client1.addOrder(beer);
	NoAlcoholic* iceTea = new NoAlcoholic("Ice Tea", 3, 24, 12.0, 0.1);
	client1.addOrder(iceTea);

	shopList.push_back(beer);
	shopList.push_back(iceTea);

	client1.addOrder(order1);
	


	


	//for (unsigned i = 0; i < shopList.size(); i++)
	//{
	//	//Drinks* drink = dynamic_cast<Drinks*>(shopList.at(i));
	//	shopList.at(i)->CalculatePrice();
	//	std::cout << std::endl;
	//}
	/*

	iceTea.print();
	beer.print();
	std::cout << beer.CalculatePrice();*/


	return 0;
>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
=======
#include "Alcoholic.h"
#include "NoAlcoholic.h"
#include "Drinks.h"
#include "Order.h"
#include "Client.h"

#include <iostream>
#include <vector>
using std::vector;
int main()
{
	Client client1("Pensho");
	Order order1("First Order");

	vector<Drinks*> shopList;

	Alcoholic* beer = new Alcoholic("Beer", 2.50, 12, 6.0, 0.2);
	client1.addOrder(beer);
	NoAlcoholic* iceTea = new NoAlcoholic("Ice Tea", 3, 24, 12.0, 0.1);
	client1.addOrder(iceTea);

	shopList.push_back(beer);
	shopList.push_back(iceTea);

	client1.addOrder(order1);
	


	


	//for (unsigned i = 0; i < shopList.size(); i++)
	//{
	//	//Drinks* drink = dynamic_cast<Drinks*>(shopList.at(i));
	//	shopList.at(i)->CalculatePrice();
	//	std::cout << std::endl;
	//}
	/*

	iceTea.print();
	beer.print();
	std::cout << beer.CalculatePrice();*/


	return 0;
>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
}