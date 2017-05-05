#pragma once
#include"Sach.h"
#include"Date.h"
#include"PhieuMuonTra.h"
class MuonTra

{
private:
	vector<Sach> vListSach;
	vector<PhieuMuonTra> vListMuon;
	//vector<DocGia> vListDocGia;
public:
	void chuyenFileListSachToVector(string diachifile);
	void chuyenFileListDocGiaToVector(string diachifile);
	PhieuMuonTra get(int i);
	int size();
	bool checkNgay(Date ngaymuon,Date ngaytra);
	bool checkNgayHetHan(Date ngaytra, Date ngayhethan);
	//bool checkMaSach(string masach);
	bool checkMaDocGia(string madocgia);
	void lapPhieuMuon();
	void xuatFileMuonSachQuaHan(string ngayhethan,string diachifile);
	void xuatFileListMuonTra(string diachifile);
	void hanhDongTraSach(string nhapmasophieucantra);
	void xoaPhieu(int idx);
};

