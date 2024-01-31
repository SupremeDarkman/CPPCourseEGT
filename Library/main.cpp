#include <iostream>
#include "Author.h"
#include "Book.h"
#include "Library.h"


enum Genre
{
	CLASSIC = 1,
	CRIME,
	FANTASY,
};
void menu()
{
	std::cout << "1. CLASSIC" << std::endl;
	std::cout << "2. CRIME" << std::endl;
	std::cout << "3. FANTASY" << std::endl;
}

int main()
{
	Author author("John", "Doe", "GB");
	//author.print();
	menu();
	Genre genre;
	int choice;
	std::cout << "Enter your choice: " << std::endl;
	std::cin >> choice;
	genre = (Genre)choice;

	switch (genre)
	{
	case 1:  std::cout << "Classic";  break;
	case 2:  std::cout << "Crime";  break;
	case 3:  std::cout << "Fantasy";  break;
	default: std::cout << "error"; break;
	}

	//Book b1("Title", author, 2, 2020); // check genre to be string or at least to work
	//Book b2("TItle2", author, 3, 2021);
	//Library library;
	//library.print();
	//library.addBook(b1);
	//library.addBook(b2);
	return 0;
}