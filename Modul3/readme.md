# <h1 align="center">Laporan Praktikum Modul Sorting</h1>
<p align="center">Habibah Ratna Fadhila Islami Hana</p>

## Dasar Teori

### 1. Konsep Dasar Sorting
Sorting atau pengurutan adalah proses menyusun elemen – elemen dari masukan awal acak menjadi keluaran akhir tertata dengan urutan tertentu [1]. Pengurutan data atau sorting merupakan salah satu jenis operasi penting dalam pengolahan data. Pengurutan data sangat penting digunakan, sehinga sampai saat ini telah banyak metode-metode  pengurutan data dan mungkin akan tetap bermunculan metode–metode yang baru. Ada banyak metode pengurutan data antara lain: bubble sort, bi-directional bubble sort, selection sort, shaker sort, insertion sort, inplace merge sort, double storage merge sort, comb sort 11, shell sort, heap sort, exchange sort, merge sort, quick sort, quick sort with bubblesort, enhange quick sort, fast quick sort, radix sort, swap sort, dan lain  sebagainya [2]. Pada dasarnya ada dua macam aturan pengurutan yang biasa digunakan yaitu, ascending (proses pengurutan data dari data yang paling kecil sampai data yang paling besar) dan descending (proses mengurutkan data dari yang paling besar sampai data yang paling kecil). Proses yang terjadi dalam pengurutan data adalah proses perbandingan data dan pertukaran data[3].

### 2. Insertion Sort
Prosedur Insertion Sort dalam bahasa C++
```C++
void insertion_sort(int arr[], int length) {
    int i, j ,tmp;
        for (i = 1; i < length; i++) {
            j = i;
            while (j > 0 && arr[j - 1] > arr[j]) {
                tmp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = tmp;
                j--;
            }//end of while loop
        }//end of for loop
}
```
Salah satu algoritma sorting yang paling sederhana adalah insertion sort. Insertion Sort disebut-sebut sebagai metode pertengahan. Artinya, metode ini memiliki kecepatan rata-rata antara metode primitif (bubble dan selection) dan modern (merge dan quick)[1]. Metode pengurutan insertion sort merupakan pengurutan data yang membandingkan dengan dua elemen data pertama, kemudian membandingkan elemen-elemen data yang sudah diurutkan, kemudian perbandingan tersebut akan terus diulang hingga tidak ada elemen data yang tersisa[2].

Berikut adalah contoh dari algoritma insertion sort:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/7417ce37-2823-43a8-9be6-5812fcd38eb2)

### 3. Bubble Sort
Prosedur Bubble Sort dalam bahasa C++
```C++
void bubble_sort(int arr[], int length){
    bool not_sorted = true;
    int j=0,tmp;

    while (not_sorted){
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            }//end of if
        }//end of for loop
    }//end of while loop
}//end of bubble_sort
```

Bubble sort adalah suatu metode pengurutan yang membandingkan elemen yang sekarang dengan elemen berikutnya, jika elemen sekarang > elemen berikutnya maka posisinya ditukar, kalau tidak, tidak perlu ditukar. Algoritma bubble sort merupakan algortima yang dapat dikatakan paling lama dan prosesnya sangat mudah dilakukan. Tinggal diatur apakah data yang akan dirutkan mulai dari data terkecil sampai terbesar atau dimulai dari data terbesar sampai terkecil. 

Proses pengurutan dapat dilakukan dari data awal atau dari data akhir. Jika dimulai dari data awal, maka data paling awal akan dibandingkan dengan data berikutnya, jika data awal lebih besar dari data berikutnya maka tukar posisi (swap). Dan pengecekan yang sama dilakukan terhadap data yang selanjutnya sampai dengan data yang terakhir. Kebalikanya, jika dimulai dari data paling akhir maka data paling akhir akan dibandingkan dengan data didepanya, jika data paling akhir lebih kecil dari data didepanya maka tukar posisi[4]. 

Berikut adalah contoh dari algoritma selection sort:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/0dbe0941-4a61-4fa6-9604-a200f8f6dbfe)

### 4. Selection Sort
Prosedur Selection Sort dalam bahasa C++
```C++
void selectSort(int arr[], int n) {
    int pos_min,temp;
        for (int i=0; i < n-1; i++) {
            pos_min = i;
                for (int j=i+1; j < n; j++) {
                if (arr[j] < arr[pos_min])
                    pos_min=j;
                }
        if (pos_min != i) {
            temp = arr[i];
            arr[i] = arr[pos_min];
            arr[pos_min] = temp;
        }
    }
}
```

Selection sort adalah suatu metode pengurutan yang membandingkan elemen yang sekarang dengan elemen berikutnya sampai ke elemen yang terakhir. Jika ditemukan elemen lain yang lebih kecil dari elemen sekarang maka dicatat posisinya dan langsung ditukar. Perbandingan dilakukan terus sampai tidak ada lagi pertukaran data. Kelebihan dari algoritma selection sort adalah sederhana dan mudah dipahami. Namun, kompleksitas waktunya adalah O(n^2), di mana n adalah jumlah elemen dalam array, sehingga tidak efisien untuk array besar.
![Screenshot 2024-04-11 100448](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/2725db52-cc52-4a4c-8e9e-6e733f5f180b)

Berikut adalah contoh dari algoritma selection sort:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/a7c294dc-ae5b-40ff-99a1-76cbd84b16cf)

## Guided 

### 1. Mengurutkan secara ascending untuk data numerik bertipe double menggunakan Algoritma Bubble Sort

```C++
#include <iostream>
using namespace std;

// Fungsi untuk mengurutkan array menggunakan algoritma bubble sort
void bubble_sort(double arr[], int length){
    bool not_sorted = true;
    int j=0;
    double tmp;

    //  Melakukan pengurutan hingga array sudah terurut
    while (not_sorted){
        not_sorted = false;
        j++;

        // Membandingkan dan menukar elemen
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i + 1]) {
                // Menukar elemen
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
            
                // Set not_sorted ke true karena ada perubahan
                not_sorted = true;
            }//end of if
        }//end of for loop
    }//end of while loop
}//end of bubble_sort

// Fungsi untuk mencetak isi array
void print_array(double a[], int length) {
    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    int length = 5; // Jumlah elemen dalam array
    double a[] = {22.1, 15.3, 8.2, 33.21, 99,99};

    cout << "Urutan bilangan sebelum sorting: " << endl;
    print_array(a, length);

    // Memanggil fungsi bubble_sprt untuk mengurutkan array
    bubble_sort(a, length);
    
    cout << "\nUrutan bilangan setelah sorting: " << endl;
    print_array(a, length);

    return 0;
}
```
Program tersebut merupakan implementasi algoritma Bubble Sort dalam bahasa C++ yang digunakan untuk mengurutkan array bilangan double. Program ini memiliki dua fungsi, yaitu 'bubble_sort()' dan 'print_array()'. Fungsi 'bubble_sort()' menerima array dan panjang array sebagai input dan mengurutkan array menggunakan algoritma Bubble Sort. Fungsi 'print_array()' menerima array dan panjang array sebagai input dan mencetak isi array. 

Dalam fungsi 'main()', program mendefinisikan array a yang berisi lima buah bilangan double presisi. Program mencetak array a sebelum diurutkan menggunakan fungsi 'print_array()'. Program kemudian memanggil fungsi 'bubble_sort()' untuk mengurutkan array a. Setelah array a diurutkan, program mencetak array a lagi menggunakan fungsi 'print_array()'.

### 2. Mengurutkan karakter secara descending (dari terbesar hingga terkecil) menggunakan Algoritma Insertion Sort

```C++
#include <iostream>
using namespace std;

// Fungsi untuk mengurutkan array secara descending menggunakan algoritma insertion sort
void insertion_sort(char arr[], int length) {
    int i, j;
    char tmp;

    for (i = 1; i < length; i++) {
        j = i;

        // Membandingkan dan menukar elemen
        while (j > 0 && arr[j - 1] < arr[j]) { // Perubahan terjadi di sini
            // Menukar elemen
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }//end of while loop
    }//end of for loop
}

// Fungsi untuk mencetak isis array
void print_array(char a[], int length) {
    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    int length = 6; // Jumlah elemen dalam array
    char a[length] = {'c', 'f', 'a', 'z', 'd', 'p'};

    cout << "Urutan karakter sebelum sorting: " << endl;
    print_array(a, length);

    // Memanggil fungsi insertion_sort_descending untuk mengurutkan aray secara descending
    insertion_sort(a, length);

    cout << "\nUrutan karakter setelah sorting: " << endl;
    print_array(a, length);

    return 0;
}
```
Program di atas adalah program C++ yang mengurutkan array karakter dengan menggunakan algoritma Insertion Sort. Program ini terdiri dari tiga bagian, yaitu:
- Fungsi 'insertion_sort': Fungsi ini menerima dua parameter, yaitu array dan panjang array. Algoritma Insertion Sort bekerja dengan membandingkan setiap elemen dengan elemen sebelumnya dan menukarnya jika diperlukan. Fungsi ini akan mengurutkan array dengan urutan descending (dari yang terbesar ke yang terkecil).
- Fungsi 'print_array': Fungsi ini menerima dua parameter, yaitu array dan panjang array. Fungsi ini akan mencetak isi array ke layar.
- Bagian 'main': Di sini, program membuat array karakter dengan 6 elemen dan mencetak isi array sebelum dan sesudah diurutkan. Program kemudian memanggil fungsi 'insertion_sort' untuk mengurutkan array dengan urutan descending.

## Unguided 

### 1. Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerima lembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS mahasiswa tersebut dari yang terbesar hingga terkecil dengan menggunakan algoritma Selection Sort! 

```C++
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
```
#### Output:
![Screenshot 2024-04-11 202128](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/6eab8648-20d2-4239-854e-f253c982de73)

Kode program di atas adalah implementasi algoritma Selection Sort dalam bahasa C++. Program dimulai dengan mengimpor pustaka iostream yang memungkinkan penggunaan fungsi input-output standar dalam C++. Kemudian, program mendefinisikan dua fungsi, yaitu `selectionSort` untuk mengurutkan array menggunakan algoritma Selection Sort, dan `printArray` untuk mencetak isi array. Dalam fungsi `main`, array yang berisi Indeks Prestasi Semester (IPS) mahasiswa diinisialisasi, dicetak sebelum diurutkan, kemudian diurutkan menggunakan algoritma Selection Sort (melalui fungsi `selectionSort`), dan akhirnya dicetak kembali setelah pengurutan dengan fungsi `printArray`. Program ini adalah program sederhana yang memberikan solusi untuk mengurutkan IPS mahasiswa secara descending dari yang tertinggi hingga terendah menggunakan algoritma Selection Sort.

#### Full code Screenshot:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/1617ba2f-e35e-4f60-9bbd-27b0e3b94fa6)

![Screenshot 2024-04-11 201919](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/df804a3d-ef35-48e4-b1f1-16608ce06001)

### 2. Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo, dan dadi. Supaya mudah dalam melakukan pencarian, Pak RT akan mengurutkan namanama tersebut sesuai dengan alfabet. Buatlah program untuk membantu Pak RT dengan menggunakan algoritma Bubble Sort!

```C++
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
```

#### Output:
![Screenshot 2024-04-11 202817](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/047cfdfd-6914-49e2-9a7c-249c514896db)

Program tersebut adalah contoh program yang menggunakan algoritma Bubble Sort dalam bahasa C++ untuk mengurutkan array string yang berisi nama-nama warga. Pertama, program mendeklarasikan dua fungsi, yaitu `bubbleSort` (dua loop bersarang digunakan untuk membandingkan dan menukar elemen-elemen yang tidak terurut) untuk mengurutkan array menggunakan algoritma Bubble Sort, dan `printArray` untuk mencetak isi array. Kemudian, di dalam fungsi `main`, array `names` yang berisi nama-nama warga diinisialisasi, dicetak sebelum diurutkan, lalu fungsi `bubbleSort` dipanggil untuk mengurutkan nama-nama warga secara alfabetis, dan terakhir nama-nama warga yang sudah diurutkan dicetak kembali.

#### Full code Screenshot:
![Screenshot 2024-04-11 203111](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/a09b8b54-7c37-4cf4-a84c-4f48d9a9b53c)

![Screenshot 2024-04-11 203214](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/a797b349-c03a-4cb9-a8d9-10749d7f8861)


### 3. Buatlah program yang meminta user menginputkan suatu bilangan n dan meminta user untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting secara menaik (ascending) dan menurun (descending)! 
![Screenshot 2024-04-11 135759](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/9f3e19a5-553d-4a01-b428-502cb3a0f042)

```C++
#include <iostream>
using namespace std;

// Fungsi untuk mengurutkan array secara ascending menggunakan algoritma insertion sort
void insertion_sort_ascending(char arr[], int length) {
    int i, j;
    char tmp;

    for (i = 1; i < length; i++) {
        j = i;

        // Membandingkan dan menukar elemen
        while (j > 0 && arr[j - 1] > arr[j]) {
            // Menukar elemen
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }//end of while loop
    }//end of for loop
}

// Fungsi untuk mencetak isi array
void insertion_sort_descending(char arr[], int length) {
    int i, j;
    char tmp;

    for (i = 1; i < length; i++) {
        j = i;

        while (j > 0 && arr[j - 1] < arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }
    }
}

void print_array(char a[], int length) {
    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Masukkan jumlah karakter: ";
    cin >> n;

    char arr[n];
    cout << "Masukkan " << n << " karakter: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "\nUrutan karakter secara ascending: " << endl;
    insertion_sort_ascending(arr, n);
    print_array(arr, n);

    cout << "\nUrutan karakter secara descending: " << endl;
    insertion_sort_descending(arr, n);
    print_array(arr, n);

    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}
```

#### Output:
![Screenshot 2024-04-11 203657](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/06cdbdb5-0595-42bb-a492-6b3b42dac9b5)

Program di atas adalah implementasi algoritma Insertion Sort dalam bahasa C++, yang bertujuan untuk mengurutkan sebuah array karakter baik secara naik (ascending) maupun turun (descending). Program dimulai dengan mendefinisikan dua fungsi utama: `insertion_sort_ascending` dan `insertion_sort_descending`. Fungsi `insertion_sort_ascending` digunakan untuk mengurutkan array secara naik menggunakan algoritma Insertion Sort, sementara `insertion_sort_descending` digunakan untuk mengurutkan array secara turun. Program juga menyertakan fungsi `print_array` yang bertugas mencetak isi array ke layar. Di dalam fungsi `main`, pengguna diminta untuk memasukkan jumlah karakter yang akan diurutkan, kemudian karakter-karakter tersebut dimasukkan ke dalam array. Setelah karakter dimasukkan, program melakukan pengurutan secara naik dan turun menggunakan fungsi yang sesuai, dan mencetak hasilnya. Algoritma Insertion Sort digunakan dalam kedua fungsi pengurutan, di mana setiap elemen dibandingkan dengan elemen-elemen sebelumnya dalam array, dan kemudian dipindahkan ke posisi yang benar hingga array diurutkan. Dengan demikian, program ini memberikan solusi sederhana untuk mengurutkan array karakter baik secara naik maupun turun menggunakan algoritma Insertion Sort.

#### Full code screenshot:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/36c82da4-266d-4438-9660-0124eef81e43)

![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/696d23f0-f7c9-459d-8375-d7c71767b33e)

![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/9722747c-921e-4c2e-a757-bd9eb7c5d7c8)

## Kesimpulan
Sorting atau pengurutan adalah proses menyusun elemen – elemen dari masukan awal acak menjadi keluaran akhir tertata dengan urutan tertentu. Algoritma sorting adalah teknik fundamental dalam ilmu komputer yang digunakan untuk mengurutkan elemen-elemen dalam suatu struktur data. Pengurutan data atau sorting merupakan salah satu jenis operasi penting dalam pengolahan data. Terdapat berbagai macam jenis algoritma sorting, tetapi diantaranya yang kita pelajari sekarang adalah insertion sort, bubble sort, dan selection sort. Algoritma Insertion Sort adalah algoritma sederhana yang secara berulang membandingkan setiap elemen dengan elemen-elemen sebelumnya dalam array. Ketika menemukan elemen yang lebih kecil (atau lebih besar) dari elemen sebelumnya, algoritma akan memindahkan elemen tersebut ke posisi yang benar dalam array. Algoritma Bubble Sort juga merupakan algoritma sederhana yang membandingkan dan menukar elemen berturut-turut dalam array. Pada setiap iterasi, elemen dengan nilai lebih kecil (atau lebih besar) akan "naik" ke atas array seperti gelembung. Algoritma Selection Sort adalah algoritma sederhana yang secara berulang memilih elemen terkecil (atau terbesar) dari sisa array yang belum diurutkan dan menukar elemen tersebut dengan elemen pertama dari sisa array. 

Dalam beberapa kasus tertentu, algoritma Insertion sort adalah algoritma sorting yang paling efisien. Namun secara keseluruhan, algoritma sorting seperti Insertion Sort, Bubble Sort, dan Selection Sort memiliki kelebihan dan kekurangan masing-masing. Pemilihan algoritma sorting yang tepat tergantung pada sifat data yang akan diurutkan, seperti ukuran array, keadaan awal array (hampir terurut atau acak), dan persyaratan efisiensi waktu dan ruang. 

## Referensi
[1]A. H. Saptadi and D. W. Sari, “ANALISIS ALGORITMA INSERTION SORT, MERGE SORT DAN IMPLEMENTASINYA DALAM BAHASA PEMROGRAMAN C++.” Available: https://repository.unsri.ac.id/17818/1/Jurnal_Infotel_2_-_Akatel_SP.pdf

[2]P. A. Rahayuningsih, “Analisis Perbandingan Kompleksitas Algoritma Pengurutan Nilai (Sorting),” EVOLUSI : Jurnal Sains dan Manajemen, vol. 4, no. 2, Feb. 2016, Available: https://ejournal.bsi.ac.id/ejurnal/index.php/evolusi/article/view/702/577. [Accessed: Apr. 11, 2024]

[3]R. R. Sitepu, M. Yusman, and F. E. Febriansyah, “IMPLEMENTASI ALGORITMA BUBBLE SORT DAN SELECTION SORT MENGGUNAKAN ARRAYLIST MULTIDIMENSI PADA PENGURUTAN DATA MULTI PRIORITAS,” Jurnal Komputasi, vol. 5, no. 1, Apr. 2017, Available: https://jurnal.fmipa.unila.ac.id/komputasi/article/view/1484/1228. [Accessed: Apr. 11, 2024]

[4]I. G. W. K. Jaya, I. B. N. W. Manuaba, K. R. Wijaya, I. P. S. P. Wardhana, I. M. A. Saputra, and I. G. A. Gunadi, “Analisis Komparasi Algoritma Sorting Antara Metode Brute Force dengan Divide and Conquer,” Jurnal Ilmu Komputer Indonesia(JIK), vol. 5, no. 2, 2020, Available: https://ejournal-pasca.undiksha.ac.id/index.php/jik/article/download/3461/1747. [Accessed: Apr. 11, 2024]