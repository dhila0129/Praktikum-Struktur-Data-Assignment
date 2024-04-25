#include <iostream>
#include <string>
using namespace std;

int hitungHurufVokal(std::string kalimat) {
    int jumlah = 0;
    for (int i = 0; i < kalimat.length(); i++) {
        if (kalimat[i] == 'a' || kalimat[i] == 'i' || kalimat[i] == 'u' || kalimat[i] == 'e' || kalimat[i] == 'o' ||
            kalimat[i] == 'A' || kalimat[i] == 'I' || kalimat[i] == 'U' || kalimat[i] == 'E' || kalimat[i] == 'O') {
            jumlah++;
        }
    }
    return jumlah;
}

int main() {
    std::string kalimat = "Hari ini adalah hari Jumat";
    std::cout << "Kalimat: " << kalimat << std::endl;
    int jumlahHurufVokal = hitungHurufVokal(kalimat);
    std::cout << "Jumlah huruf vokal pada kalimat tersebut adalah: " << jumlahHurufVokal << std::endl;
    
    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}