#include <iostream> // Mengimport library input-output
#include <string> // Mengimport library string
#include <algorithm> // Mengimport library algorithm, untuk memakai fungsi reverse() yang berguna untuk membalikkan string.
#include <cctype> // Mengimport library cctype untuk fungsi tolower

using namespace std;

bool adalahPalindrom(const string& kalimat) { // Fungsi untuk memeriksa apakah kalimat adalah palindrom
    string hurufKecil; // String untuk menyimpan huruf kecil dari kalimat
    for (char c : kalimat) { // Looping setiap karakter dalam kalimat
        if (!isspace(c)) { // Jika karakter bukan spasi
            hurufKecil += tolower(c); // Konversi karakter ke huruf kecil dan tambahkan ke string hurufKecil
        }
    }

    string dibalik = hurufKecil;
    reverse(dibalik.begin(), dibalik.end());

    return hurufKecil == dibalik;
}

int main() { // Fungsi utama program
    string kalimat; // String untuk menyimpan kalimat input
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    if (adalahPalindrom(kalimat)) { // Periksa apakah kalimat adalah palindrom
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }

    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}