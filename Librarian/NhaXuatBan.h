#pragma once
#include"stdafx.h"
using namespace std;
class NhaXuatBan
{
protected:	
	string manhaxuatban;
	string tennhaxuatban;
public:
	NhaXuatBan();
	void input();
	void output();
	string getManhaxuatban();
	string getTenNhaxuatban();
	void setManhaxuatban(int manhaxuatban);
	void setTennhaxuatban(string tennhaxuatban);
};

