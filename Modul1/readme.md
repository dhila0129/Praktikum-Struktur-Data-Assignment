# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Habibah Ratna Fadhila Islami Hana</p>

## Dasar Teori

### Tipe Data

Tipe data adalah kelompok data berdasarkan jenis-jenis tertentu[1]. Tipe data dalam C++ adalah klasifikasi variabel yang menentukan bentuk dan jenis data yang dapat disimpan dalam memori serta operasi yang dapat dilakukan pada variabel tersebut. Dalam C++, tipe data dibagi menjadi 3 kelompok, yaitu tipe data primitif, tipe data turunan, dan tipe data abstrak[2].

### 1. Tipe Data Primitif
Tipe data primitif di bahasa pemrograman C++ adalah tipe data yang sudah terdefinisi secara bawaan dalam bahasa pemrograman tersebut. Tipe data primitif biasanya digunakan untuk menyimpan nilai yang sederhana dan tidak kompleks seperti bilangan bulat, bilangan pecahan, karakter, dan nilai boolean.
- Bilangan bulat (integer): Digunakan untuk menyimpan angka bulat, seperti int, long, dan short.
- Bilangan pecahan (floating point): Digunakan untuk menyimpan angka desimal, seperti float dan double.
- Karakter (char): Digunakan untuk menyimpan karakter tunggal, seperti huruf atau simbol.
- Boolean: Hanya memiliki dua nilai, yaitu true atau false.

### 2. Tipe Data Abstrak
Tipe data abstrak adalah model matematika yang disertai dengan operasi terhadap model tersebut[3]. Tipe data abstrak adalah konsep yang lebih kompleks daripada tipe data primitif. Tipe data ini merepresentasikan kelompok tipe data dan dapat diimplementasikan menggunakan struktur data seperti linked list, stack, dan queue. Dalam tipe data ini mempelajari dua jenis data yaitu yang pertama ada fungsi class dan struktur data struct. Terdapat perbedaan pada akses default antara keduanya yaitu struct bersifat public dan class bersifat privat.

### 3. Tipe Data Koleksi
Tipe data koleksi adalah tipe data yang digunakan untuk menyimpan kumpulan nilai atau objek. Dalam C++, terdapat beberapa tipe data koleksi yang berbeda yang dapat digunakan tergantung pada kebutuhan dan karakteristik data yang akan disimpan. Berikut adalah beberapa tipe data koleksi yang umum digunakan di C++:
- Array: Kumpulan elemen data dengan tipe yang sama, diakses menggunakan indeks numerik, ukuran tetap.
- Vector: Kumpulan elemen data dengan ukuran dinamis, memungkinkan penambahan dan penghapusan elemen.
- List: Struktur data berbasis linked list, memungkinkan penambahan dan penghapusan elemen dari awal, tengah, atau akhir.
- Map: Koleksi pasangan kunci-nilai yang diurutkan berdasarkan kunci, setiap kunci harus unik.
- Set: Kumpulan nilai unik yang diurutkan, setiap elemen harus unik.
- Queue: Struktur data FIFO (First-In-First-Out), elemen baru ditambahkan di belakang dan dihapus dari depan.
- Stack: Struktur data LIFO (Last-In-First-Out), elemen baru ditambahkan di atas dan dihapus dari atas.

## Guided 

### 1. Tipe Data Primitif

```C++
#include <iostream>
using namespace std;
// Main Program
int main()
{
    char op;
    float num1, num2;
    // It allows user to enter operator i.e. +, -, *, /
    cout <<"Masukkan Operator: ";
    cin >> op;
    // It allows user to enter the operands
    cout <<"\nMasukkan Bilangan Ke-1 dan Ke-2: ";
    cin >> num1 >> num2;

    // Switch statement begins
    switch(op)
    {
         //If user enter +
        case '+':
            cout << num1 + num2;
            break;
        //If user enter -
        case '-':
            cout << num1 - num2;
            break;
        //If user enter *
        case '*':
            cout << num1 * num2;
            break;
        //If user enter /
        case '/':
            cout << num1 / num2;
            break;
        //If the operator is other that +, -, * or /,
        //Error message will display
        default:
            cout << "Error! Operator Is Not Correct";
    }
return 0;
}
```
Program di atas merupakan sebuah program kalkulator sederhana untuk 2 bilangan yang menggunakan operasi aritmatika dasar seperti penambahan, pengurangan, perkalian, dan pembagian. Pada saat program ini berjalan, user akan diminta untuk memasukkan operator yang diinginkan, lalu menginputkan angka ke 1 dan angka ke 2. Setelahnya, program akan menjalankan inputan sesuai operator yang dipilih. Jika saat melakukan inputan, user tidak mengisi dengan sesuai, program akan menampilkan error.

### 2. Tipe Data Abstrak

```C++
// Tipe Data Abstrak

#include <iostream>
#include <stdio.h>
using namespace std;
// Main Program

//Struct
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

int main()
{
//Menggunakan struct
struct Mahasiswa mhs1, mhs2;

//Mengisi nilai ke dalam struct
mhs1.name = "Yanti";
mhs1.address = "Jatimulyo";
mhs1.age = 11;
mhs2.name = "Shila";
mhs2.address = "Yogya";
mhs2.age = 10;

//Mencetak isi struct
cout <<"Mahasiswa 1\n";
cout <<"Name: " <<mhs1.name <<endl;
cout <<"Alamat: " <<mhs1.address <<endl;
cout <<"Umur: " <<mhs1.age <<endl;
cout <<"\nMahasiswa 2\n";
cout <<"Name: " <<mhs2.name <<endl;
cout <<"Alamat: " <<mhs2.address <<endl;
cout <<"Umur: " <<mhs2.age <<endl;

return 0;

}
```
Program di atas adalah contoh program C++ yang menggunakan tipe data abstrak. Program ini memungkinkan kita menggabungkan beberapa variabel dengan tipe data yang berbeda menjadi satu kesatuan. Dalam program ini, tipe data abstrak digunakan untuk menyimpan informasi mengenai seorang mahasiswa yang mencakup nama (tipe data character), alamat (tipe data character) dan umur (tipe data integer). Selain itu dalam program ini kita membuat dua variabel yaitu variabel mhs1 dan variabel mhs2 dengan tipe Mahasiswa. Kita dapat mengisi nilai ke dalam variabel mhs1 dan mhs2 dengan menggunakan operator ".", contohnya mhs.name = "Yanti" dan dapat ditampilkan dengan fungsi cout.

### 3. Tipe Data Koleksi

```C++
#include <iostream>
using namespace std;

int main()
{
    //Deklarasi dan inisialisasi array
    int nilai[5];
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78;
    nilai[4] = 90;
    //Mencetak array
    cout << "Isi array pertama :" << nilai[0] << endl;
    cout << "Isi array kedua :" << nilai[1] << endl;
    cout << "Isi array ketiga :" << nilai[2] << endl;
    cout << "Isi array keempat :" << nilai[3] << endl;
    cout << "Isi array kelima :" << nilai[4] << endl;
    return 0;
}
```
Program di atas adalah contoh program C++ yang menggunakan tipe data koleksi. Dalam program ini, digunakan tipe data koleksi yang berupa array untuk menyimpan beberapa nilai integer. Selain itu di dalam program ini, dideklarasikan array nilai[5], dimana "nilai" adalah nama array tersebut dan [5] adalah ukuran panjang elemen dari array. Kemudian, kita dapat mengisikan data ke dalam variabel nilai, seperti nilai[0] atau elemen pertama dalam array ini yang diisi dengan angka 23, lalu elemen ke dua diisi dengan angka 50, dst. Setelah selesai mengisikan nilai, kita dapat menampilkan nilai pada array tersebut dengan menggunakan fungsi cout. 

## Unguided 

### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!

```C++
#include <iostream>
using namespace std;

const float pi = 3.14;

// Fungsi untuk menghitung Luas Lingkaran
float hitungLuasLingkaran(float radius){
    return (pi * radius * radius);
};

// Fungsi untuk menghitung Keliling Lingkaran
float hitungKelilingLingkaran(float diameter){
    return (pi * diameter);
};

int main(){
    int PilihMenu;
    float diameter, radius;

    cout << "Pilihan Menu:\n";
    cout << "1. Hitung Luas Lingkaran" << endl;
    cout << "2. Hitung Keliling Lingkaran" << endl;
    cout << "Masukkan pilihan Anda: ";
    cin >> PilihMenu;

    switch(PilihMenu){
        case 1:
        cout << "Masukkan radius: ";
        cin >> radius;
        cout << "Luas Lingkaran adalah: " << hitungLuasLingkaran(radius) << endl;
        break;

        case 2:
        cout << "Masukkan diameter: ";
        cin >> diameter;
        cout << "Keliling Lingkaran adalah: " << hitungKelilingLingkaran(diameter) << endl;
        break;

        default:
        cout << "Pilihan tidak tersedia" << endl;
    }

    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;

    return 0;
}
```
#### Output:
![Screenshot 2024-03-21 224553](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/2f6566d7-5d2e-4ce8-af72-70a651d6d9a1)

Program di atas merupakan program sederhana untuk menghitung luas dan keliling lingkaran berdasarkan input dari user. Program ini mendeklarasikan konstanta pi dengan nilai 3.14. Konstanta ini digunakan untuk menghitung luas dan keliling lingkaran. Dalam program ini juga terdapat beberapa fungsi, yang pertama adalah fungsi 'hitungLuasLingkaran' yang menerima satu parameter, yaitu radius (jari-jari lingkaran) dan berguna untuk mengembalikan nilai luas lingkaran, dihitung dengan rumus 'pi * radius * radius'. Kemudian tterdapat fungsi 'hitungKelilingLingkaran' yang juga menerima satu parameter, yaitu diameter (diameter lingkaran) dan berguna untuk mengembalikan nilai keliling lingkaran, dihitung dengan rumus 'pi * diameter'. Lalu ada fungsi 'main'  yang mendeklarasikan variabel PilihMenu untuk menentukan apakah ingin menghitung luas lingkaran atau keliling lingkaran.

#### Full code Screenshot:
![Screenshot 2024-03-21 224835](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/5369fd63-2cd3-440f-ac53-2e4a91fe1167)

![Screenshot 2024-03-21 225000](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/aa42833b-5e70-4f87-a6d1-f45c74cb9c62)


### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya

```C++
#include <iostream>
#include <string>
using namespace std;

class Drachin_Paling_Romantis1{
public:
    string judul;
    int tahun_rilis;
    int jumlah_episode;
};

struct Drachin_Paling_Romantis2{
public:
    string judul;
    int tahun_rilis;
    int jumlah_episode;
};

int main(){
  //Merepresentasikan drama 1 dan drama 2
    Drachin_Paling_Romantis1 drama1;
    Drachin_Paling_Romantis2 drama2;

    //Mengisi nilai ke struct drama 1
    drama1.judul = "Hidden Love";
    drama1.tahun_rilis = 2023;
    drama1.jumlah_episode = 25;

    //Mencetak isi struct drama 1
    cout << "=== Drama China Paling Romantis 1 ==="
         << "\nJudul Drama: " << drama1.judul
         << "\nTahun Rilis: " << drama1.tahun_rilis
         << "\nJumlah Episode: " << drama1.jumlah_episode << endl;

//Mengisi nilai ke struct drama 2
    drama2.judul = "Fireworks of My Heart";
    drama2.tahun_rilis = 2023;
    drama2.jumlah_episode = 44;

//Mencetak isi struct drama 2
cout << "=== Drama China Paling Romantis 2 ==="
     << "\nJudul Drama: " << drama2.judul
     << "\nTahun Rilis: " << drama2.tahun_rilis
     << "\nJumlah Episode: " << drama2.jumlah_episode << endl;
         
    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}
```

#### Output:
![Screenshot 2024-03-21 230759](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/c72544fc-c950-4ee2-ba05-ad2ef8b673d1)

Program di atas adalah contoh program sederhana yang menggunakan struktur data class dan struct untuk merepresentasikan informasi tentang dua drama China yang berbeda. Program ini mendefinisikan dua struktur data, Drachin_Paling_Romantis1 sebagai kelas dan Drachin_Paling_Romantis2 sebagai struktur. Setiap struktur data memiliki tiga atribut yaitu, judul, tahun_rilis, dan jumlah_episode, yang merepresentasikan informasi tentang drama China. Program ini kemudian membuat objek dari masing-masing struktur data, drama1 dan drama2, dan mengisi nilai atribut mereka. Setelah itu, program akan mencetak informasi tentang kedua drama, termasuk judul, tahun rilis, dan jumlah episode.

#### Penjelasan:
Class dan struct adalah dua konsep penting dalam bahasa pemrograman C++ yang memungkinkan kita untuk mengorganisasi dan mengelompokkan data serta perilaku terkait. Class adalah fitur Orientasi Objek (OOP) pada C++. Dengan class, kita dapat mendefinisikan tipe data baru yang memiliki variabel anggota dan fungsi anggota, menggabungkan data dan perilaku terkait dalam satu entitas, dan menerapkan konsep pewarisan (inheritance) dan polimorfisme. Sedangkan, struct adalah konstruksi serupa dengan class, tetapi dengan beberapa perbedaan yaitu, struct mirip dengan class, tetapi defaultnya semua anggotanya bersifat public, struct biasanya digunakan untuk mengelompokkan data tanpa perilaku terkait, dan struct tidak mendukung inheritance dan polimorfisme.

#### Full code Screenshot:
![Screenshot 2024-03-21 231538](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/82d70ce8-e917-435f-bfce-768b63bbe215)

![Screenshot 2024-03-21 231619](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/4aa87d32-7636-4d33-9e00-d4167ad2996d)


### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map.

```C++
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
   
    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}
```

#### Output:
![Screenshot 2024-03-21 231937](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/1e69d76b-da49-4530-9fbf-428b07c40ae5)

Program di atas merupakan contoh dari fungsi 'map' pada C++ yang digunakan untuk menyimpan nilai-nilai siswa dengan kunci berupa nama siswa (string). Dalam program ini, dideklarasikan sebuah map bernama 'nilai_siswa'. Map ini memiliki kunci bertipe string dan nilai bertipe int, yang akan digunakan untuk menyimpan nilai siswa. Beberapa entri ditambahkan ke dalam map dengan menggunakan operator []. Misalnya, nilai_siswa["Alice"] = 85 yang artinya menambahkan nilai 85 untuk siswa bernama Alice. Kemudian, program ini akan mencetak nilai masing-masing siswa menggunakan operator [] dari map 'nilai_siswa'.

#### Penjelasan:
- Array adalah struktur data yang digunakan untuk menyimpan kumpulan elemen data dengan tipe yang sama. Elemen-elemen dalam array disusun secara berurutan dan diindeks menggunakan angka integer. Ukuran array biasanya tetap dan harus ditentukan saat deklarasi. Akses ke elemen dalam array dilakukan dengan menggunakan indeks, yang merupakan posisi relatif elemen dalam array. Array tidak secara langsung mendukung kunci yang bersifat tidak berurutan atau bukan angka integer.

- Map adalah struktur data yang digunakan untuk menyimpan pasangan kunci-nilai. Setiap kunci dalam map harus unik. Kunci dan nilai dalam map tidak harus memiliki tipe data yang sama. Map disusun berdasarkan kunci secara internal, yang membuat akses ke elemen berdasarkan kunci lebih cepat daripada pencarian linier pada array. Ukuran map dapat berubah secara dinamis saat elemen ditambahkan atau dihapus. Map memungkinkan penggunaan kunci yang bersifat tidak berurutan, seperti string, sebagai indeks untuk mengakses nilai terkaitnya. 

- Dengan demikian, perbedaan utama antara array dan map adalah, array cocok untuk penyimpanan data berurutan dengan akses menggunakan indeks integer, sedangkan map lebih cocok digunakan saat kita perlu menyimpan dan mengakses data dengan kunci yang dapat berupa tipe data apa pun, dan tidak harus berurutan.

#### Full code screenshot:
![Screenshot 2024-03-21 234814](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/1da152c3-2f09-45c5-b3ba-439e573d6d6f)

## Kesimpulan
Pada praktikum kali ini, kita belajar dan dapatmengetahui jenis-jenis tipe data pada C++ dan bagaimana karakteristiknya. Terdapat 3 tipe data pada bahasa C++ yaitu, tipe data primitif, tipe data abstrak, dan tipe data koleksi. Tipe data primitif adalah tipe data yang sudah ditentukan oleh sistem, meliputi integer, float, character, dan boolean. Tipe data abstrak merupakan tipe data yang dibentuk oleh programmer itu sendiri (bisa berisi banyak tipe data) yang meliputi class (bersifat private) dan struct (bersifat public). Tipe data koleksi adalah tipe data yang digunakan untuk mengelompokkan dan menyimpan beberapa nilai atau objek secara bersamaan yang meliputi array, vector, list, map, set queue, dan stack.

## Referensi
[1] G. Tammam, “Mengenal Tipe Data dalam Pemrograman,” www.academia.edu, Available: https://www.academia.edu/16940584/Mengenal_Tipe_Data_dalam_Pemrograman. [Accessed: Mar. 21, 2024]
[2] M. M. Syahidin, “Mengenal Jenis-jenis Tipe Data dalam Bahasa C++ | Jurnal MMS,” Sep. 27, 2019. Available: https://jurnalmms.web.id/cpluscplus/tipe-data-dalam-cplusplus/. [Accessed: Mar. 21, 2024]
[3] “LANDASAN TEORI 2.1. Tipe Data Abstrak (TDA).” Available: https://repository.dinamika.ac.id/id/eprint/960/2/BAB%20II%20.pdf. [Accessed: Mar. 21, 2024]