#include <iostream>
#include <vector>
#include "Screening.h" 
#include "Hall.h" 
#include "Cinema.h" 

using namespace std;

int main()
{
	Screening sc1("Star Wars", 30);
	Screening sc2("The Godfather", 10);
	
	vector<Screening> screenings;

	screenings.push_back(sc1);
	screenings.push_back(sc2);

	Hall h1("Hall 8", 80, screenings);
	Hall h2("Hall 9", 90, screenings);
	
	h1.print();
	Screening sc3("Indian Joanes", 40);
	Screening sc4("Dune 2", 33);
	std::cout << std::endl;
	vector<Screening> otherScreenings;
	otherScreenings.push_back(sc3);
	otherScreenings.push_back(sc4);

	Hall h3("Hall 10", 100, otherScreenings);

	h3.print();

	Screening sc5("Nemo 2", 55);
	h3.addScreening(sc5);
	h3.print();
	
	vector<Hall> halls;
	halls.push_back(h1);
	halls.push_back(h2);
	halls.push_back(h3);
	std::cout << std::endl;
	Cinema cinema("Arena", "Sofia", halls);
	cinema.print();

	std::cout << std::endl;
	std::cout << "Enter movie name: ";
	string movieName;
	std::getline(std::cin, movieName);

	for (int i = 0; i < halls.size(); i++) // for halls
	{
		Hall h = halls.at(i); // current hall

		vector<Screening> scr = h.getScreeningList(); // progection in the current hall

		for (int j = 0; j < scr.size(); j++) // screening vector
		{
			Screening scrObj = scr.at(j);
			string currentMovieName = scrObj.getMovieName(); //movie name from screening object

			if (movieName == currentMovieName)
			{
				std::cout << "We found projection " << scrObj.getMovieName() << std::endl;
				scrObj.printInfo();
				h.print();
			}
		}
	}
	
	return 0;
}