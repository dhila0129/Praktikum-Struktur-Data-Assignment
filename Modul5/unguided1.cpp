#include <iostream>
#include <string>
using namespace std;

struct Buku{
    string judul_buku[5];
    string pengarang[5];
    string penerbit[5];
    int tebal_halaman[5];
    double harga_buku[5];
}; 
Buku favorit;


int main() {
    // data buku favorit ke-1
    favorit.judul_buku[0] = "My Lecturer My Husband";
    favorit.pengarang[0] = "Gitlicious";
    favorit.penerbit[0] = "Buku Kita";
    favorit.tebal_halaman[0] = 266;
    favorit.harga_buku[0] = 59500;

    // data buku favorit ke-2
    favorit.judul_buku[1] = "If Only";
    favorit.pengarang[1] = "Innayah Putri";
    favorit.penerbit[1] = "Bentang Pustaka";
    favorit.tebal_halaman[1] = 357;
    favorit.harga_buku[1] = 79000;

    // data buku favorit ke-3
    favorit.judul_buku[2] = "Einstein";
    favorit.pengarang[2] = "Yourkidlee";
    favorit.penerbit[2] = "COCONUT";
    favorit.tebal_halaman[2] = 456;
    favorit.harga_buku[2] = 99000;

    // data buku favorit ke-4
    favorit.judul_buku[3] = "Lavina";
    favorit.pengarang[3] = "Ainun Nufus";
    favorit.penerbit[3] = "Bentang Belia";
    favorit.tebal_halaman[3] = 344;
    favorit.harga_buku[3] = 89000;

    // data buku favorit ke-5
    favorit.judul_buku[4] = "Bukan Dylan";
    favorit.pengarang[4] = "Naya A.";
    favorit.penerbit[4] = "Romancious";
    favorit.tebal_halaman[4] = 319;
    favorit.harga_buku[4] = 93600;

    // Menampilkan data buku favorit menggunakan perulangan
    cout << "\tInformasi Buku Favorit Saya" <<  endl;
    for(int i = 0; i < 5; i++){
        cout << "\nBuku favorit ke-" << i+1 << endl;
        cout << "Judul buku: " << favorit.judul_buku[i] << endl;
        cout << "Pengarang: " << favorit.pengarang[i] << endl;
        cout << "Penerbit: " << favorit.penerbit[i] << endl;
        cout << "Tebal halaman: " << favorit.tebal_halaman[i] << endl;
        cout << "Harga buku: " << favorit.harga_buku[i] << endl;
        cout << "\n";
    }

    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}