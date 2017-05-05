#include "stdafx.h"
#include "QuanLiDocGia.h"

void QuanLiDocGia::delIndex(int idx) {
	for (int i = idx; i < vListDocGia.size() - 1; i++) {
		vListDocGia[i] = vListDocGia[i + 1];
	}
	vListDocGia.resize(vListDocGia.size() - 1);
}
void QuanLiDocGia::removeDocGia(string madocgia) {
	for (int i = 0; i < vListDocGia.size(); i++) {
		if (madocgia == vListDocGia[i].getMaDocGia()) {
			delIndex(i);
		}
	}
}
void QuanLiDocGia::editDocGia(string madocgia, string mamoi, string tenmoi, string ngaysinhmoi, string diachimoi, string masinhvienmoi, string sodienthoaimoi) {
	int temp;
	for (int i = 0; i < vListDocGia.size(); i++) {
		if (madocgia == vListDocGia[i].getMaDocGia()) temp = i;
	}
	vListDocGia[temp].setMaDocGia(mamoi);
	vListDocGia[temp].setTenDocGia(tenmoi);
	vListDocGia[temp].setNgaySinh(ngaysinhmoi);
	vListDocGia[temp].setDiaChi(diachimoi);
	vListDocGia[temp].setMaSV(masinhvienmoi);
	vListDocGia[temp].setSdt(sodienthoaimoi);
}
void QuanLiDocGia::creatDocGia(string ma, string ten, string ngaysinh, string diachi, string masv, string sdt) {
	string s = ma + ten + ngaysinh + diachi + masv + sdt;
	DocGia d(s);
	vListDocGia.push_back(d);
}
void QuanLiDocGia::fileToVector(string diachifile) {
	fstream f;
	string n;
	f.open(diachifile, ios::in);
	if (f.fail() == true)
	{
		cout << "File not exit!!!" << endl;
	}
	else
	{
		while (f.eof() != true)
		{
			getline(f, n);
			DocGia d(n);
			vListDocGia.push_back(d);
		}
	}
	f.close();
}
void QuanLiDocGia::vectorToFile(string diachifile) {
	fstream f;
	string s;
	f.open(diachifile, ios::out);
	for (int i = 0; i < vListDocGia.size(); i++) {

		DocGia d(vListDocGia[i], s);
		f << s << endl;
	}
	f.close();

}