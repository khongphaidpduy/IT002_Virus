#include "vatchu.h"
#include "hiv.h" 
#include "ebola.h"
#include "covid19.h"

using namespace std;

int main() {
	srand(time(0));
	int n;
	cin >> n;
	vector <Vatchu*> vatchu;
	for (int i = 0; i < n; i++) {
		vatchu.push_back(new Vatchu("BenhNhan" + to_string(i), 0));
	}

	for (int i = 0; i < n; i++) {
		vatchu[i]->InThongTinVatChu();
	}

	int m;
	m = n;
	cout << "-----------------------------" << endl;
	cout << "Tiem vaccin!";
	vector <Vatchu*> vatchu2;
	for (int i = 0; i < m; i++) {
		vatchu2.push_back(new Vatchu("BN" + to_string(i), 1));
	}
	int soluongtrieuchungnang = 0, soluongvatchutuvong = 0;
	for (int i = 0; i < m; i++) {
		vector <string> trieuchung = vatchu2[i]->TrieuChung();
		for (int j = 0; j < trieuchung.size(); j++) {
			if (trieuchung[j] == "Trieu chung nang") {
				soluongtrieuchungnang++;
				break;
			}
		}
		if (vatchu2[i]->TuVong()) {
			soluongvatchutuvong++;
		}
	}
	cout << "So luong vat chu co trieu chung nang: " << soluongtrieuchungnang << endl;
	cout << "So luong vat chu tu vong: " << soluongvatchutuvong << endl;

	cout << endl;
}
