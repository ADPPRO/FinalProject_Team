#pragma once
#include"stdafx.h"
using namespace std;
class address
{
private:
	string city, quan, phuong, sonha, sdt;
	int to;

public:
	address(string = "");
	string getCity();
	string getQuan();
	string getPhuong();
	int getTo();
	string getSoNha();
	void input();
	void output();
	void  setCity(string city);
	void  setQuan(string quan);
	void  setPhuong(string phuong);
	void  setTo(int to);
	void  setSoNha(string);
	friend istream &operator >> (istream &is, address &a);
	friend ostream &operator<<(ostream &os, address &a);


};

