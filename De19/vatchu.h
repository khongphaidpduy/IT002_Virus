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
	string ID;
	double DeathProb;
	bool Vacxin;
	string ImmuneAbility;
	bool Death;
	vector<string> Symptom;
public:
	Vatchu(string ID, bool Vacxin);
	~Vatchu();
	void InThongTinVatChu();
	vector<string> TrieuChung();
	bool TuVong();
};

#endif