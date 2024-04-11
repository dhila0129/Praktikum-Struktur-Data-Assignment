#include <iostream>
using namespace std;

// Fungsi untuk melakukan pengurutan menggunakan algoritma Selection Sort
void selectionSort(double arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int maxIndex = i;

        // Cari indeks elemen terbesar dalam sisa array
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }

        // Tukar elemen terbesar dengan elemen pertama yang belum diurutkan
        double temp = arr[maxIndex];
        arr[maxIndex] = arr[i];
        arr[i] = temp;
    }
}

// Fungsi untuk mencetak array
void printArray(double arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // IPS mahasiswa
    double ips[] = {3.8, 2.9, 3.3, 4.0, 2.4};
    int n = sizeof(ips) / sizeof(ips[0]);

    cout << "IPS mahasiswa sebelum diurutkan: ";
    printArray(ips, n);

    // Panggil fungsi selectionSort untuk mengurutkan IPS
    selectionSort(ips, n);

    cout << "IPS mahasiswa setelah diurutkan (dari besar ke kecil): ";
    printArray(ips, n);

    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}
