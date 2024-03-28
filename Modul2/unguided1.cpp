#include <iostream>
using namespace std;

int main() {
    int array[10];
    cout << "Masukkan 10 angka: ";
    
    // Meminta user memasukkan 10 angka
    for (int i = 0; i < 10; ++i) {
        cin >> array[i];
    }
    
    // Menampilkan data array
    cout << "Data Array: ";
    for (int i = 0; i < 10; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
    
    // Menampilkan nomor genap
    cout << "Nomor Genap: ";
    for (int i = 0; i < 10; ++i) {
        if (array[i] % 2 == 0) {
            cout << array[i];
            if (i != 9) {
                cout << ", ";
            }
        }
    }
    cout << endl;
    
    // Menampilkan nomor ganjil
    cout << "Nomor Ganjil: ";
    for (int i = 0; i < 10; ++i) {
        if (array[i] % 2 != 0) {
            cout << array[i];
            if (i != 9) {
                cout << ", ";
            }
        }
    }
    cout << endl;

    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}