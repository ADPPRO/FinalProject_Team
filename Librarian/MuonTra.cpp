#include "stdafx.h"
#include "MuonTra.h"


//bool MuonTra::checkMaSach(string masach) {
//	int dem;
//	for (int i = 0;i < vListSach.size();i++) {
//		if (masach == vListSach[i].getMasach())
//			dem = i;
//		else		
//		{
//			cout << "ma sach ko co!"<<endl;
//			return false;
//		}
//	}
//	if (vListSach[dem].getSoluong() <= 0) {
//		cout << "Sach da het trong thu vien!!!" << endl;
//		return false;
//	}
//	return true;
//}

void MuonTra::chuyenFileListSachToVector(string diachifile) {
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
				Sach Sach(n);
				vListSach.push_back(n);
			}
		}
		f.close();
}

//void MuonTra::chuyenFileListSachToVector(string diachifile) {
//	fstream f;
//	string n;
//	f.open(diachifile, ios::in);
//	if (f.fail() == true)
//	{
//		cout << "File not exit!!!" << endl;
//	}
//	else
//	{
//		while (f.eof() != true)
//		{
//			getline(f, n);
//			DocGia DocGia(n);
//			vListDocGia.push_back(n);
//		}
//	}
//	f.close();
//}

bool MuonTra::checkMaDocGia(string madocgia) {
	/*int dem;
	for (int i = 0;i < vListDocGia.size();i++) {
		if (madocgia == vListDocGia[i].getMaDocGia())
			dem = i;
		else
		{
			cout << "Can Tao Moi Doc gia truoc khi muon sach! " << endl;
			return false;
		}
	}*/
	
	return true;
}
PhieuMuonTra MuonTra::get(int i)
{
	return vListMuon[i];
}
int MuonTra::size()
{
	return vListMuon.size();
}
bool MuonTra::checkNgay(Date ngaymuon, Date ngaytra) {
	if (ngaytra.getYear() < ngaymuon.getYear()) {
		cout << "Ngay tra khong duoc sau hon ngay muon!" << endl;
		return false;
	}
	else {
		if (ngaytra.getMonth() < ngaymuon.getMonth()) {
			cout << "Ngay tra khong duoc sau hon ngay muon!" << endl;
			return false;
		}
		else {
			if (ngaytra.getDay() < ngaymuon.getDay()) {
				cout << "Ngay tra khong duoc sau hon ngay muon!" << endl;
				return false;
			}
		}
	}
	return true;
}
//void MuonTra::lapPhieuMuon() {
//	cin.ignore();
//	string madocgia,masach, sophieu, ngaymuon, ngaytra;
//
//	cout << "Nhap so phieu: ";getline(cin, sophieu);
//	cout << "Nhap ma doc gia:";getline(cin, madocgia);
//	cout << "Nhap Ma Sach: ";getline(cin, masach);
//	cout << "Nhap ngay muuon: ";getline(cin, ngaymuon);
//	cout << "Nhap ngay tra ";getline(cin, ngaytra);
//
//	if (checkMaDocGia(madocgia) == true && checkMaSach(masach) == true&&checkNgay(ngaymuon,ngaytra)==true) {
//		cout << "Dang ki muon sach thanh cong " << endl;
//		string s= madocgia+ masach+ sophieu+ ngaymuon+ ngaytra;
//		vListMuon.push_back(s);
//	}
//}
void MuonTra::xuatFileListMuonTra(string diachifile) {
	fstream f;
	string s;
	f.open(diachifile, ios::out);
	for (int i = 0;i < vListMuon.size();i++) {
			
		PhieuMuonTra object(vListMuon[i],s);
		f<<s<<endl;
	}
	f.close();
}
bool MuonTra::checkNgayHetHan(Date ngaytra, Date ngayhethan) {
	if (ngaytra.getYear() < ngayhethan.getYear()) {
		return false;
	}
	else {
		if (ngaytra.getMonth() < ngayhethan.getMonth()) {
			return false;
		}
		else {
			if (ngaytra.getDay() < ngayhethan.getDay()) {
				return false;
			}
		}
	}
	return true;
}
void MuonTra::xuatFileMuonSachQuaHan(string ngayhethan, string diachifile) {
	fstream f;
	string s;
	f.open(diachifile, ios::out);
	for (int i = 0;i < vListMuon.size();i++) {
		if (checkNgay(vListMuon[i].getNgayTra(), ngayhethan) == true) {
			PhieuMuonTra object(vListMuon[i], s);
			f << s << endl;
		}
	}
	f.close();
}
void MuonTra::xoaPhieu(int idx) {
	for (int i = idx;i < vListMuon.size()-1;i++) {
		vListMuon[idx] = vListMuon[idx + 1];
	}
	vListMuon.pop_back();
}
void MuonTra::hanhDongTraSach(string nhapmasophieucantra) {
	for (int i = 0;i < vListMuon.size();i++) {
		if (vListMuon[i].getSoPhieu() == nhapmasophieucantra)
			xoaPhieu(i);
	}
}