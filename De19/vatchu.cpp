#include "vatchu.h"
#include "util.h"

Vatchu::Vatchu(string maso, bool vaccin) {
	this->xacsuattuvong = 0;
	this->maso = maso;
	this->vaccin = vaccin;
	
	int random = rand() % 3;
	if (random == 0) {
		this->khanangmiendich = "Cao";
	}
	else if (random == 1) {
		this->khanangmiendich = "Trung Binh";
	}
	else {
		this->khanangmiendich = "Thap";
	}
	this->virus[0]= new Covid19(this->khanangmiendich, this->vaccin);
	this->virus[1]= new HIV(this->khanangmiendich, this->vaccin);
	this->virus[2]= new Ebola(this->khanangmiendich, this->vaccin);
	for (int i = 0; i < 3; i++) {
		this->trieuchung.push_back(this->virus[i]->TrieuChung());
	}

	
	for (int i = 0; i < 3; i++){
		double random2 = RandomDouble();
		double xacsuat = this->virus[i]->TinhXacXuatTuVong();
		if (random2 <= xacsuat) {
			this->tuvong = true;
			break;
		}else {
			this->tuvong = false;
		}
	}

	
}

void Vatchu::InThongTinVatChu() {
	cout << "------------Thong tin------------" << endl;
	cout << "Ma so benh nhan: " << this->maso << endl;
	cout << "Kha nang mien dich: " << this->khanangmiendich << endl;
	cout << "------------Trieu chung------------" << endl;
	for (int i = 0; i < 3; i++) {
		this->virus[i]->InThongTin();
	}
	if (this->tuvong) {
		cout << "Tu vong" << endl;
	}
	else {
		cout << "Khong tu vong" << endl;
	}

	cout << "---------------------------------" << endl;

}

vector<string> Vatchu::TrieuChung() {
	return this->trieuchung;
}

bool Vatchu::TuVong() {
	return this->tuvong;
}

Vatchu::~Vatchu() {
	for (int i = 0; i < 3; i++) {
		delete this->virus[i];
	}
}