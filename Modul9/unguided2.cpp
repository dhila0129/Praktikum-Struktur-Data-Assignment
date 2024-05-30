#include <iostream>
using namespace std;

// Deklarasi fungsi terlebih dahulu
long long helperA(int n, int result);
long long helperB(int n, int result);

// Fungsi helperA yang memanggil helperB untuk rekursi tidak langsung
long long helperA(int n, int result) {
    if (n == 0)
        return result;
    else
        return helperB(n - 1, n * result);
}

// Fungsi helperB yang memanggil helperA untuk rekursi tidak langsung
long long helperB(int n, int result) {
    if (n == 0)
        return result;
    else
        return helperA(n, result);
}

// Fungsi utama factorial yang memulai rekursi
long long factorial(int n) {
    return helperA(n, 1);
}

int main() {
    int num;
    // Meminta pengguna memasukkan bilangan
    cout << "Masukkan sebuah bilangan bulat positif: ";
    cin >> num;
    // Jika bilangan negatif, maka menampilkan pesan error
    if(num < 0)
        cout << "Error! Faktorial dari sebuah bilangan negatif tidak ada.";
    // Jika bilangan positif, maka menghitung faktorial dan menampilkan hasilnya
    else
        cout << "Faktorial dari " << num << " adalah " << factorial(num);
    
    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}