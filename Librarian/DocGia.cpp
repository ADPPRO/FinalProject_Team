#include "stdafx.h"
#include "DocGia.h"


DocGia::DocGia(string s) {
	int index1 = s.find("|");
	this->madocgia = s.substr(0, index1);
	s.erase(0, index1 + 1);

	int index2 = s.find("|");
	this->tendocgia = (s.substr(0, index2));
	s.erase(0, index2 + 1);

	int index3 = s.find("|");
	this->ngaysinh = stod(s.substr(0, index3));
	s.erase(0, index3 + 1);

	int index4 = s.find("|");
	this->diachi = s.substr(0, index4);
	s.erase(0, index4 + 1);

	int index5 = s.find("|");
	this->masinhvien = (s.substr(0, index5));
	s.erase(0, index5 + 1);

	int index6 = s.find("|");
	this->sdt = s.substr(0, index6);
	s.erase(0, index6 + 1);
}
DocGia::DocGia(DocGia d, string s) {
	s = d.madocgia + " " + d.tendocgia + " " + d.ngaysinh + " " + d.diachi + " " + d.masinhvien + " " + d.sdt;
}