#include "stdafx.h"
#include "Sach.h"

Sach::Sach(string s)
{
	int index1 = s.find("|");
	//if(s.get_allocator)
	this->masach = (s.substr(0, index1));
	s.erase(0, index1 + 1);
	int index2 = s.find("|");
	this->tensach = (s.substr(0, index2));
	//cout<< (s.substr(0, index2));
	s.erase(0, index2 + 1);
	int index3 = s.find("|");
	this->tentacgia = (s.substr(0, index3));
	s.erase(0, index3 + 1);
	int index4 = s.find("|");
	this->namxb = (s.substr(0, index4));
	s.erase(0, index4 + 1);
	int index5 = s.find("|");
	this->soluong = (s.substr(0, index5));
	s.erase(0, index5 + 1);
	int index6 = s.find("|");
	this->dongia = (s.substr(0, index6));
	s.erase(0, index6 + 1);
	int index7 = s.find("|");
	this->ngonngu = s.substr(0, index7);
	this->tinhtrang = s.substr(index7 + 1);
}

ostream &operator << (ostream &os, Sach sach2)
{
	os << sach2.masach <<"|"<<sach2.tensach << "|" << sach2.tentacgia << "|" << sach2.namxb << "|" << sach2.dongia << "|" << sach2.tinhtrang << "|" << sach2.ngonngu << "|";
	return os;
}


void Sach::setMasach(string masach)
{
	this->masach = masach;
}
void Sach::setTensach(string tensach)
{
	this->tensach = tensach;
}

void Sach::setNamxb(int namxb)
{
	this->namxb = namxb;
}
void Sach::setSoluong(int sl)
{
	this->soluong = sl;
}
void Sach::setTinhtrang(string tinhtrang)
{
	this->tinhtrang = tinhtrang;
}
void Sach::setDongia(double dongia)
{
	this->dongia = dongia;
}
void Sach::setTentacgia(string tentacgia)
{
	this->tentacgia = tentacgia;
}
void Sach::setNgonngu(string ngonngu)
{
	this->ngonngu = ngonngu;
}
string Sach::getTentacgia()
{
	return tentacgia;
}
string Sach::getDongia()
{
	return dongia;
}
string Sach::getTinhtrang()
{
	return tinhtrang;
}
string Sach::getNgonngu()
{
	return ngonngu;
}
string Sach::getMasach()
{
	return masach;
}
string Sach::getTensach()
{
	return tensach;
}
string Sach::getNamxb()
{
	return namxb;
}
string Sach::getSoluong()
{
	return soluong;
}


