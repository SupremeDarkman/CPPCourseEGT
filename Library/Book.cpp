#include "Book.h"
#include "Author.h"

Book::Book(string name, Author a, unsigned genre, unsigned published)
	: author(a)
{
	setName(name);
	setGenre(genre);
	setPublished(published);
}

void Book::setName(string name)
{
	this->name = name;
}

void Book::setGenre(unsigned genre)
{
	this->genre = genre;
}

void Book::setPublished(unsigned published)
{
	this->published = published;
}

string Book::getName()
{
	return this->name;
}

unsigned Book::getGenre()
{
	return this->genre;
}

unsigned Book::getPublished()
{
	return this->published;
}

void Book::print()
{
	std::cout << this->name << ' ' << this->genre << ' ' << this->published;
	author.print();

}
