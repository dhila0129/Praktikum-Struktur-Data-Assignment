#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    // Membuat sebuah map yang akan menyimpan nilai bilangan bulat dengan kunci berupa string
    map<string, int> nilai_siswa;

    // Menambahkan beberapa entri ke dalam map
    nilai_siswa["Alice"] = 85;
    nilai_siswa["Bob"] = 90;
    nilai_siswa["Charlie"] = 75;
    nilai_siswa["Diana"] = 95;
    nilai_siswa["Eve"] = 80;

    // Menampilkan nilai siswa
    cout << "=== Nilai Siswa ===" << endl;
    cout << "Nilai Alice: " << nilai_siswa["Alice"] << endl;
    cout << "Nilai Bob: " << nilai_siswa["Bob"] << endl;
    cout << "Nilai Charlie: " << nilai_siswa["Charlie"] << endl;
    cout << "Nilai Diana: " << nilai_siswa["Diana"] << endl;
    cout << "Nilai Eve: " << nilai_siswa["Eve"] << endl;
   

    return 0;
}
