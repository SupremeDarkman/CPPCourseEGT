#pragma once
#include <iostream>
using std::ostream;
class Box
{
	friend Box operator+(const Box& box1, const Box& box2);
	friend ostream &operator<<(ostream& output, Box& box1);
public:
	Box();
	Box(int hight, int width, int length);


	void setHight(int hight);
	void setWidth(int width);
	void setLength(int length);

	int getHeight() const;
	int getWidth() const;
	int getLength() const;

private:
	int hight;
	int width;
	int length;
};



