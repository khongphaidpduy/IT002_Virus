#ifndef VATCHU_H
#define VATCHU_H 

#include <bits/stdc++.h> 
#include "hiv.h"
#include "ebola.h"
#include "covid19.h"

using namespace std;

class Vatchu {
private:
	Virus* virus[3];
	string maso;
	double xacsuattuvong;
	bool vaccin;
	string khanangmiendich;
	bool tuvong;
	vector<string> trieuchung;
public:
	Vatchu(string maso, bool vaccin);
	~Vatchu();
	void InThongTinVatChu();
	vector<string> TrieuChung();
	bool TuVong();
};

#endif