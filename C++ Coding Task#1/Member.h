#pragma once
#include "Book.h"
#include <string>

class Member
{
public:
	Member();
	Member(std::string name, int age, std::string memberID);

	void display() const;
	void borrowBook(Book* book);

private:
	std::string name;
	int age;
	std::string memberID;
};

