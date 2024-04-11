#include <iostream>
using namespace std;

int main() {
    // Deklarasi tipe data variabel
    int maks, min, a, lokasi_max, lokasi_min, jumlah = 0, rata;
    // Input ukuran array
    cout << "Masukkan ukuran array: ";
    cin >> a;

    // Validasi ukuran array harus lebih besar dari 0
    if (a <= 0) {
        cout << "Ukuran array harus lebih besar dari 0." << endl;
        return 1; // Return 1 untuk indikasi error
    }

    // Deklarasi ukuran array
    int array[a];

    // Input elemen array
    cout << "Masukkan " << a << " angka\n";

    // Fungsi perulangan untuk menjumlahkan nilai array
    for (int i = 0; i < a; i++) {
        cout << "Array ke-" << i << ": ";
        cin >> array[i];
        jumlah += array[i];

        // Inisialisasi nilai maks dan min dengan elemen pertama
        if (i == 0) {
            maks = min = array[i];
            lokasi_max = lokasi_min = i;
        } else {
            // Mencari nilai maksimum array
            if (array[i] > maks) {
                maks = array[i];
                lokasi_max = i;
            }
            // Mencari nilai minimum array
            if (array[i] < min) {
                min = array[i];
                lokasi_min = i;
            }
        }
    }

    // Menampilkan menu
    cout << "Menu:\n";
    cout << "1. Maksimum\n";
    cout << "2. Minimum\n";
    cout << "3. Rata-rata\n";
    cout << "4. Keluar\n";

    // Pilihan operasi
    cout << "Pilih operasi: ";
    int pilihan;
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Nilai maksimum adalah " << maks << " berada di Array ke-" << lokasi_max << endl;
            break;
        case 2:
            cout << "Nilai minimum adalah " << min << " berada di Array ke-" << lokasi_min << endl;
            break;
        case 3:
            // Menghitung rata-rata
            rata = jumlah / a;
            cout << "Nilai rata-ratanya adalah " << rata << endl;
            break;
        case 4:
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
    }
    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}