#include "Alcoholic.h"
#include "NoAlcoholic.h"
#include "Drinks.h"
#include "Order.h"
#include "Client.h"

Client mostExpensiveOrder(vector<Client> clients)
{
	double nowMostExpOrder;
	double lastMostExpOrder = 0;
	int saveClientIndex = -1;
	for (int i = 0; i < clients.size(); i++)
	{
		nowMostExpOrder = 0;
		for (int j = 0; j < clients[i].getOrders().size(); j++)
		{
			for (int k = 0; k < clients[i].getOrders().at(j)->getDrinks().size(); k++)
			{
				nowMostExpOrder += clients[i].getOrders().at(j)->getDrinks().at(k)->calculatePrice();
			}
			if (lastMostExpOrder < nowMostExpOrder)
			{
				lastMostExpOrder = nowMostExpOrder;
				saveClientIndex = i;
			}
		}
	}
	if (saveClientIndex == -1)
	{
		std::cout << "No one found" << std::endl;
		return clients.at(0);
	}
	return clients[saveClientIndex];
}

int main()
{
	Drinks* beer = new Alcoholic("Beer", 2.50, 12, 0.5, 0.2);  
	Drinks* iceTea = new NoAlcoholic("Ice Tea", 3, 24, 0.5, 0.1);
	Drinks* wine = new Alcoholic("Wine", 15, 2, 0.75, 0.2);
	Drinks* tea = new NoAlcoholic("Tea", 3, 4, 0.5, 0.1);

	vector<Drinks*> drinks1;
	drinks1.push_back(beer);

	vector<Drinks*> drinks2;
	drinks2.push_back(iceTea);

	vector<Drinks*> drinks3;
	drinks3.push_back(wine);

	vector<Drinks*> drinks4;
	drinks4.push_back(tea);

	Order* order1 = new Order(drinks1, "12.12.2032");
	Order* order2 = new Order(drinks2, "14.4.2003");
	Order* order3 = new Order(drinks3, "17.6.2004");
	Order* order4 = new Order(drinks4, "24.11.2023");
	vector<Order*> ordersClient1;
	ordersClient1.push_back(order1);

	vector<Order*> ordersClient2;
	ordersClient2.push_back(order2);

	vector<Order*> ordersClient3;
	ordersClient3.push_back(order3);

	vector<Order*> ordersClient4;
	ordersClient4.push_back(order4);

	Client client1("Client1", ordersClient1);
	Client client2("Client2", ordersClient2);
	Client client3("Client3", ordersClient3);
	Client client4("Client4", ordersClient4);
	
	vector<Client> clients;
	clients.push_back(client1);
	clients.push_back(client2);
	clients.push_back(client3);
	clients.push_back(client4);


	mostExpensiveOrder(clients).print();
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
	 
	delete beer;
	delete iceTea;
	delete wine;
	delete tea;
	delete order1;
	delete order2;
	delete order3;
	delete order4;

	return 0;
}