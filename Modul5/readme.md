# <h1 align="center">Laporan Praktikum Modul Struct dan Implementasi</h1>
<p align="center">Habibah Ratna Fadhila Islami Hana</p>

## Dasar Teori

Struct adalah tipe data bentukan yang berisi kumpulan variabel-variabel yang bernaung dalam satu nama yang sama dan memiliki kaitan satu sama lain. Berbeda dengan array yang hanya berupa kumpulan variabel yang bertipe data sama, struct bisa memiliki variabel-variabel yang bertipe data sama atau berbeda, bahkan bisa menyimpan variabel yang bertipe data array atau struct itu sendiri [1]. Misalnya data mengenai nama, nopeg, jabatan, gaji seorang pegawai. Keempat data tersebut mempunyai tipe data yang berbeda tetapi masih berhubungan yaitu data pegawai [2]. Variabel-variabel yang menjadi anggota struct disebut dengan elemen atau anggota struct.  Dengan demikian suatu struktur dimungkinkan dapat berisi dengan elemen-elemen data bertipe int, float, char dan lainnya.

Dalam penerapannya, struct digunakan untuk membuat node yang berfungsi menyimpan informasi-informasi berupa karakter, berat node, pointer node dan konstruktor [3]. Bentuk umum dari pendeklarasian struct adalah:
```C++
struct nama_struct
{
    tipe_data_1 variabel_1;
    tipe_data_2 variabel_2;
    tipe_data_n variabel_n;
};
```
Bisa juga menggunakan pendeklarasian seperti di bawah ini [4]:
```C++
typedev struct
{
    tipe_data_1 variabel_1;
    tipe_data_2 variabel_2;
    tipe_data_n variabel_n;
} nama_struct;
```

## Guided 

### 1. Buatlah sebuah struktur dengan nama buku yang berisi judul_buku, pengarang, penerbit, tebal_halaman, harga_buku. Isi dengan nilai kemudian tampilkan.

```C++
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
```
Kode program di atas adalah contoh penggunaan struktur (struct) dalam bahasa pemrograman C++. Struktur `Buku` didefinisikan dengan beberapa atribut seperti judul buku, pengarang, penerbit, tebal halaman, dan harga buku. Setelah mendefinisikan struktur `Buku`, dua variabel `buku1` dan `buku2` dari tipe data `Buku` dibuat.

Selanjutnya, program utama (`main()`) dijalankan. Pada bagian ini, atribut-atribut dari setiap variabel `buku1` dan `buku2` diisi dengan nilai yang sesuai untuk masing-masing buku. Data-data ini kemudian ditampilkan menggunakan fungsi `cout`.

Pertama, data untuk `buku1` diisi dengan judul buku "Sunshine Becomes You", pengarang "Ilana Tan", penerbit "Gramedia", tebal halaman 326, dan harga buku 93500. Kemudian, informasi ini ditampilkan dengan menggunakan fungsi`cout`.

Kemudian, data untuk `buku2` diisi dengan judul buku "Summer In Seoul", pengarang "Ilana Tan", penerbit "Gramedia", tebal halaman 282, dan harga buku 87000. Data ini juga ditampilkan dengan menggunakan fungsi `cout`.

### 2. Buatlah sebuah struktur dengan skema seperti dibawah, isi dengan nilai kemudian jalankan.
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/408a2222-33cc-4bd0-a037-e45cee186cab)

```C++
#include <iostream>
using namespace std;

struct Hewan{
    string nama_hewan;
    string jenis_kelamin;
    string kembangbiak;
    string pernapasan;
    string tempat_hidup;
    bool karnivora;
}; Hewan info_hewan;

struct Hewan_drt{
    Hewan info_hewan;
    int jumlah_kaki;
    bool apakah_menyusui;
    string suara;
}; Hewan_drt hewan1;

struct Hewan_lt{
    Hewan info_hewan;
    string bentuk_sirip;
    string pertahanan_diri;
}; Hewan_lt hewan2;

int main() {
    // Hewan 1 (Daratan)
    hewan1.info_hewan.nama_hewan = "Kucing";
    hewan1.info_hewan.jenis_kelamin = "Jantan";
    hewan1.info_hewan.kembangbiak = "Melahirkan";
    hewan1.info_hewan.pernapasan = "Paru-paru";
    hewan1.info_hewan.tempat_hidup = "Daratan";
    hewan1.info_hewan.karnivora = true;
    hewan1.jumlah_kaki = 4;
    hewan1.apakah_menyusui = true;
    hewan1.suara = "Meow";

    // Hewan 2 (Laut)
    hewan2.info_hewan.nama_hewan = "Penyu";
    hewan2.info_hewan.jenis_kelamin = "Betina";
    hewan2.info_hewan.kembangbiak = "Bertelur";
    hewan2.info_hewan.pernapasan = "Paru-paru dan insang";
    hewan2.info_hewan.tempat_hidup = "Lautan";
    hewan2.info_hewan.karnivora = false;
    hewan2.bentuk_sirip = "Sirip dan ekor";
    hewan2.pertahanan_diri = "Cangkang yang kuat";

    // Menampilkan data
    cout << "\tHewan Darat" << endl;
    cout << "Nama Hewan: " << hewan1.info_hewan.nama_hewan << endl;
    cout << "Jenis Kelamin: " << hewan1.info_hewan.jenis_kelamin << endl;
    cout << "Kembangbiak: " << hewan1.info_hewan.kembangbiak << endl;
    cout << "Pernapasan: " << hewan1.info_hewan.pernapasan << endl;
    cout << "Tempat Hidup: " << hewan1.info_hewan.tempat_hidup << endl;
    cout << "Apakah karnivora? " << hewan1.info_hewan.karnivora << endl;
    cout << "Jumlah Kaki: " << hewan1.jumlah_kaki << endl;
    cout << "Apakah menyusui? " << hewan1.apakah_menyusui << endl;
    cout << "Suara: " << hewan1.suara << endl;

    cout << "\tHewan Laut" << endl;
    cout << "Nama Hewan: " << hewan2.info_hewan.nama_hewan << endl;
    cout << "Jenis Kelamin: " << hewan2.info_hewan.jenis_kelamin << endl;
    cout << "Kembangbiak: " << hewan2.info_hewan.kembangbiak << endl;
    cout << "Pernapasan: " << hewan2.info_hewan.pernapasan << endl;
    cout << "Tempat Hidup: " << hewan2.info_hewan.tempat_hidup << endl;
    cout << "Apakah karnivora? " << hewan2.info_hewan.karnivora << endl;
    cout << "Bentuk Sirip: " << hewan2.bentuk_sirip << endl;
    cout << "Pertahanan Diri: " << hewan2.pertahanan_diri << endl;

    return 0;
}
```
Program tersebut merupakan contoh penggunaan struktur (struct) dalam C++. Ada tiga struct yang didefinisikan, yaitu `Hewan`, `Hewan_drt` (Hewan Darat), dan `Hewan_lt` (Hewan Laut).

Struct `Hewan` memiliki beberapa atribut yang mewakili informasi umum tentang hewan, seperti nama hewan, jenis kelamin, cara berkembang biak, jenis pernapasan, tempat hidup, dan apakah hewan tersebut karnivora atau tidak.

Kemudian, struct `Hewan_drt` dan `Hewan_lt` masing-masing memiliki atribut tambahan yang spesifik untuk hewan darat dan hewan laut. Untuk struct `Hewan_drt`, terdapat atribut berupa jumlah kaki, apakah hewan tersebut menyusui atau tidak, dan suara. Sedangkan untuk struct `Hewan_lt` berupa bentuk sirip dan pertahanan diri dari hewan tersebut.

Dalam fungsi `main()`, dua variabel dari struct tersebut, yaitu `hewan1` dan `hewan2`, dibuat untuk mewakili dua hewan yang berbeda.

Data untuk masing-masing hewan diisi dengan menggunakan sintaks `.info_hewan` yang merupakan bagian dari struct yang menyimpan informasi umum tentang hewan, dan atribut-atribut tambahan yang ada pada `Hewan_drt` dan `Hewan_lt` sesuai dengan jenis hewan.

Setelah mengisi data untuk kedua hewan, program akan menampilkan informasi tersebut dengan menggunakan fungsi `cout`.

## Unguided 

### 1. Modifikasi tugas guided pertama, sehingga setiap item yang terdapat pada struct buku berupa array yang berukuran 5, isi dengan data kemudian tampilkan.

```C++
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
```
#### Output:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/c18b612d-53d9-43af-adec-4bcc6ecaaaf9)
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/8acea937-fdb3-449c-95d4-b485fb859ec7)

- **Pendeklarasian Struct `Buku`**
   ```C++
   struct Buku{
       string judul_buku[5];
       string pengarang[5];
       string penerbit[5];
       int tebal_halaman[5];
       double harga_buku[5];
   }; 
   ```
   Pertama, program mendeklarasikan sebuah struct bernama `Buku`, yang memiliki lima array untuk menyimpan informasi tentang buku-buku, yaitu judul, pengarang, penerbit, jumlah halaman, dan harga. Setiap array memiliki panjang lima, menandakan bahwa struktur ini dirancang untuk menyimpan informasi tentang lima buku.

- **Inisialisasi Variabel `favorit`**:
   ```C++
   Buku favorit;
   ```
   Program mendeklarasikan variabel `favorit` yang merupakan instance dari struct `Buku`. Variabel ini akan digunakan untuk menyimpan data tentang buku-buku favorit yang berisi `judul_buku`, `pengarang`, `penerbit`, `tebal_halaman`, dan `harga_buku`. 

- **Pengisian Data Buku Favorit**:
   Setiap elemen dalam variabel `favorit` diisi dengan data untuk lima buku favorit menggunakan indeks array.

- **Menampilkan Data Buku Favorit**:
   ```C++
   for(int i = 0; i < 5; i++){
       // Menampilkan informasi buku favorit ke-i
       // ...
   }
   ```
   Program menggunakan perulangan `for` untuk mencetak informasi tentang setiap buku favorit. Dalam setiap iterasi, informasi seperti judul buku, pengarang, penerbit, jumlah halaman, dan harga buku dicetak.

- **Pernyataan Return dan Akhir Program**:
   ```C++
   return 0;
   ```
   Pernyataan ini mengakhiri fungsi `main()` dan secara implisit menandakan bahwa program telah berakhir dengan sukses (nilai kembali 0 menandakan tidak ada kesalahan).

#### Full code Screenshot:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/c59acd3b-60eb-48c5-95f5-4d4933f0b2be)
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/91f12811-797e-434b-b7fc-d055a6b6715e)
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/3b778ae6-b31e-404f-b62a-97664ee12064)

### 2. Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided I, berjenis Array. Bagaimana cara mengisi data dan menampilkannya ?

- Jika deklarasi variabel struct yang dibuat pada tugas guided I berjenis Array, maka setiap anggota dari struct akan menjadi elemen dari array dan terbentuk kumpulan dari struct tersebut di mana setiap elemen dalam array akan menampung data yang terkait dengan satu buku. Setiap elemen dalam array tersebut akan memiliki properti yang sama seperti yang didefinisikan dalam struct. 

- Data bisa diisi ke dalam array dengan mengakses setiap elemen array menggunakan indeksnya dan mengisi properti-properti struct di dalamnya. Untuk menampilkan data, dapat menggunakan perulangan dan mengakses properti-properti dari setiap elemen array. Dengan menggunakan array dari struct, kita dapat mengelola koleksi data yang terkait dengan objek-objek yang sama jenisnya dengan lebih terstruktur dan mudah diakses.

## Kesimpulan

Struct adalah pengelompokkan dari variabel-variabel yang berada dalam satu nama yang sama. Suatu struct dapat terdiri dari kumpulan variabel-variabel yang berbeda tipenya dalam satu nama tetapi berkaitan. Hal inilah yang membedakan struct dengan array. Struct memungkinkan untuk membuat tipe data baru yang terdiri dari sejumlah variabel yang terkait. Struct membantu menyusun data terkait dalam satu tempat, membuat kode lebih mudah dimengerti dan dipelihara. Hal ini juga memberikan fleksibilitas dalam merepresentasikan objek fisik atau konseptual dalam pemrograman. Dengan struct, pemrosesan data menjadi lebih mudah dan efisien, serta memungkinkan penggunaan memori yang lebih optimal.

## Referensi

[1]Triase, “STRUKTUR DATA,” Oct. 2020. Available: http://repository.uinsu.ac.id/9717/2/Diktat%20Struktur%20Data.pdf. [Accessed: May 02, 2024]

[2]U. Ta, “Pemograman C++ Bab 14 Struct,” www.academia.edu, pp. 116–121, Available: https://www.academia.edu/35362131/Pemograman_C_Bab_14_Struct_pdf. [Accessed: May 02, 2024]

[3]D. NURBAITI RAHMI, “IMPLEMENTASI STRUKTUR DATA ROPE PADA STUDI KASUS PERMASALAHAN SPOJ ALPHABETIC ROPE,” Jan. 2018. Available: https://repository.its.ac.id/50680/1/5114100030-Undergraduate_Theses.pdf. [Accessed: May 02, 2024]

[4]E. Budi Setiawan, “BAB IX - STRUCT.” Available: https://repository.unikom.ac.id/34750/1/BAB%20IX%20-%20STRUCT.pdf. [Accessed: May 02, 2024]