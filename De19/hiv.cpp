#include "hiv.h"
HIV::HIV(string khanangmiendich, bool vaccin) : Virus(khanangmiendich,vaccin) {
	this->xacsuattrungbinh = 0.9;
	if (this->trieuchung == "Trieu chung nang") {
		this->thongtintrieuchung = "Non mua, tieu chay va xuat huyet ca ngoai lan ben trong";
	}
	else if (this->trieuchung == "Trieu chung nhe") {
		this->thongtintrieuchung = "Sot, dau hong, dau co va dau dau";
	}
	else {
		this->thongtintrieuchung = "Khong trieu chung";
	}
}
