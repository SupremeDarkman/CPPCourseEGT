#pragma once
#include <string>

class Book
{
public:
	Book(std::string title, std::string author, int pages);

	std::string getTitle();
	std::string getAuthor();
	int getPages();

	void display();
private:
	std::string title;
	std::string author;
	int pages;
};

