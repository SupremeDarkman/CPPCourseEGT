#pragma once
#include "Book.h"

#include<vector>
#include <iostream>
using std::vector;

class Library
{
public:
	void addBook(Book books);
	void print();
	void findbook(string name);
private:
	vector<Book> books;
};

