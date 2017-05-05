#include "stdafx.h"
#include "NhaXuatBan.h"


NhaXuatBan::NhaXuatBan()
{
	this->manhaxuatban = 111;
	this->tennhaxuatban = "ABC";
}
void NhaXuatBan::input()
{
	cout << "Enter ma nha xuat ban:" << endl;cin >> manhaxuatban;
	cout << "Enter ten nha xuat ban:" << endl;cin >> tennhaxuatban;
}
void NhaXuatBan::output()
{
	cout << manhaxuatban << endl;
	cout<<tennhaxuatban << endl;
}
string NhaXuatBan::getManhaxuatban()
{	return manhaxuatban;
}
string NhaXuatBan::getTenNhaxuatban()
{
	return tennhaxuatban;
}