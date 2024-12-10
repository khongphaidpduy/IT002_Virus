#include "virus.h"
#include <iostream>
#include <string>
using namespace std;

double bangxacxuat[3][4] = {
	{0.5, 0.35, 0.15, 0.5},
	{0.1, 0.4, 0.5, 0.7},
	{0.05, 0.15, 0.8, 1}
};

double bangxacxuat2[3][4] = {
	{0.7, 0.25, 0.05, 0.4},
	{0.2, 0.5, 0.3, 0.6},
	{0.1, 0.4, 0.5, 0.8}
};

double RandomDouble() {
	return (rand() % 101) / 100.0;
}

Virus::Virus(string immuneAbility, bool vacxin) 
    : ImmuneAbility(immuneAbility), Vacxin(vacxin) {
    if (immuneAbility == "Cao") {
        SetMienDich(1);
    } else if (immuneAbility == "Trung Binh") {
        SetMienDich(2);
    } else {
        SetMienDich(3);
    }
}

void Virus::SetMienDich(int level) {
    double r1 = RandomDouble();
    double probabilityTable[3][4];

    // Chọn bảng xác suất dựa trên trạng thái vacxin
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            probabilityTable[i][j] = Vacxin ? bangxacxuat2[i][j] : bangxacxuat[i][j];
        }
    }

    // Xác định triệu chứng và xác suất tử vong dựa trên bảng xác suất
    if (r1 <= probabilityTable[level - 1][0]) {
        Symptom = "Khong trieu chung";
        DeathProb = probabilityTable[level - 1][3];
    } else if (r1 <= probabilityTable[level - 1][1]) {
        Symptom = "Trieu chung nhe";
        DeathProb = probabilityTable[level - 1][3];
    } else {
        Symptom = "Trieu chung nang";
        DeathProb = probabilityTable[level - 1][3];
    }
}

string Virus::TrieuChung() {
    return Symptom;
}

void Virus::InThongTin() {
    if (Symptom != "Khong trieu chung") {
        cout << SymptomInfo << endl;
    }
}

double Virus::TinhXacSuatTuVong() {
    return DeathProb * AvgProb;
}
