#include <iostream>
using std::ostream;
using std::istream;
class Date
{
	friend istream& operator>>(istream&, Date&);
	friend ostream& operator<<(ostream&, const Date&);
public:
	Date(int m = 1, int d = 1, int y = 1900); // default constructor
	 
	void setDate(int, int, int); // set month, day, year

	Date& operator--(); //prefix decrement operator
	Date operator--(int);// postfix decrement operator

	Date& operator++(); // prefix increment operator
	Date operator++(int); // postfix increment operator
	const Date& operator+=(int); // add days, modify object

	bool leapYear(int) const; // is date in a leap year?
	bool endOfMonth(int) const; // is date at the end of month?
	bool startOfMonth(int) const; // is date at the start of month?
private:
	int month;
	int day;
	int year;

	static const int days[]; // array of days per month
	void helpIncrement(); // utility function for incrementing date

	void helpDecrement(); // utility function for decrementing date
}; // end class Date