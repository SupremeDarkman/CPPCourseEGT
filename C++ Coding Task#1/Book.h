#pragma once
#include <iostream>
#include <string>
class Book
{
public:
	Book();
	Book(std::string title, std::string author, std::string ISBN);
	void display() const;
private:
	std::string title;
	std::string author;
	std::string ISBN;
};

