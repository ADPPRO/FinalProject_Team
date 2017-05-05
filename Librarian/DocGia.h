#pragma once
#include"stdafx.h"
using namespace std;
#include"Date.h"
#include"address.h"
class DocGia
{
protected:
	string madocgia, tendocgia, masinhvien, sdt, ngaysinh, diachi;
	Date d;
	
public:

	DocGia(string s="");
	DocGia(DocGia d, string s);

	void setMaDocGia(string madoc) {
		madocgia = madoc;
	}
	void setTenDocGia(string s) {
		tendocgia = s;
	}
	void setMaSV(string s) {
		masinhvien = s;
	}

	void setDiaChi(string s) {
		diachi = s;
	}
	void setSdt(string s) {
		sdt = s;
	}
	void setNgaySinh(string s) {
		ngaysinh = s;
	}

	string getTenDocGia() {
		return tendocgia;
	}
	string getMaDocGia() {
		return madocgia;
	}
	string getMaSV() {
		return masinhvien;
	}
	string getNgaySinh() {
		return ngaysinh;
	}
	string getDiaChi() {
		return diachi;
	}
	string getSdt() {
		return sdt;
	}
};
