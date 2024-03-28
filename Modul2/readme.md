# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Habibah Ratna Fadhila Islami Hana</p>

## Dasar Teori

### Array

Array adalah struktur data yang paling umum digunakan dalam semua bahasa pemograman [1]. Penggunaan array dapat mempermudah penyimpan data karena array berisi komponen-komponen yang memiliki tipe data yang sama. Setiap anggota array dapat diakses melalui suatu indeks [2]. Dilihat dari dimensinya array dapat dibagi menjadi array dimensi satu, array dimensi dua dan array multidimensi, dimana masing-masing array tersebut memiliki fungsi yang berbeda dalam penggunaannya [3]. Array 1 dimensi disebut dengan vektor, array 2 dimensi sering disebut sebagai matriks sedangkan array yang memiliki dimensi lebih dari 2 (dua) yang disebut tensor. 

### 1. Array Satu Dimensi
Array 1 dimensi atau yang sering disebut dengan vektor adalah suatu array yang value atau nilainya hanya terdiri dari n buah kolom atau 1 subskrip array saja. Array ini cocok untuk representasi data sekuensial seperti daftar nama atau bilangan. Pendeklarasian array satu dimensi dalam bahasa C++ menggunakan tanda [ ] (bracket). Bentuk umum pendeklarasian array satu dimensi adalah :
tipe_data nama_array[jumlah_elemen];

Contoh dari array satu dimensi :
```C++
#include <iostream>
using namespace std;

int main() {
    int angka[5] = {10, 20, 30, 40, 50};

    cout << "Nilai elemen pada indeks ke-2: " << angka[2] << endl;

    return 0;
}
```
Program tersebut akan menampilkan output,

'Nilai elemen pada indeks ke-2: 30'

Karena pada contoh tersebut, yang ingin ditampilkan hanya nilai elemen pada indeks ke-2 dari array satu dimensi. 


### 2. Array Dua Dimensi
Array 2 dimensi atau yang lebih sering digambarkan dengan sebuah matriks digunakan untuk menggambarkan array yang lebih rumit [2]. Array ini ideal untuk merepresentasikan hubungan antar elemen data. Contohnya di perhitungan matematika yang memiliki matriks/grafik/diagram yang memiliki sumbu x dan y. Array 2 dimensi juga bisa disebut sebagai perluasan dari array 1 dimensi, dimana jika pada array 1 dimensi hanya terdapat satu kolom dan satu baris maka pada array 2 dimensi tersusun atas beberapa elemen kolom dan beberapa elemen baris dengan tipe data yang sama atau sejenis.

Contoh dari array dua dimensi :
```C++
#include <iostream>
using namespace std;

int main() {
    int matriks[2][2] = {{1, 2}, {3, 4}};

    cout << "Isi array matriks: " << endl;
    cout << matriks[0][0] << " " << matriks[0][1] << endl;
    cout << matriks[1][0] << " " << matriks[1][1] << endl;

    return 0;
}
```
Program tersebut akan menampilkan output,

Isi array matriks:
1 2
3 4

Karena pada contoh tersebut, dibuat suatu array dua dimensi dengan nama 'matriks' yang berisi angka dari 1 sampai 4. Setiap elemen dalam array dua dimensi diakses menggunakan dua indeks, yaitu matriks[baris][kolom].

### 3. Array Multidimensi
Array multidimensi adalah struktur data yang berisi elemen-elemen array yang tersusun secara teratur dalam dua atau lebih dimensi dengan memori yang lebih besar. Biasanya array multidimensi digunakan untuk menyebut array dengan dimensi lebih dari dua atau array yangmempunyai lebih dari dua subskrip, seperti untuk menyebut array tiga dimensi, empat dimensi, limadimensi dan seterusnya [4]. Artinya, array tersebut tidak hanya memiliki satu baris atau satu kolom, tetapi bisa memiliki banyak baris dan kolom, bahkan dimensi yang lebih tinggi dari itu. Array multidimensi dapat digambarkan sebagai “array di dalam array”. Dalam pemrograman, array multidimensi sering digunakan untuk menyimpan data yang terstruktur, seperti matriks, tabel, atau data yang terorganisir dalam beberapa dimensi. 

Contoh dari array multidimensi :
```C++
#include <iostream>
using namespace std;

int main() {
    // Contoh array multidimensi (matriks)
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Mengakses dan mencetak elemen matriks
    cout << "Elemen matriks:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```
Program tersebut akan menampilkan output,

Elemen matriks:
1 2 3 
4 5 6 
7 8 9 

Pada program C++ tersebut, didefinisikan sebuah array multidimensi (matriks) 3x3 yang berisi bilangan bulat dari 1 hingga 9. 

### 4. Array Empat Dimensi
Array empat dimensi adalah struktur data yang memiliki empat dimensi. Ini berarti elemen-elemen dalam array dapat diakses menggunakan empat indeks. Contoh penggunaan array empat dimensi biasanya terjadi dalam konteks data yang lebih kompleks, seperti data spasial dalam grafika 3D, data dalam sistem koordinat empat dimensi, atau data yang memerlukan lebih dari tiga dimensi.

Contoh dari array empat dimensi :
```C++
#include <iostream>
using namespace std;

int main() {
    // Deklarasi dan inisialisasi array 4 dimensi
    int data[2][2][2][2] = {
        {
            {{1, 2}, {3, 4}},
            {{5, 6}, {7, 8}}
        },
        {
            {{9, 10}, {11, 12}},
            {{13, 14}, {15, 16}}
        }
    };

    // Menampilkan nilai elemen-elemen array
    cout << "Nilai elemen pada indeks [1][0][1][0]: " << data[1][0][1][0] << endl;

    return 0;
}
```

Program tersebut akan menampilkan output :

Nilai elemen pada indeks [1][0][1][0]: 11

Pada program C++ tersebut, didefinisikan sebuah array empat dimensi dengan nama 'data' yang berisi angka dari 1 sampai 16. Setiap elemen dalam array empat dimensi diakses menggunakan empat indeks, yaitu 'data[baris1][kolom1][baris2][kolom2]'.

### 5. Array Lima Dimensi
Array 5 dimensi adalah struktur data dalam pemrograman yang memiliki lima dimensi. Ini berarti array tersebut dapat diakses dengan lima indeks yang berbeda untuk mengakses elemen di dalamnya. Array lima dimensi jarang digunakan dalam pemrograman sehari-hari karena kompleksitas dan keterbatasannya.

Contoh dari array lima dimensi :
```C++
#include <iostream>
using namespace std;

int main() {
    // Deklarasi dan inisialisasi array 5 dimensi
    int data[2][2][2][2][2] = {
        {
            {
                {{1, 2}, {3, 4}},
                {{5, 6}, {7, 8}}
            },
            {
                {{9, 10}, {11, 12}},
                {{13, 14}, {15, 16}}
            }
        },
        {
            {
                {{17, 18}, {19, 20}},
                {{21, 22}, {23, 24}}
            },
            {
                {{25, 26}, {27, 28}},
                {{29, 30}, {31, 32}}
            }
        }
    };

    // Menampilkan nilai elemen pada indeks tertentu
    cout << "Nilai elemen pada indeks [1][0][1][1][0]: " << data[1][0][1][1][0] << endl;

    return 0;
}
```

Program tersebut akan menampilkan output :

Nilai elemen pada indeks [1][0][1][1][0]: 23

Pada program C++ tersebut, didefinisikan sebuah array lima dimensi dengan nama 'data' yang berisi angka dari 1 hingga 32. Setiap elemen dalam array lima dimensi diakses menggunakan lima indeks, yaitu 'data[baris1][kolom1][baris2][kolom2][baris3]'.

## Guided 

### 1. Input Array Tiga Dimensi

```C++
#include <iostream>
using namespace std;
// PROGRAM INPUT ARRAY 3 DIMENSI
int main()
{
// Deklarasi array
int arr[2][3][3];
// Input elemen
for (int x = 0; x < 2; x++)
{
    for (int y = 0; y < 3; y++)
    {
        for (int z = 0; z < 3; z++)
        {
            cout << "Input Array[" << x << "][" << y << "][" << z <<
"] = ";
            cin >> arr[x][y][z];
        }
    }
    cout << endl;
}

// Output Array
for (int x = 0; x < 2; x++)
{
    for (int y = 0; y < 3; y++)
    {
        for (int z = 0; z < 3; z++)
        {
            cout << "Data Array[" << x << "][" << y << "][" << z <<
"] = " << arr[x][y][z] << endl;
        }
    }
}
cout << endl;
// Tampilan array
for (int x = 0; x < 2; x++)
{
    for (int y = 0; y < 3; y++)
    {
        for (int z = 0; z < 3; z++)
        {
            cout << arr[x][y][z] << " "<<ends;
        }
        cout << endl;
    }
    cout << endl;
    }
}
```
Program di atas merupakan sebuah program sederhana dari array tiga dimensi. Program C++ ini memungkinkan pengguna untuk memasukkan elemen-elemen ke dalam array tiga dimensi dan kemudian menampilkan elemen-elemen tersebut. Pada saat program ini berjalan, program akan mendeklarasikan sebuah array tiga dimensi dengan ukuran 2x3x3 menggunakan tipe data 'int'. Ini berarti array tersebut memiliki 2 "lapisan", masing-masing dengan 3 "baris" dan 3 "kolom". Selanjutnya, program akan menjalankan tiga loop bersarang untuk memungkinkan user memasukkan nilai untuk setiap elemen array, dan kemudian menampilkan semua elemen array tersebut. Lalu, program akan menampilkan seluruh elemen array dalam bentuk 3 dimensi (matriks).

### 2. Mencari Nilai Maksimal pada Array

```C++
#include <iostream>
using namespace std;
int main()
{
    int maks, a, i = 1, lokasi;
    cout << "Masukkan panjang array: ";
    cin >> a;
    int array[a];
    cout << "Masukkan " << a << " angka\n";
    for (i= 0; i < a; i++)
    {
        cout << "Array ke-" << (i) << ": ";
        cin >> array[i];
    }
    maks = array[0]; // Fungsi untuk mencari nilai max, umpamakan nilai maks ada di index ke 0
    for (i = 0; i < a; i++)
    {
        if (array[i] > maks) // Untuk membandingkan apakah arr 0 > maks? jika salah akan diulang
        {
            maks = array[i]; // Jika benar, nilai maks akan diganti 
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;

    return 0; // Return 0 to indicate successful execution
}
```
Program tersebut adalah sebuah program C++ yang dapat mencari nilai maksimum dari array dan menampilkan nilai maksimum beserta dengan indeksnya di dalam array. Pada saat program dijalankan, program akan meminta user untuk memasukkan panjang array (jumlah elemen yang akan dimasukkan) dan memasukkan angka-angka yang akan disimpan dalam array. Selanjtunya, program akan mencari nilai maksimum dari array yang telah dimasukkan oleh user dengan melakukan iterasi melalui seluruh elemen array. Program membandingkan setiap elemen array dengan nilai maksimum yang telah ditemukan sebelumnya. Jika nilai elemen saat ini lebih besar dari nilai maksimum yang telah ditemukan sebelumnya, nilai maksimum diperbarui dengan nilai elemen tersebut dan indeksnya disimpan. Setelah iterasi selesai, program menampilkan nilai maksimum beserta dengan indeksnya di dalam array.

## Unguided 

### 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/4f8279cc-8eca-4188-80e2-0da9aa93c2d6)

```C++
#include <iostream>
using namespace std;

int main() {
    int array[10];
    cout << "Masukkan 10 angka: ";
    
    // Meminta user memasukkan 10 angka
    for (int i = 0; i < 10; ++i) {
        cin >> array[i];
    }
    
    // Menampilkan data array
    cout << "Data Array: ";
    for (int i = 0; i < 10; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
    
    // Menampilkan nomor genap
    cout << "Nomor Genap: ";
    for (int i = 0; i < 10; ++i) {
        if (array[i] % 2 == 0) {
            cout << array[i];
            if (i != 9) {
                cout << ", ";
            }
        }
    }
    cout << endl;
    
    // Menampilkan nomor ganjil
    cout << "Nomor Ganjil: ";
    for (int i = 0; i < 10; ++i) {
        if (array[i] % 2 != 0) {
            cout << array[i];
            if (i != 9) {
                cout << ", ";
            }
        }
    }
    cout << endl;

    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}
```
#### Output:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/f405b7c3-469e-47f9-ac0b-3d9b80a1ca10)

Program di atas merupakan contoh sederhana program C++ yang memungkinkan user untuk memasukkan 10 angka, lalu data array tersebut ditampilkan dan dipisahkan angka genap dan ganjil nya. Pertama, program mendeklarasikan array 'array' dengan 10 elemen bertipe integer dan diminta untuk memasukkan 10 data yang diingikan menggunakan perulangan. Setelah semua angka telah dimasukkan, program mencetak data array tersebut menggunakan perulangan kedua. Setelah 10 data inputan user ditampilkan, program akan menampilkan angka-angka genap dari array tersebut. Untuk setiap angka dalam array, jika angka tersebut habis dibagi dua (modulo 2 sama dengan 0), maka angka tersebut dianggap genap dan ditampilkan. Program juga menampilkan angka-angka ganjil dari array. Untuk setiap angka dalam array, jika angka tersebut tidak habis dibagi dua (modulo 2 tidak sama dengan 0), maka angka tersebut dianggap ganjil dan ditampilkan.

#### Full code Screenshot:
![Screenshot 2024-03-28 134950](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/e3028768-bd70-45c6-b37a-323dd5c42d83)

![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/e86232ac-6d02-4e25-a019-13c8f84a6b67)


### 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!

```C++
#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel untuk menyimpan ukuran elemen
    int panjang, lebar, tinggi;

    // Meminta user untuk memasukkan ukuran elemen array tiga dimensi
    cout << "Masukkan panjang array: ";
    cin >> panjang;
    cout << "\nMasukkan lebar array: ";
    cin >> lebar;
    cout << "\nMasukkan tinggi array: ";
    cin >> tinggi;

    // Deklarasi array
    // Membuat array tiga dimensi sesuai dengan ukuran yang dimasukkan pengguna
    int array[panjang][lebar][tinggi];

    // Meminta user untuk memasukkan elemen-elemen (Input Array)
    cout << "Masukkan elemen-elemen array:" << endl;
    for (int i = 0; i < panjang; i++) {
        for (int j = 0; j < lebar; j++) {
            for (int k = 0; k < tinggi; k++) {
                cout << "Array[" << i << "][" << j << "][" << k << "]: ";
                cin >> array[i][j][k];
            }
        }
    }

    // Menampilkan elemen-elemen array yang dimasukkan oleh user (Output Array)
    cout << "\nElemen-elemen array yang dimasukkan:\n";
    for (int i = 0; i < panjang; i++) {
        for (int j = 0; j < lebar; j++) {
            for (int k = 0; k < tinggi; k++) {
                cout << "Array[" << i << "][" << j << "][" << k << "] = " << array[i][j][k] << endl;
            }
        }
    }

    // Menampilkan array
    for (int i = 0; i < panjang; i++) {
        for (int j = 0; j < lebar; j++) {
            for (int k = 0; k < tinggi; k++) {
                cout << array[i][j][k] << " " << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}
```

#### Output:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/6f46a426-7f37-4854-aa86-b6d14f815f21)

![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/e81617aa-60df-427a-b924-7e7bd3400387)

Program di atas adalah contoh program untuk meminta input dari user untuk membuat array tiga dimensi, kemudian menampilkan elemen-elemennya. Pertama, program akan mendeklarasikan variabel ukurang 'panjang', 'lebar', dan 'tinggi' array tiga dimensi. Lalu, user akan diminta untuk melakukan input ukuran array tersebut. Selanjutnya, program akan mendeklarasikan array tiga dimensi dengan menggunakan ukuran yang dimasukkan oleh user. Kemudian, user diminta untuk memasukkan elemen-elemen array satu per satu menggunakan nested loop (loop bersarang) untuk mengakses setiap elemen. Setelah user selesai memasukkan elemen-elemen array, program menampilkan elemen-elemen tersebut dengan menampilkan indeks dan nilai masing-masing elemen. Program juga menampilkan array secara keseluruhan dengan menampilkan elemen-elemen pada setiap baris, dengan spasi di antara elemen-elemen dalam baris dan baris-baris pada array.

#### Full code Screenshot:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/9a82fbfd-dfa3-442a-8af3-987b5fb8e03c)

![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/e1117d75-0eea-4eed-aad8-25e014344012)


### 3. Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!

```C++
#include <iostream>
using namespace std;

int main() {
    // Deklarasi tipe data variabel
    int maks, min, a, lokasi_max, lokasi_min, jumlah = 0, rata;
    // Input ukuran array
    cout << "Masukkan ukuran array: ";
    cin >> a;

    // Validasi ukuran array harus lebih besar dari 0
    if (a <= 0) {
        cout << "Ukuran array harus lebih besar dari 0." << endl;
        return 1; // Return 1 untuk indikasi error
    }

    // Deklarasi ukuran array
    int array[a];

    // Input elemen array
    cout << "Masukkan " << a << " angka\n";

    // Fungsi perulangan untuk menjumlahkan nilai array
    for (int i = 0; i < a; i++) {
        cout << "Array ke-" << i << ": ";
        cin >> array[i];
        jumlah += array[i];

        // Inisialisasi nilai maks dan min dengan elemen pertama
        if (i == 0) {
            maks = min = array[i];
            lokasi_max = lokasi_min = i;
        } else {
            // Mencari nilai maksimum array
            if (array[i] > maks) {
                maks = array[i];
                lokasi_max = i;
            }
            // Mencari nilai minimum array
            if (array[i] < min) {
                min = array[i];
                lokasi_min = i;
            }
        }
    }

    // Menampilkan menu
    cout << "Menu:\n";
    cout << "1. Maksimum\n";
    cout << "2. Minimum\n";
    cout << "3. Rata-rata\n";
    cout << "4. Keluar\n";

    // Pilihan operasi
    cout << "Pilih operasi: ";
    int pilihan;
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Nilai maksimum adalah " << maks << " berada di Array ke-" << lokasi_max << endl;
            break;
        case 2:
            cout << "Nilai minimum adalah " << min << " berada di Array ke-" << lokasi_min << endl;
            break;
        case 3:
            // Menghitung rata-rata
            rata = jumlah / a;
            cout << "Nilai rata-ratanya adalah " << rata << endl;
            break;
        case 4:
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
    }
    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}
```

#### Output:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/2880ea9f-4687-48a0-a775-4072d64bdd87)

Program di atas merupakan contoh program menu yang memungkinkan pengguna untuk mencari nilai maksimum, minimum, dan rata-rata dari suatu array. Pada saat dijalankan, program akan mendeklarasikan variabel maks, min, a, lokasi_max, lokasi_min, jumlah, dan rata untuk menyimpan nilai maksimum, minimum, ukuran array, lokasi maksimum, lokasi minimum, jumlah seluruh elemen array, dan rata-rata. Lalu, program akan meminta user melakukan input ukuran array yang akan disimpan dalam variabel dan memvalidasinya agar ukuran array harus lebih besar atau tidak sama dengan 0. Array dengan ukuran a dideklarasikan. 

User diminta untuk memasukkan elemen-elemen array satu per satu. Selama user memasukkan elemen, program juga menghitung jumlah seluruh elemen array dan menemukan nilai maksimum dan minimum. Setelah user selesai memasukkan elemen-elemen array, program menampilkan menu yang berisi pilihan operasi mencari nilai maksimum, minimum, atau rata-rata, atau keluar dari program. 

Program memproses pilihan user menggunakan switch-case:
- Jika user memilih 1, program menampilkan nilai maksimum dan lokasinya.
- Jika user memilih 2, program menampilkan nilai minimum dan lokasinya.
- Jika user memilih 3, program menghitung dan menampilkan rata-rata.
- Jika user memilih 4, program keluar.
- Jika user memilih pilihan lain, program memberikan pesan bahwa pilihan tidak valid.

#### Full code screenshot:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/a0e99f1e-9a6f-4ce7-a87c-2a8be8b27ecf)

![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/f5216ca7-6e62-4a33-bc38-cccb130e4d75)

![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/52c984a0-fd15-42e3-a745-6697fa74d7a4)

## Kesimpulan
- Praktikum kali ini dengan materi array memberikan pemahaman yang kuat tentang konsep dasar array dan penerapannya dalam pemrograman.
- Array adalah struktur data yang penting dalam pemrograman karena memungkinkan penyimpanan dan pengaksesan sejumlah elemen data dalam satu variabel.
- Terdapat berbagai macam jenis array berdasarkan dimensinya yaitu, array 1 dimensi, 2 dimensi, multidimensi, 4 dimensi, dan 5 dimensi. Dimana masing-masing array tersebut memiliki fungsi yang berbeda dalam penggunaannya.
- Berdasarkan dimensi, array dapat digunakan untuk menyimpan data dalam berbagai bentuk, mulai dari urutan sederhana hingga matriks atau bahkan ruang.

## Referensi
[1] R. Selamet, “IMPLEMENTASI STRUKTUR DATA LIST, QUEUE DAN STACK DALAM JAVA”, vol. 15, no. 3, p. 19, Mar. 2016, [Online]. Available: https://jurnal.likmi.ac.id/Jurnal/11_2016/112016_03_Rachmat.pdf

[2] M. P. Putri et al., ALGORITMA DAN STRUKTUR DATA. BANDUNG: PENERBIT WIDINA BHAKTI PERSADA BANDUNG, 2022, pp. 90–96. Available: https://repository.penerbitwidina.com/media/publications/557434-algoritma-dan-struktur-data-2ceb12a5.pdf. [Accessed: Mar. 27, 2024]

[3] U. Ta, “Pemograman C++ Bab 12 Array.pdf,” www.academia.edu, Available: https://www.academia.edu/35362129/Pemograman_C_Bab_12_Array_pdf. [Accessed: Mar. 28, 2024]

[4] R. P. ARFA, “MAKALAH ARRAY 1 DIMENSI DAN MULTIDIMENSI,” www.academia.edu, 2017, Available: https://www.academia.edu/35390032/MAKALAH_ARRAY_1_DIMENSI_DAN_MULTIDIMENSI. [Accessed: Mar. 28, 2024]