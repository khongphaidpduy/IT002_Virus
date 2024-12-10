#include "virus.h"
#include "util.h"
Virus::Virus(string ImmuneAbility, bool Vacxin) {
	this->ImmuneAbility = ImmuneAbility;
	if (ImmuneAbility == "Cao") {
		SetMienDich(1);
	}
	else if (ImmuneAbility == "Trung Binh") {
		SetMienDich(2);
	}
	else {
		SetMienDich(3);
	}
	this->Vacxin = Vacxin;
}

void Virus::SetMienDich(int i) {
	double r1 = RandomDouble();
	double bang[3][4];
	for (int k = 0; k < 3; k++) {
		for (int j = 0; j < 4; j++) {
			if (Vacxin)
				bang[k][j] = bangxacxuat2[k][j];
			else
				bang[k][j] = bangxacxuat[k][j];
		}
	}
	if (r1 <= bang[i - 1][0]) {
		Symptom = "Khong trieu chung";
		DeathProb  = bang[i - 1][3];
	}
	else if (r1 <= bang[i - 1][1]) {
		Symptom = "Trieu chung nhe";
		DeathProb  = bang[i - 1][3];
	}
	else {
		Symptom = "Trieu chung nang";
		DeathProb  = bang[i - 1][3];
	}
	// cout << "xacsuat" << xacxuattuvong << endl;
}

string Virus::TrieuChung() {
	return this->Symptom;
}

void Virus::InThongTin() {
	if (this->Symptom != "Khong trieu chung")
		cout << this->SymptomInfo << endl;
}

double Virus::TinhXacSuatTuVong() {
	return this->DeathProb  * this->AvgProb;
}