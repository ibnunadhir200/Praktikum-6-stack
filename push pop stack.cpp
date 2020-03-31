#include <iostream>
#define MAX 10
using namespace std;

struct tumpukan {
	int top,  data[MAX];
} Tumpukan;

void awal() {
	Tumpukan.top = -1;
}

int kosong() {
	return Tumpukan.top == -1;
	return 1;
	return 0;
}

int penuh() {
	return Tumpukan.top == MAX - 1;
	return 1;
	return 0;
}

void push() {
	if (kosong()==1) {
		cout << "\nTumpukan penuh" << endl;
	} 
	  else {
				Tumpukan.top++;
				cout << "\nMasukkan data = ";
				cin >> Tumpukan.data[Tumpukan.top];
				cout << "Data " << Tumpukan.data[Tumpukan.top] << " masuk ke stack"<<endl;
			}
}

void pop() {
	if (kosong()==0) 
	{
		cout << "\nData kosong\n" << endl;
	} 
	  else {
				cout << "\nData " << Tumpukan.data[Tumpukan.top] << " sudah terambil"<< endl;
				Tumpukan.top--;
			}
}

void tampil() {
	if (kosong()==0) 
	{
		cout << "Tumpukan kosong";
	} else {
		cout << "\nTumpukan : ";
		for (int i = Tumpukan.top; i >= 0; i--)
			cout << Tumpukan.data[i] << ((i == 0) ? "" : ",");
	}
}

int main() {
	int pilihan, data;
	awal();
	do {
		tampil();
		cout << "\n1. Input (Push)\n"
			 << "2. Hapus (Pop)\n"
			 << "3. Keluar\n"
			 << "Masukkan Pilihan: ";
		cin >> pilihan;
		switch (pilihan) {
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		default:
			cout << "Pilihan tidak tersedia" << endl;
			break;
		} 
	} 
	\
		while (pilihan != 3);
	return 0;
}
