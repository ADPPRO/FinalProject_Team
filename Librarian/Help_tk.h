#pragma once
#include"stdafx.h"
ref class Help_tk
{
public:
	Help_tk();
	std::string toStandardString(System::String^ string);
	std::string findIDInFile(std::string path, std::string id);
	System::String ^ convertstringToString(std::string s);
	std::string convertStringTostring(System::String ^ S);
	void writeToFile(std::string path, System::String ^ S);
	std::vector<std::string> readFileVT(std::string path);
	void addToDataGripView1(System::Windows::Forms::DataGridView ^ dtgv, std::vector<std::string> v);

	void WriteDataGridViewToFile(System::Windows::Forms::DataGridView ^ dtgv, std::string pathFile);

	void LocDataGridView(System::Windows::Forms::DataGridView ^ dtgv, System::Windows::Forms::ComboBox ^ cb, int chiso);

	

};

