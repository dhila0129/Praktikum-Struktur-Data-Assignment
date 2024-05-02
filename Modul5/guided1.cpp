#include <iostream>
#include <string>
using namespace std;

struct Buku{
    string judul_buku;
    string pengarang;
    string penerbit;
    int tebal_halaman;
    double harga_buku;
}; 
Buku buku1, buku2; // 'Buku' struct nya, 'buku1' variabel nya


int main() {
buku1.judul_buku = "Sunshine Becomes You";
buku1.pengarang = "Ilana Tan";
buku1.penerbit = "Gramedia";
buku1.tebal_halaman = 326;
buku1.harga_buku = 93500;

// Menampilkan data
cout << "Informasi Buku 1" <<  endl;
cout << "Judul buku: " << buku1.judul_buku << endl;
cout << "Pengarang: " << buku1.pengarang << endl;
cout << "Penerbit: " << buku1.penerbit << endl;
cout << "Tebal halaman: " << buku1.tebal_halaman << endl;
cout << "Harga buku: " << buku1.harga_buku << endl;


buku2.judul_buku = "Summer In Seoul";
buku2.pengarang = "Ilana Tan";
buku2.penerbit = "Gramedia";
buku2.tebal_halaman = 282;
buku2.harga_buku = 87000;

// Menampilkan data
cout << "\nInformasi Buku 2" <<  endl;
cout << "Judul buku: " << buku2.judul_buku << endl;
cout << "Pengarang: " << buku2.pengarang << endl;
cout << "Penerbit: " << buku2.penerbit << endl;
cout << "Tebal halaman: " << buku2.tebal_halaman << endl;
cout << "Harga buku: " << buku2.harga_buku << endl;

return 0;
}