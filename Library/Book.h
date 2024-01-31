#pragma once
#include "Author.h"
#include <string>
#include <iostream>
using std::string;

class Book
{
public:
	Book(string name, Author author, unsigned genre, unsigned published);
	void setName(string name);
	void setGenre(unsigned genre);
	void setPublished(unsigned published);

	string getName();
	unsigned getGenre();
	unsigned getPublished();
	void print();

private:
	string name;
	Author author;
	unsigned genre;
	unsigned published;
};

