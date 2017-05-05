#pragma once
#include"DocGia.h"
class QuanLiDocGia
{
	vector <DocGia> vListDocGia;
public:
	void delIndex(int index);
	void removeDocGia(string madocgia);
	void editDocGia(string madocgia, string mamoi, string tenmoi, string ngaysinhmoi, string diachimoi, string masinhvienmoi, string sodienthoaimoi);
	void creatDocGia(string ma, string ten, string ngaysinh, string diachi, string masv, string sdt);

	void fileToVector(string diachifile);
	void vectorToFile(string diachifile);
};

