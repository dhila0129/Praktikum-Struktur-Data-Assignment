#include <iostream>
using namespace std;

const float pi = 3.14;

// Fungsi untuk menghitung Luas Lingkaran
float hitungLuasLingkaran(float radius){
    return (pi * radius * radius);
};

// Fungsi untuk menghitung Keliling Lingkaran
float hitungKelilingLingkaran(float diameter){
    return (pi * diameter);
};

int main(){
    int PilihMenu;
    float diameter, radius;

    cout << "Pilihan Menu:\n";
    cout << "1. Hitung Luas Lingkaran" << endl;
    cout << "2. Hitung Keliling Lingkaran" << endl;
    cout << "Masukkan pilihan Anda: ";
    cin >> PilihMenu;

    switch(PilihMenu){
        case 1:
        cout << "Masukkan radius: ";
        cin >> radius;
        cout << "Luas Lingkaran adalah: " << hitungLuasLingkaran(radius) << endl;
        break;

        case 2:
        cout << "Masukkan diameter: ";
        cin >> diameter;
        cout << "Keliling Lingkaran adalah: " << hitungKelilingLingkaran(diameter) << endl;
        break;

        default:
        cout << "Pilihan tidak tersedia" << endl;
    }
    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}