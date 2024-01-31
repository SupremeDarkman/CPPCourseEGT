#include "Library.h"
#include "Book.h"

void Library::addBook(Book books)
{
	this->books.push_back(books);
}

void Library::print()
{
	for (Book book : books)
	{
		book.print();
	}
}

void Library::findbook(string name)
{
	for (Book book : books)
	{
		if (book.getName().find(name) != -1)
		{
			std::cout << "We found the book " << std::endl;
			book.print();
			break;
		}
	}
}
