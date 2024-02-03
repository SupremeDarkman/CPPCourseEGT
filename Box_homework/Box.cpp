#include "Box.h"

Box::Box()
{
    setHight(0);
    setWidth(0);
    setLength(0);
}

Box::Box(int hight, int width, int length)
{
    setHight(hight);
    setWidth(width);
    setLength(length);

}

void Box::setHight(int hight)
{
    this->hight = hight;
}

void Box::setWidth(int width)
{
    this->width = width;
}

void Box::setLength(int length)
{
    this->length = length;
}

int Box::getHeight() const
{
    return this->hight;
}

int Box::getWidth() const
{
    return this->width;
}

int Box::getLength() const
{
    return this->length;
}

Box operator+(const Box& box1, const Box& box2)
{
    int box3Hight = 0;
    int box3Width = 0;
    int box3Length = 0;

    box3Hight = box1.getHeight() + box2.getHeight();
    box3Width = box1.getWidth() + box2.getWidth();
    box3Length = box1.getLength() + box2.getLength();

    Box temp(box3Hight, box3Width, box3Length);


    return temp;
}

ostream &operator<<(ostream& output, Box& box1)
{
    output << "Length: " << box1.getHeight() << std::endl
        << "Width: " << box1.getWidth() << std::endl 
        << "Length: " << box1.getLength() << std::endl;

    return output;
}
