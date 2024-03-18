#include<iostream>
using namespace std;


int nTelor, nMie, nAir;
int hTelor = 2000, hMie = 2800, hAir = 3000;
string nama;

void input() {
	cout << "masukan nama = ";
	cin >> nama;
	cout << "masukan jumlah telor =";
	cin >> nTelor;
	cout << "masukan jumlah mie = ";
	cin >> nMie;
	cout << "masukan jumlah air = ";
	cin >> nAir;


}

int itungharga() {
	return (nTelor * hTelor) + (nMie * hTelor) + (nAir * hAir);

}

void  display() {
	cout << "nama = " << nama << endl;
	cout << "jumlah telor = " << nTelor << endl;
	cout << "jumlah mie = " << nMie << endl;
	cout << "jumlah air = " << nAir << endl;
	cout << "total harga Rp." << itungharga() << endl;

}

int main()
{
	char pilihan;

	do {
		input();
		display();

		cout << "Apakah anda ingin Mengulangi ? (y/n) ";
		cin >> pilihan;

		system("cls");


	} while (pilihan == 'y' || pilihan == 'Y');

	{

	}

	
}