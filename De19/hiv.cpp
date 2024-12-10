#include "hiv.h"
HIV::HIV(string khanangmiendich, bool Vacxin) : Virus(khanangmiendich,Vacxin) {
	this->AvgProb = 0.9;
	if (this->Symptom == "Trieu chung nang") {
		this->SymptomInfo = "Sung hach keo dai, lo loet, viem phoi, tieu chay nang";
	}
	else if (this->Symptom == "Trieu chung nhe") {
		this->SymptomInfo = "Cam, sot";
	}
	else {
		this->SymptomInfo = "Khong trieu chung";
	}
}
