#ifndef VIRUS_H
#define VIRUS_H

#include <bits/stdc++.h>

using namespace std;

class Virus {
protected:
	string trieuchung;
	double xacsuattuvong;
	double xacsuattrungbinh;
	string khanangmiendich;
	string thongtintrieuchung;
	bool vaccin;
public:
	Virus(string khanangmiendich, bool vaccin);
	void SetMienDich(int i);
	void InThongTin();
	double TinhXacXuatTuVong();
	string TrieuChung();
};

#endif 