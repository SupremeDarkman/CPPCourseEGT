#include "Book.h"
#include <iostream>
Book::Book(std::string title, std::string author, int pages)
    :title(title), author(author), pages(pages) {}

std::string Book::getTitle()
{
    return this->title;
}

std::string Book::getAuthor()
{
    return this->author;
}

int Book::getPages()
{
    return this->pages;
}

void Book::display()
{
    std::cout << "Title: " << getTitle() << " Author: " << getAuthor() << " Pages: " << getPages() << std::endl;
}
