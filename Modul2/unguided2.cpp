#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel untuk menyimpan ukuran elemen
    int panjang, lebar, tinggi;

    // Meminta user untuk memasukkan ukuran elemen array tiga dimensi
    cout << "Masukkan panjang array: ";
    cin >> panjang;
    cout << "\nMasukkan lebar array: ";
    cin >> lebar;
    cout << "\nMasukkan tinggi array: ";
    cin >> tinggi;

    // Deklarasi array
    // Membuat array tiga dimensi sesuai dengan ukuran yang dimasukkan pengguna
    int array[panjang][lebar][tinggi];

    // Meminta user untuk memasukkan elemen-elemen (Input Array)
    cout << "Masukkan elemen-elemen array:" << endl;
    for (int i = 0; i < panjang; i++) {
        for (int j = 0; j < lebar; j++) {
            for (int k = 0; k < tinggi; k++) {
                cout << "Array[" << i << "][" << j << "][" << k << "]: ";
                cin >> array[i][j][k];
            }
        }
    }

    // Menampilkan elemen-elemen array yang dimasukkan oleh user (Output Array)
    cout << "\nElemen-elemen array yang dimasukkan:\n";
    for (int i = 0; i < panjang; i++) {
        for (int j = 0; j < lebar; j++) {
            for (int k = 0; k < tinggi; k++) {
                cout << "Array[" << i << "][" << j << "][" << k << "] = " << array[i][j][k] << endl;
            }
        }
    }

    // Menampilkan array
    for (int i = 0; i < panjang; i++) {
        for (int j = 0; j < lebar; j++) {
            for (int k = 0; k < tinggi; k++) {
                cout << array[i][j][k] << " " << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}