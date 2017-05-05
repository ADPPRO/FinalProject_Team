#pragma once
#include"stdafx.h"
using namespace std;
class PhieuMuonTra
{
private:
	string madocgia, masach, sophieu, ngaymuon, ngaytra;
public:
	PhieuMuonTra(string s);
	PhieuMuonTra(PhieuMuonTra p,string &s); 

	string getSoPhieu();
	string getMaDocGia();
	string getMaSach();
	string getNgayMuon();
	string getNgayTra();
	

};

