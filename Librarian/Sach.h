#pragma once
#include"stdafx.h"
using namespace std;
class Sach
{
private:
	string masach;
	string tensach;
	string tentacgia;
	string namxb;
	string soluong;
	string dongia;
	string tinhtrang;
	string ngonngu;
public:

	Sach(string s="");
	friend ostream &operator << (ostream &os, Sach sach2);

	/////////////////////
	string getMasach();
	string getTensach();
	string getSoluong();
	string getNamxb();
	string getTentacgia();
	string getDongia();
	string getTinhtrang();
	string getNgonngu();
	///////////////////
	void setMasach(string masach);
	void setTensach(string tensach);
	void setNamxb(int namxb);
	void setSoluong(int sl);
	void setTinhtrang(string tinhtrang);
	void setDongia(double dongia);
	void setTentacgia(string tentacgia);
	void setNgonngu(string ngonngu);

};

