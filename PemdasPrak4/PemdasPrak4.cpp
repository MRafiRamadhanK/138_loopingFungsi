#include <iostream>
using namespace std;

int main() {
    int x;
    srand(time(0));

    do {
        cout << "perulangan dengal do..while"<< endl;
        x = rand() % 10;
        cout << "nilai X = " << x << endl;

    } while (x > 4);

    
    char pilihan;

    do {
        string nama;

        cout << "Masukan Nama Anda = ";
        cin >> nama;

        
        cout << "apakah anda ingin mengulangi lagi ? (y/n)";
        cin >> pilihan;

    } while (pilihan == 'y' || pilihan == 'Y');
}