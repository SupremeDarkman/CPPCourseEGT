#include "Book.h"

Book::Book()
{
	this->title = "";
	this->author = "";
	this->ISBN = "";
}

Book::Book(std::string title, std::string author, std::string ISBN)
{
	this->title = title;
	this->author = author;
	this->ISBN = ISBN;
}

void Book::display() const
{
	std::cout << "Title: " << this->title << std::endl
		<< "Author: " << this->author << std::endl
		<< "ISBN: " << this->ISBN << std::endl;
	std::cout << std::endl;

}
