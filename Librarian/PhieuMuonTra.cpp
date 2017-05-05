//#include "stdafx.h"
#include "PhieuMuonTra.h"
using namespace std;

PhieuMuonTra::PhieuMuonTra(string s) {
	int index1 = s.find("|");
	this->sophieu = stoi(s.substr(0, index1));
	s.erase(0, index1 + 1);

	int index2 = s.find("|");
	this->madocgia = stoi(s.substr(0, index2));
	s.erase(0, index2 + 1);

	int index3 = s.find("|");
	this->masach = stoi(s.substr(0, index2));
	s.erase(0, index3 + 1);

	int index4 = s.find("|");
	this->ngaymuon = stoi(s.substr(0, index2));
	s.erase(0, index4 + 1);

	int index5 = s.find("|");
	this->ngaytra = stoi(s.substr(0, index2));
	s.erase(0, index5+ 1);

}

PhieuMuonTra::PhieuMuonTra(PhieuMuonTra vao, string &ra) {
	ra = sophieu +" "+madocgia +" "+ masach+" " + sophieu+" " + ngaymuon+" " + ngaytra;
}
string PhieuMuonTra::getSoPhieu() {
	return sophieu;
}
string PhieuMuonTra::getMaDocGia() {
	return madocgia;
}
string PhieuMuonTra::getMaSach() {
	return masach;
}
string PhieuMuonTra::getNgayMuon() {
	return ngaymuon;
}
string PhieuMuonTra::getNgayTra() {
	return ngaytra;
}

