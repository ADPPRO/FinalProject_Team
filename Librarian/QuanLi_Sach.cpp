#include "stdafx.h"
#include"Help_tk.h"
#include "QuanLi_Sach.h"
#include "Sach.h"

void QuanLi_Sach::readFile(string path)
{
	fstream fs;
	fs.open(path, ios::in);
	if (fs.fail())
	{
		cout << "File not exit" << endl;
	}
	else
	{
		while (!fs.eof())
		{
			string n;
			getline(fs,n);
			Sach ps(n);
			VT.push_back(ps);

		}
		fs.close();
	}
}
void QuanLi_Sach::writeFile(string path2)
{
	fstream fs;
	fs.open(path2, ios::out);
	if (fs.fail()) cout << "file is not exits";
	else {
		for (int i = 0; i<VT.size(); i++)
			fs << VT[i];
	}
	fs.close();
}

Sach QuanLi_Sach::get(int i)
{
	return VT[i];
}

int QuanLi_Sach::size()
{
	return VT.size();
}

void QuanLi_Sach::Search(System::Windows::Forms::DataGridView ^ G, System::String ^ path)
{
	Help_tk help;
	for(int i=0;i<VT.size();i++)
		if (VT[i].getMasach().compare(help.toStandardString(path))==false) {
			System::String ^a = help.convertstringToString(VT[i].getMasach());
			System::String ^b = help.convertstringToString(VT[i].getTensach());
			System::String ^c = help.convertstringToString(VT[i].getSoluong());
			System::String ^d = help.convertstringToString(VT[i].getTinhtrang());
			System::String ^e = help.convertstringToString(VT[i].getNgonngu());
			G->Rows->Add(a, b, c, d, e);
		}
		
}
