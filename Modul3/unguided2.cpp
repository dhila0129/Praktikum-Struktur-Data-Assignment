#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk melakukan pengurutan nama menggunakan algoritma Bubble Sort
void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            // Bandingkan dua nama berturut-turut dan tukar jika diperlukan
            if (arr[j] > arr[j + 1]) {
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Fungsi untuk mencetak array nama
void printArray(string arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << endl;
    }
}

int main() {
    // Array nama-nama warga
    string names[] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};
    int n = sizeof(names) / sizeof(names[0]);

    cout << "Nama-nama warga sebelum diurutkan: " << endl;
    printArray(names, n);

    // Panggil fungsi bubbleSort untuk mengurutkan nama-nama
    bubbleSort(names, n);

    cout << "\nNama-nama warga setelah diurutkan secara alfabetis: " << endl;
    printArray(names, n);

    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}
