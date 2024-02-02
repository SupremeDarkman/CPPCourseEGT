#include <iostream>
#include "Member.h"

int main()
{
	Book* books[10]; // Creating default constructor so we can make the arrays
	Member* members[10];

	Book book1("title1", "author1", "ISBN1");
	Book book2("title2", "author2", "ISBN2");

	Book* book1Ptr = &book1; // pointers point towards an address
	Book* book2Ptr = &book2;

	books[0] = book1Ptr; // adding the pointer to the array of books
	books[1] = book2Ptr;
	
	Member member1("Name1", 23, "56798");
	Member member2("Name2", 22, "24448");

	Member* member1Ptr = &member1;
	Member* member2Ptr = &member2;

	members[0] = member1Ptr; // adding the pointer to the array of members
	members[1] = member2Ptr;

	member1.borrowBook(book1Ptr);
	member2.borrowBook(book2Ptr);
	
	member1.display();
	member2.display();

	book1.display();
	book2.display();

	return 0;
}