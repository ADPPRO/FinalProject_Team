#pragma once
#include"stdafx.h"
#include"account.h"

 class vt_account
{
private:vector<account>V;

public:
	int Size();
	void readfile();
	void writefile();
	account get(int i);
	bool check(string user, string pass);
	void Dislay();
	void set(string s,string s2);
	//void writefile();

};

