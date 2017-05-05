#pragma once
#include"stdafx.h"
#include "Sach.h"

class QuanLi_Sach
{
private:
	
	vector<Sach> VT;
public:
	void readFile(string path);
	void writeFile(string path2);
	Sach get(int i);
	int size();
	void Search(System::Windows::Forms::DataGridView ^G, System::String ^path);

};

