#include "stdafx.h"
#include "address.h"
using namespace std;
address::address(string b)
{
	city = b;
	


}

string address::getCity()
{
	return city;
}

string address::getQuan()
{
	return quan;
}

string address::getPhuong()
{
	return phuong;
}

int address::getTo()
{
	return to;
}

string address::getSoNha()
{
	return sonha;
}

void address::input()
{
	cin.ignore();
	cout << "enter tp:" << endl; getline(cin, city);
	cout << "enter quan:" << endl; getline(cin, quan);
	cout << "enter phuong:" << endl; getline(cin, phuong);
	cout << "enter to" << endl; cin >> to;
	cout << "enter so nha:" << endl; getline(cin, sonha);
}

void address::output()
{
	cout << "thanh pho:" << getCity();
	cout << "quan:" << getQuan();
	cout << "phuong:" << getPhuong();
	cout << "to" << getTo();
	cout << "so nha" << getSoNha();
}

void address::setCity(string city)
{
	this->city = city;
}

void address::setQuan(string quan)
{
	this->quan = quan;
}

void address::setPhuong(string phuong)
{
	this->phuong = phuong;
}

void address::setTo(int to)
{
	this->to = to;
}

void address::setSoNha(string)
{
	this->sonha = sonha;
}

istream & operator >> (istream & is, address & a)
{
	a.input();
	return is;
}
ostream &operator<<(ostream &os, address &a)
{
	a.output();
	return os;
}