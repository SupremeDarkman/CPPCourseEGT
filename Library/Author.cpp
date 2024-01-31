#include "Author.h"

Author::Author(string fName, string lName, string nationality)
{
    setFirstName(fName);
    setLastName(lName);
    setNationality(nationality);

}

void Author::setFirstName(string firstName)
{
    this->firstName = firstName;
}

void Author::setLastName(string lastName)
{
    this->lastName = lastName;
}

void Author::setNationality(string nationality)
{
    this->nationality = nationality;
}

string Author::getFirstName()
{
    return this->firstName;
}

string Author::getLastName()
{
    return this->lastName;
}

string Author::getNationality()
{
    return this->nationality;
}

void Author::print()
{
    std::cout << this->firstName << ' ' << this->lastName << ' '<< this->nationality;
}
