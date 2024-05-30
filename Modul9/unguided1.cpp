#include<iostream>
using namespace std;

long long factorial(int n) {
    // Jika n sama dengan 0, maka faktorialnya adalah 1
    if(n == 0)
        return 1;
    // Jika n tidak sama dengan 0, maka faktorialnya adalah n * faktorial dari n-1
    else
        // Memanggil fungsi factorial dengan parameter n-1
        return n * factorial(n-1);
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