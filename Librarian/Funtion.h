#pragma once
#include"stdafx.h"
template<class T>
class Funtion;
template <class T>

class Funtion
{
public:
	vector<T> l;
public:
	void insert(string);
	bool edit(int, string);
	bool del(int);

	string tolower(string);
	bool isDuplicated(string);

	void readDB(char *filename);
	void saveDB(char *filename);

	int getIndex(string);

	float toFloat(string s) {
		return atof(s.c_str());
	}
	int toInt(string s) {
		return atoi(s.c_str());
	}
};
