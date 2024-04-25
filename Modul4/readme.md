# <h1 align="center">Laporan Praktikum Modul Searching</h1>
<p align="center">Habibah Ratna Fadhila Islami Hana</p>

## Dasar Teori

Algoritma adalah urutan instruksi yang jelas untuk memecahkan masalah, yaitu untuk memperoleh output yang diperlukan untuk setiap input yang sah dalam jumlah waktu yang terbatas (Levitin, 2011). Searching adalah proses mencari keberadaan atau lokasi suatu elemen tertentu dalam suatu kumpulan data atau struktur data. Tujuan utamanya adalah untuk menemukan elemen yang dicari dengan efisien dan cepat. Algoritma pencarian (searching algorithm) adalah algoritma yang menerima sebuah argumen kunci dan dengan langkah-langkah tertentu akan mencari rekaman dengan kunci tersebut. Setelah proses pencarian dilaksanakan, akan diperoleh salah satu dari dua kemungkinan, yaitu data yang dicari ditemukan (successful) atau tidak ditemukan (unsuccessful) [1]. Ada 2 metode pada algoritma searching, yaitu:

### 1. Sequential Search
Prosedur Sequential Search dalam bahasa C++
```C++
// Fungsi sequential search
int sequentialSearch(int arr[], int n, int target) {
    // Iterasi melalui setiap elemen dalam array
    for (int i = 0; i < n; ++i) {
        // Jika nilai pada indeks saat ini sama dengan target, kembalikan indeksnya
        if (arr[i] == target) {
            return i;
        }
    }
    // Jika target tidak ditemukan, kembalikan -1
    return -1;
}
```
Sequential Search adalah proses membandingkan setiap elemen array satu persatu secara beruntun dimulai dari elemen pertama hingga elemen yang dicari ditemukan atau hingga elemen terakhir dari array [2]. Pencarian sekuensial adalah algoritma yang paling sederhana. Sequential search disebut juga pencarian lurus (linear search). Pencarian linier adalah nama lain dari algoritma pencarian berkelanjutan. Setiap elemen dalam array dibandingkan secara berurutan, dimulai dengan elemen pertama, sampai elemen yang diinginkan ditemukan atau semua elemen telah dibandingkan [3]. Kelebihan dari proses pencarian secara sequential search jika data yang dicari terletak di depan, maka data akan ditemukan dengan cepat. Tetapi dibalik kelebihannya ini, teknik ini juga memiliki kekurangan jika data yang dicari terletak di belakang atau paling akhir, maka akan membutuhkan waktu yang lama dalam proses pencariannya. 

Berikut adalah contoh dari algoritma sequential search:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/008fe4ae-861e-40bc-82ef-0c8714eb3ca9)

### 2. Binary Searching
Prosedur Binary Searching dalam bahasa C++
```C++
// Fungsi binary search
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        // Jika nilai tengah sama dengan target, kembalikan indeksnya
        if (arr[mid] == target) {
            return mid;
        }
        // Jika nilai tengah lebih kecil dari target, cari di sebelah kanan
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // Jika nilai tengah lebih besar dari target, cari di sebelah kiri
        else {
            right = mid - 1;
        }
    }
    // Jika target tidak ditemukan, kembalikan -1
    return -1;
}
```

Algoritma binary search merupakan salah satu algoritma yang digunakan untuk melakukan proses pencarian data yang sudah terurut (Sulistio et al.,2019). Jika data belum terurut maka harus dilakukan proses pengurutan (sorting) terlebih dahulu. Yang artinya proses pencarian data tidak akan dapat dilakukan jika data tidak terurut [4]. Binary search adalah algoritma pencarian yang menggunakan prinsip divide and conquer, sebuah masalah atau tujuan di selesaikan dengan cara mempartisi masalah menjadi bagian yang lebih kecil. Algoritma binary search membagi sebuah tabel menjadi bagian yang lebih kecil. Algoritma ini membagi sebuah tabel menjadi dua dan memproses menjadi satu [5].

Berikut adalah contoh dari algoritma binary search:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/5cd6ec57-f061-4828-a155-63144bc3ef57)

## Guided 

### 1. Buatlah sebuah project dengan menggunakan sequential search sederhana untuk melakukan pencarian data.

```C++
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
    int cari = 10;
    bool ketemu = false;
    int i;
    // Algoritma Sequential Search
    for (i = 0; i < n; i++){
        if(data[i] == cari){
            ketemu = true;
            break;
        }
    }
    cout << "\t Program Sequential Search Sederhana\n" << endl;
    cout << " data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}"<< endl;

    if (ketemu){
        cout << "\n angka "<< cari << " ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << cari << " tidak dapat ditemukan pada data." << endl;
    }
    
    return 0;
}
```
Program tersebut adalah implementasi dari algoritma pencarian Sequential Search dalam bahasa C++. Pada awalnya, sebuah array data dengan ukuran n = 10 diinisialisasi dengan beberapa nilai integer. Sebuah variabel 'cari' dideklarasikan untuk menyimpan nilai yang ingin dicari dalam array. Variabel 'ketemu' digunakan untuk menunjukkan apakah nilai yang dicari telah ditemukan atau tidak. Awalnya diatur sebagai 'false'. Dilakukan iterasi melalui setiap elemen dalam array menggunakan loop 'for'. Jika elemen saat ini sama dengan nilai yang dicari ('cari'), variabel 'ketemu' diubah menjadi 'true' dan loop dihentikan dengan menggunakan 'break'. Setelah loop selesai, program mencetak pesan yang sesuai berdasarkan apakah nilai yang dicari ditemukan atau tidak, beserta indeksnya jika ditemukan. Program kemudian mengembalikan nilai 0 yang menandakan bahwa program telah berakhir dengan sukses.

### 2. Buatlah sebuah project untuk melakukan pencarian data dengan menggunakan Binary Search

```C++
#include <iostream>
#include <iomanip>

using namespace std;

int bil_data[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;

void selection_sort() {
    int temp, min, i, j;
    for(i = 0; i < 7; i++) {
        min = i;
        for(j = i + 1; j < 7; j++) {
            if(bil_data[j] < bil_data[min]) {
                min = j;
            }
        }
        temp = bil_data[i];
        bil_data[i] = bil_data[min];
        bil_data[min] = temp;
    }
}

void binary_search() {
    // searching
    int awal, akhir, tengah, b_flag = 0;
    awal = 0; // inisiasi
    akhir = 6;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2; // mencari indix middle
        if(bil_data[tengah] == cari) {
            b_flag = 1;
            break;
        } else if(bil_data[tengah] < cari) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }
    if(b_flag == 1) {
        cout << "\n Data ditemukan pada index ke-" << tengah << endl;
    } else {
        cout << "\n Data tidak ditemukan\n";
    }
}

int main() {
    cout << "\t BINARY SEARCH\n";
    cout << "\n Data : ";
    // tampilkan data awal
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    cout << "\n Masukkan data yang ingin Anda cari : ";
    cin >> cari;
    cout << "\n Data diurutkan : ";
    // urutkan data dengan selection sort
    selection_sort();
    // tampilkan data setelah diurutkan
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x]; // contoh penggunaan library iomanip untuk memberikan jarak 3 posisi
    }
    cout << endl;
    binary_search();
    return 0;
}
```
Program tersebut adalah implementasi dari algoritma pencarian Binary Search menggunakan bahasa C++. Pertama-tama, terdapat array 'bil_data' yang berisi data angka yang belum diurutkan. Terdapat fungsi 'selection_sort()' yang bertugas untuk mengurutkan data dalam array 'bil_data' menggunakan algoritma Selection Sort. Terdapat juga fungsi 'binary_search()' yang bertugas untuk melakukan pencarian binary terhadap data yang telah diurutkan. Di dalam fungsi 'binary_search()', terdapat loop while yang akan berjalan selama kondisi 'b_flag' masih 0 (false) dan 'awal' masih kurang dari atau sama dengan 'akhir'. Loop ini akan terus membagi rentang pencarian menjadi dua bagian hingga data yang dicari ditemukan atau rentang pencarian menjadi kosong. Setelah loop selesai, program akan mencetak pesan yang sesuai berdasarkan apakah data yang dicari ditemukan atau tidak. Di dalam fungsi 'main()', data awal dalam array 'bil_data' ditampilkan, kemudian user diminta untuk memasukkan nilai yang ingin dicari. Setelah input diterima, data dalam array diurutkan menggunakan fungsi 'selection_sort()'. Setelah diurutkan, data tersebut ditampilkan kembali, dan dilakukan pencarian menggunakan fungsi 'binary_search()' untuk menemukan data yang dicari. Program kemudian mengakhiri eksekusi dengan mengembalikan nilai 0.

## Unguided 

### 1. . Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search!


```C++
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int binarySearch(string arr[], int l, int r, string x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main() {
    string sentence;
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, sentence);
    int n = sentence.length();
    string arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = sentence[i];
    }
    sort(arr, arr + n);
    string letter;
    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> letter;
    int result = binarySearch(arr, 0, n - 1, letter);
    if (result == -1) {
        cout << "Huruf tidak ditemukan dalam kalimat." << endl;
    } else {
        cout << "Huruf ditemukan pada indeks " << result << "." << endl;
    }

    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}
```
#### Output:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/0497d4a8-22df-48ca-bbae-4ea3005303a2)

Program dimulai dengan mengimpor pustaka 'iostream', 'string', dan 'algorithm'. Fungsi 'binarySearch' didefinisikan untuk melakukan pencarian biner dalam array string. Fungsi ini menggunakan rekursi untuk membagi rentang pencarian menjadi dua bagian hingga menemukan huruf yang dicari atau rentang pencarian menjadi kosong. Di dalam fungsi 'main()', pengguna diminta untuk memasukkan sebuah kalimat menggunakan fungsi 'getline()' untuk memasukkan keseluruhan baris. Panjang kalimat yang dimasukkan kemudian dihitung dan disimpan dalam variabel 'n'. Sebuah array string 'arr' dibuat untuk menyimpan setiap huruf dalam kalimat. Setiap huruf dalam kalimat disalin ke dalam array 'arr'. Array 'arr' kemudian diurutkan menggunakan fungsi 'sort()' dari pustaka '<algorithm>' untuk memfasilitasi pencarian biner. Pengguna diminta untuk memasukkan huruf yang ingin dicari. Pencarian dilakukan dengan memanggil fungsi 'binarySearch()' untuk mencari huruf tersebut dalam array 'arr'. Hasil pencarian dicetak, dengan memberi tahu pengguna apakah huruf tersebut ditemukan dalam kalimat dan diindeks ke berapa.

#### Full code Screenshot:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/389ea9ca-3aec-4e4e-bfb9-bd7f25dd5878)

![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/d0c61416-fcc7-43f1-99bc-932b3ebedf2f)

### 2. Buatlah sebuah program yang dapat menghitung banyaknya huruf vocal dalam sebuah kalimat!

```C++
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
```

#### Output:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/f139d7ac-524e-43e3-a57e-e6ac1c9122ac)

Fungsi 'hitungHurufVokal()' digunakan untuk menghitung jumlah huruf vokal dalam sebuah string. Fungsi ini menerima parameter 'kalimat' yang merupakan kalimat yang ingin dianalisis. Di dalam fungsi tersebut, dilakukan iterasi melalui setiap karakter dalam kalimat menggunakan loop 'for'. Setiap karakter diperiksa apakah merupakan huruf vokal ('a', 'i', 'u', 'e', 'o' atau huruf vokal besar). Jika iya, jumlah huruf vokal ('jumlah') ditambah satu. Setelah iterasi selesai, jumlah huruf vokal dikembalikan sebagai hasil. Di dalam fungsi 'main()', sebuah kalimat telah ditetapkan sebagai 'kalimat' yang akan dianalisis. Kalimat tersebut dicetak, dan fungsi 'hitungHurufVokal()' dipanggil untuk menghitung jumlah huruf vokal di dalamnya. Jumlah huruf vokal kemudian dicetak sebagai output.

#### Full code Screenshot:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/e96d1446-ecf5-4025-a8fb-23216909ee39)

### 3. Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search 

```C++
#include <iostream>
using namespace std;

int sequentialSearch(int data[], int n, int target) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (data[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int n = sizeof(data) / sizeof(data[0]);
    int target = 4;

    cout << "Array data : {9, 4, 1, 4, 7, 10, 5, 4, 12, 4}" << endl;
    int jumlahKemunculan = sequentialSearch(data, n, target);
    cout << "Jumlah kemunculan angka " << target << " pada array data adalah: " << jumlahKemunculan << endl;

    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}
```

#### Output:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/869fab3a-eb6b-4360-a8b7-348cd14aad75)

Fungsi 'sequentialSearch()' digunakan untuk melakukan pencarian sekuensial dalam array. Fungsi ini menerima tiga parameter: array 'data', jumlah elemen dalam array 'n, dan angka yang ingin dicari ('target'). Di dalam fungsi 'sequentialSearch()', dilakukan iterasi melalui setiap elemen dalam array menggunakan loop 'for'. Setiap elemen diperiksa, dan jika elemen tersebut sama dengan nilai target, variabel 'count' akan bertambah satu. Setelah iterasi selesai, nilai 'count' yang merepresentasikan jumlah kemunculan nilai target dalam array akan dikembalikan. Di dalam fungsi 'main()', sebuah array 'data' telah ditentukan beserta jumlah elemennya 'n dan nilai target yang ingin dicari. Array 'data' dan nilai target dicetak untuk memberikan konteks tentang data yang sedang diproses. Fungsi 'sequentialSearch()' dipanggil untuk menghitung jumlah kemunculan nilai target dalam array, dan hasilnya dicetak.

#### Full code screenshot:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/9843e8f7-5342-4313-aba6-a7e07eaa3497)

## Kesimpulan
Algoritma pencarian (searching algorithm) adalah algoritma yang menerima sebuah argumen kunci dan dengan langkah-langkah tertentu akan mencari rekaman dengan kunci tersebut. Setelah proses pencarian dilaksanakan, akan diperoleh salah satu dari dua kemungkinan, yaitu data yang dicari ditemukan (successful) atau tidak ditemukan (unsuccessful). Ada 2 metode pada algoritma searching, yaitu sequential search dan binary search.

#### Sequential Search

Sequential Search adalah metode pencarian sederhana di mana setiap elemen dalam kumpulan data diperiksa secara berurutan hingga elemen yang dicari ditemukan atau kumpulan data selesai diperiksa. Algoritma ini cocok untuk kumpulan data kecil atau tidak terurut. Sequential Search memiliki kompleksitas waktu linier, yaitu O(n), di mana n adalah jumlah elemen dalam kumpulan data. Keuntungan Sequential Search adalah kesederhanaannya dalam implementasi dan fleksibilitasnya dalam menangani kumpulan data yang tidak terurut.

#### Binary Search

Binary Search adalah algoritma pencarian yang efisien yang bekerja dengan cara membagi kumpulan data menjadi dua bagian pada setiap langkahnya. Algoritma ini memerlukan bahwa kumpulan data telah diurutkan sebelumnya.
Binary Search memiliki kompleksitas waktu logaritmik, yaitu O(log n), di mana n adalah jumlah elemen dalam kumpulan data. Keuntungan Binary Search adalah efisiensinya dalam mencari nilai dalam kumpulan data yang besar karena kompleksitas waktu yang rendah.

Penggunaan antara Sequential Search dan Binary Search tergantung pada karakteristik kumpulan data yang sedang diproses dan kebutuhan spesifik. Jika kumpulan data tidak terlalu besar dan tidak terurut, Sequential Search bisa menjadi pilihan yang baik karena kesederhanaannya. Namun, jika kumpulan data besar dan telah diurutkan, Binary Search akan memberikan kinerja yang lebih baik.

## Referensi
[1]M. HENDRIX PRISTYAWAN, “ANALISIS ALGORITMA SEQUENTIAL SEARCH UNTUK MENCARI DATA MAHASISWA TEKNIK INFORMATIKA PADA SEKOLAH TINGGI TEKNOLOGI PELITA BANGSA SKRIPSI,” 2018. Available: https://media.neliti.com/media/publications/360919-none-b992c0d2.pdf. [Accessed: Apr. 25, 2024]

[2]Anisya Sonita dan Mayang Sari, “Implementasi Algoritma Sequential Searching untuk Pencarian Nomor Surat pada Sistem Arsip Elektronik,” Pseudocode, vol. 8, no. 1, pp. 1-8, 2021. Available: https://ejournal.unib.ac.id/pseudocode/article/download/3988/2356/7840. [Accessed: Apr. 25, 2024]

[3]W. Setyawati Wahyuni, S. Andryana, and B. Rahman, “PENGGUNAAN ALGORITMA SEQUENTIAL SEARCHING PADA APLIKASI PERPUSTAKAAN BERBASIS WEB,” JIPI (Jurnal Ilmiah Penelitian dan Pembelajaran Informatika), vol. 07, no. 02, pp. 294–302, Jun. 2022, Available: https://www.researchgate.net/publication/362496347_PENGGUNAAN_ALGORITMA_SEQUENTIAL_SEARCHING_PADA_APLIKASI_PERPUSTAKAAN_BERBASIS_WEB. [Accessed: Apr. 25, 2024]

[4]B. Jumadi Dehotman Sitompul, A. Yusupa, and N. Jeane Tuturoong, “IMPLEMENTASI ALGORITMA BINARY SEARCH PADA PENCARIAN DATA JEMAAT GEREJA HKBP MANADO,” JIP (Jurnal Informatika Polinema), vol. 9, no. 1, pp. 17–24, Nov. 2022, Available: https://jurnal.polinema.ac.id/index.php/jip/article/download/3886/2709. [Accessed: Apr. 25, 2024]

[5]M. Zulfitrah, R. Satra, and L. Budi Ilmawan, “Penerapan Algoritma Binary Search pada Aplikasi Kamus Bahasa Wolio (Buton),” Buletin Sistem Informasi dan Teknologi Islam, vol. 2, no. 4, pp. 265–274, Nov. 2021, Available: https://jurnal.fikom.umi.ac.id/index.php/BUSITI/article/download/998/397. [Accessed: Apr. 25, 2024]