#include "Help_tk.h"




Help_tk::Help_tk()
{
}
std::string Help_tk::toStandardString(System::String ^ string)
{
		using System::Runtime::InteropServices::Marshal;
		System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
		char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
		std::string returnString(charPointer, string->Length);
		Marshal::FreeHGlobal(pointer);
		return returnString;
	}

std::string Help_tk::findIDInFile(std::string path, std::string id)
{
	std::string line = "";
	int i = id.length();
	std::fstream f;
	f.open(path, std::ios::in);
	while (!f.eof())
	{
		std::getline(f, line);
		if (line.substr(0, i) == id) {
			return line;;
		}
	}
	f.close();
	return "NULL|NULL|";
}
System::String^ Help_tk::convertstringToString(std::string s)
{

	System::String^S = gcnew System::String(s.c_str());
	return S;
}
std::string Help_tk::convertStringTostring(System::String ^ S)
{
	std::string s = "";
	int l = S->Length;
	char temp[100];

	sprintf(temp, "%s", S);
	for (int i = 0; i < strlen(temp); i++)
	{
		if (temp[i] != ' ')
			s += temp[i];
	}
	return s;
}

void Help_tk::writeToFile(std::string path, System::String^ S)
{
	std::vector<std::string> v;
	v = readFileVT(path);
	v.push_back(convertStringTostring(S));
	if (path != "ID.txt" && path != "Pass.txt")
		sort(v.begin() + 1, v.end());

	std::fstream f;
	f.open(path, std::ios::out);

	for (int i = 0; i < v.size(); i++)
	{
		f << v.at(i) << std::endl;
	}
	f.close();
}
std::vector<std::string> Help_tk::readFileVT(std::string path)
{
	std::fstream f;
	f.open(path);
	std::vector < std::string > v;
	std::string line = "";
	while (!f.eof())
	{

		std::getline(f, line);
		if (line != "")
			v.push_back(line);
	}
	f.close();
	return v;
}

array<array<System::String^>^>^vectorToArray(std::vector<std::string> v)
{
	array<array<System::String^>^>^ arr = gcnew array<array<System::String^>^>(v.size());
	std::string c = "";
	int countTemp = 0, count = 0, n;

	c = v.at(0);
	for (int i = 0; i < c.length(); i++)
	{
		if (c.at(i) == '|')  n++;
	}

	c = "";
	for (int i = 0; i < v.size(); i++)
	{
		array<System::String^>^ temp = gcnew array<System::String^>(n);
		for (int j = 0; j< v.at(i).length(); j++)
		{
			if (v.at(i).at(j) != '|')
				c += v.at(i).at(j);
			else
			{
				System::String^t = gcnew System::String(c.c_str());
				temp[countTemp++] = t;
				c = "";
			}
		}
		countTemp = 0;
		arr[count++] = temp;
	}
	return arr;
}
void addColumns1(System::Windows::Forms::DataGridView^dtgv, array<array<System::String^>^ > ^v)
{
	array<System::String^> ^tempV;
	tempV = v[0];
	for (int i = 0; i < tempV->Length; i++)
		dtgv->Columns->Add(tempV[i], tempV[i]);
}

void addRows1(System::Windows::Forms::DataGridView ^ dtgv, array<array<System::String^> ^>^ v, int row)
{
	//std::string line = "ss";
	//std::string a[10];

	for (int i = 0; i < v->Length; i++)
			dtgv->Rows->Add(v[i]);
}
void Help_tk::addToDataGripView1(System::Windows::Forms::DataGridView ^ dtgv, std::vector<std::string>v)
{

	array<array<System::String^>^>^ arr = vectorToArray(v);
	
	addRows1(dtgv, arr, arr->Length);
}


void Help_tk::WriteDataGridViewToFile(System::Windows::Forms::DataGridView ^  dtgv, std::string pathFile)
{
	std::fstream f;
	f.open(pathFile, std::ios::out);
	std::string Line = "";

	for (int i = 0; i < dtgv->Rows->Count; ++i)
	{
		if (i == dtgv->NewRowIndex)
		{
			break;
		}
		Line = "";
		for (int j = 0; j < dtgv->Columns->Count; ++j)
		{
			System::String^ s;
			s = dtgv[j, i]->Value->ToString();
			Line += convertStringTostring(s) + "|";
		}
		f << Line << std::endl;
	}
	f.close();
}
void Help_tk::LocDataGridView(System::Windows::Forms::DataGridView ^  dtgv, System::Windows::Forms::ComboBox ^cb, int chiso)
{
	for (int i = dtgv->RowCount - 2; i >= 0; i--)
	{
		System::String^ a;// = dtgv[chiso, i]->Value.ToString()->ToLower()->Trim();
		a = dtgv[chiso, i]->Value->ToString()->ToLower()->Trim();
		if (cb->Text->ToLower()->Trim() != a)
		{
			dtgv->Rows->RemoveAt(i);
		}
	}
}




