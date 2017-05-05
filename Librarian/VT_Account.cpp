#include"stdafx.h"
#include "VT_Account.h"
#include"Account.h"

int vt_account::Size()
{
	return V.size();
}

void vt_account::readfile()
{

	fstream f;
	f.open("account_tk.txt", ios::in);
	if (f.fail()) cout << "file is not exits";
	else {
		while (!f.eof()) {
			string s;
			getline(f, s);
			account p(s);
			V.push_back(p);
		}
	}
	f.close();
}
void vt_account::writefile()
{
	fstream f;
	f.open("AccountSelect_tt.txt", ios::out);
	if (f.fail()) cout << "file is not exits";
	else {
		for (int i = 0; i<V.size(); i++)
			f<< V[i];
	}
	f.close();
}
 account  vt_account::get(int i) {
	return V[i];
}

 bool vt_account::check(string user, string pass)
 {
	 for (int i = 0; i < V.size(); i++)
		 if (V[i].getuser() == user&&V[i].getpassword() == pass)
			 return true;
			 return false;
 }

 void vt_account::Dislay()
 {
	 for (int i = 0; i < V.size(); i++)
		 cout << "User: " << V.at(i).getuser()<<"\tPass:"<<V.at(i).getpassword()<<endl;
 }

 void vt_account::set(string s1,string s2)
 {
	 for (int i = 0; i < V.size(); i++)
		 if (V[i].getuser() == s1)
			 V[i].getpassword() =s2;
 }
