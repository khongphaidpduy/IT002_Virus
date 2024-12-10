#include "hiv.h"
HIV::HIV(string khanangmiendich, bool Vacxin) : Virus(khanangmiendich,Vacxin) {
	this->AvgProb = 0.9;
	if (this->Symptom == "Trieu chung nang") {
		this->SymptomInfo = "Non mua, tieu chay va xuat huyet ca ngoai lan ben trong";
	}
	else if (this->Symptom == "Trieu chung nhe") {
		this->SymptomInfo = "Sot, dau hong, dau co va dau dau";
	}
	else {
		this->SymptomInfo = "Khong trieu chung";
	}
}
