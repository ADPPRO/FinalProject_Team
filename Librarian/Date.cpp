#include "stdafx.h"
using namespace std;
#include "Date.h"
Date::Date(string d) {
	int index1 = d.find("/");
	this->day = stoi(d.substr(0, index1));
	d.erase(0, index1 + 1);

	int index2 = d.find("/");
	this->month = stoi(d.substr(0, index2));
	d.erase(0, index2 + 1);

	int index3 = d.find("/");
	this->year = stoi(d.substr(0, index3));
	d.erase(0, index3 + 1);
	
};
//Date::Date(int day, int month, int year)
//{
//	this->day = day;
//	this->month = month;
//	this->year = year;
//}
int Date::getDay() { return day; }
void Date::setDay(int day) { this->day = day; }
int Date::getMonth() { return month; }
void Date::setMonth(int day) { this->month = month; }
int Date::getYear() { return year; }
void Date::setYear(int day) { this->year = year; }
void Date::Input() {
	do {
		cout << "Enter Day :"; cin >> day;
		if (day > 31 || day<1) cout << "your must input value\n";
	} while (day > 31 || day < 1);
	do {
		cout << "Enter Month :"; cin >> month;
		if (month < 1 || month>12) cout << "Your must input value\n";
	} while (month < 1 || month>12);
	do {
		cout << "Enter year :"; cin >> year;
		if (year < 1900 || year>2020) cout << "error because year >1900\n and year<2020";
	} while (year < 1900 || year>2020);

}
void Date::Output() {
	//cout << "dd/mm/yyyy:\n";
	cout << ((day < 10) ? "0" : "") << day << ((month < 10) ? "/0" : "") << month << "/" << year << endl;
}
istream & operator >> (istream & is, Date & l)
{
	l.Input();
	return is;
}

ostream & operator<<(ostream & os, Date & l)
{
	l.Output();
	return os;
}
