#pragma once
class Date
{
protected: 
	int day, month, year;
public:
	Date(string d);
	Date() {
		day = 0;
		month = 0;
		year = 0;
	}
	int getDay();
	void setDay(int day);
	int getMonth();
	void setMonth(int month);
	int  getYear();
	void setYear(int year);
	void Input();
	void Output();
	friend istream &operator >> (istream &is, Date &l);
	friend ostream &operator << (ostream &os, Date &l);
};

