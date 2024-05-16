# <h1 align="center">Laporan Praktikum Modul Stack dan Queue</h1>
<p align="center">Habibah Ratna Fadhila Islami Hana</p>

## Dasar Teori

## A. Stack

Dalam dunia komputer, penggunaan stack atau tumpukan merupakan salah sastu komponen penting untuk menjamin proses penanganan suatu data disamping hal lain seperti quenue (antrian), linked list, dan tree [1]. Stack atau tumpukan adalah suatu stuktur data yang penting dalam pemrograman dengan metode pemrosesan yang bersifat LIFO (Last In First Out) dimana objek/benda yang terakhir masuk ke dalam stack akan menjadi benda pertama yang dikeluarkan dari stack [2]. Tumpukan dapat diartikan sebagai suatu kumpulan data yang seolah-olah terlihat seperti ada data yang diletakkan di atas data yang lain.

![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/8211adb1-4991-411d-a5e1-38783fea3e90)

Saat kita ingin mengambil data A, maka data-data yang berada di atasnya haruslah lebih dulu dikeluarkan [3].

![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/8a3e4abb-f0b0-4bd3-a630-042aa9612182)

![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/1f673bc8-9ca7-4026-8929-bef5db465d2d)

Operasi utama dalam stack adalah:
- `Push`: Menambahkan elemen baru ke atas stack.
- `Pop`: Menghapus elemen teratas dari stack.
- `Peek`: Melihat elemen teratas dari stack tanpa menghapusnya.
- `Clear` :  digunakan untuk mengosongkan stack
- `isEmpty`: Memeriksa apakah stack kosong.
- `isFull`: Memeriksa apakah stack penuh (terutama pada implementasi dengan batasan ukuran).

## B. Queue
Kebalikan dari stack, queue (antrian) adalah suatu jenis struktur data yang dapat diproses dengan sifat FIFO (First In First Out), dimana elemen yang pertama kali masuk ke antrian akan keluar pertama kalinya [2]. Queue adalah struktur data linier yang menyimpan serangkaian elemen yang diatur dalam urutan linier.

Queue terdiri dari serangkaian elemen yang terhubung satu sama lain. Setiap elemen dalam queue memiliki dua operasi dasar: 
- `Enqueue`: Operasi ini digunakan untuk menambahkan elemen baru ke dalam antrian. Elemen baru ini akan diletakkan di bagian belakang (rear) dari queue.
- `Dequeue`: Operasi ini digunakan untuk menghapus elemen pertama dari antrian. Elemen pertama ini akan dihapus dari bagian depan (front) dari queue.
Selain itu, ada beberapa operasi tambahan yang sering digunakan pada queue:
- `Peek`/`Front`: Melihat elemen pertama dari antrian tanpa menghapusnya.
- `Size` : Menghitung jumlah elemen dalam queue.
- `isEmpty`: Memeriksa apakah antrian kosong.
- `isFull`: Memeriksa apakah antrian penuh (pada implementasi dengan batasan ukuran).
  
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/20b31f4b-cfe4-4c49-b513-5ed47c30416a)

## Guided 

### 1. Stack

```C++
#include <iostream>
using namespace std;

string arrayBuku[5];
int maksimal = 5, top = 0;

bool isFull() {
    return (top == maksimal);
}

bool isEmpty() {
    return (top == 0);
}

void pushArrayBuku(string data) {
    if (isFull()) {
        cout << "Data telah penuh" << endl;
    } else {
        arrayBuku[top] = data;
        top++;
    }
}

void popArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dihapus" << endl;
    } else {
        arrayBuku[top - 1] = "";
        top--;
    }
}

void peekArrayBuku(int posisi) {
    if (isEmpty()) {
        cout << "Tidak ada data yang bisa dilihat" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        cout << "Posisi ke " << posisi << " adalah " << arrayBuku[index] << endl;
    }
}

int countStack() {
    return top;
}

void changeArrayBuku(int posisi, string data) {
    if (posisi > top) {
        cout << "Posisi melebihi data yang ada" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        arrayBuku[index] = data;
    }
}

void destroyArraybuku() {
    for (int i = top; i >= 0; i--) {
        arrayBuku[i] = "";
    }
    top = 0;
}

void cetakArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dicetak" << endl;
    } else {
        for (int i = top - 1; i >= 0; i--) {
            cout << arrayBuku[i] << endl;
        }
    }
}

int main() {
    pushArrayBuku("Kalkulus");
    pushArrayBuku("Struktur Data");
    pushArrayBuku("Matematika Diskrit");
    pushArrayBuku("Dasar Multimedia");
    pushArrayBuku("Inggris");

    cetakArrayBuku();
    cout << "\n";
    cout << "Apakah data stack penuh? " << isFull() << endl;
    cout << "Apakah data stack kosong? " << isEmpty() << endl;
    peekArrayBuku(2);
    popArrayBuku();
    cout << "Banyaknya data = " << countStack() << endl;
    changeArrayBuku(2, "Bahasa Jerman");
    cout << endl;
    cetakArrayBuku();
    cout << "\n";
    destroyArraybuku();
    cout << "Jumlah data setelah dihapus: " << top << endl;
    cetakArrayBuku();

    return 0;
}
```

Kode di atas adalah implementasi sederhana dari struktur data stack menggunakan array dalam bahasa C++. Tujuannya adalah untuk menyimpan daftar buku dalam stack dan melakukan operasi-operasi dasar seperti menambah, menghapus, melihat, dan mengubah data buku.

Pada awalnya, program mendefinisikan sebuah array bernama `arrayBuku` yang memiliki ukuran maksimal 5 untuk menyimpan data buku. Variabel `maksimal` digunakan untuk menyimpan ukuran maksimal stack, sedangkan `top` menunjukkan posisi teratas dalam stack.

Kemudian, program mendefinisikan beberapa fungsi utama seperti:
- `pushArrayBuku(string data)`: Menambahkan data buku baru ke dalam stack. Jika stack sudah penuh, akan diberikan pesan "Data telah penuh".
- `popArrayBuku()`: Menghapus data buku teratas dari stack. Jika stack kosong, akan diberikan pesan "Tidak ada data yang dihapus".
- `peekArrayBuku(int posisi)`: Melihat data buku pada posisi tertentu di stack tanpa menghapusnya. Jika stack kosong, akan diberikan pesan "Tidak ada data yang bisa dilihat".
- `countStack()`: Mengembalikan jumlah data buku dalam stack.
- `changeArrayBuku(int posisi, string data)`: Mengubah data buku pada posisi tertentu di stack. Jika posisi melebihi jumlah data yang ada, akan diberikan pesan "Posisi melebihi data yang ada".
- `destroyArraybuku()`: Menghapus semua data buku dari stack.
- `cetakArrayBuku()`: Mencetak semua data buku dalam stack, dimulai dari elemen teratas hingga elemen terbawah. Jika stack kosong, akan diberikan pesan "Tidak ada data yang dicetak".

Di dalam fungsi `main()`, dilakukan serangkaian operasi untuk menguji fungsi-fungsi tersebut. Data buku ditambahkan ke dalam stack menggunakan `pushArrayBuku()`, kemudian berbagai operasi lainnya seperti penghapusan, pencarian, dan penggantian data dilakukan. Setelah selesai, semua data dihapus dari stack menggunakan `destroyArraybuku()`.

### 2. Queue

```C++
#include <iostream>
using namespace std;

const int maksimalQueue = 5; // Maksimal antrian
int front = 0; // Penanda depan antrian
int back = 0; // Penanda belakang antrian
string queueTeller[5]; // Array untuk menyimpan antrian

bool isFull() { // Pengecekan antrian penuh atau tidak
    if (back == maksimalQueue) {
        return true; // =1
    } else {
        return false;
    }
}

bool isEmpty() { // Antrian kosong atau tidak
    if (back == 0) {
        return true;
    } else {
        return false;
    }
}

void enqueueAntrian(string data) { // Menambahkan antrian
    if (isFull()) {
        cout << "Antrian penuh" << endl;
    } else {
        if (isEmpty()) { // Jika antrian kosong
            queueTeller[0] = data;
            front++;
            back++;
        } else { // Jika antrian ada isi
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeueAntrian() { // Mengurangi antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }
        back--;
    }
}

int countQueue() { // Menghitung jumlah antrian
    return back;
}

void clearQueue() { // Menghapus semua antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

void viewQueue() { // Melihat isi antrian
    cout << "Data antrian teller:" << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queueTeller[i] != "") {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        } else {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

int main() {
    enqueueAntrian("Andi");
    enqueueAntrian("Maya");
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    return 0;
}
```

Program tersebut adalah implementasi sederhana dari struktur data queue menggunakan array dalam bahasa C++. Tujuannya adalah untuk membuat simulasi antrian teller, di mana pelanggan ditambahkan ke antrian dan kemudian dilayani berdasarkan urutan kedatangan mereka.

Pertama, program akan mendefinisikan beberapa variabel global dan array. `maksimalQueue` adalah konstanta yang menentukan ukuran maksimum antrian. `front` dan `back` adalah penunjuk yang menandai posisi depan dan belakang antrian.`queueTeller` adalah array yang digunakan untuk menyimpan nama-nama pelanggan dalam antrian.

Kemudian program mendefinisikan beberapa fungsi utama seperti:
- isFull():
    - Fungsi ini memeriksa apakah antrian penuh atau tidak.
    - Antrian dikatakan penuh jika penunjuk belakang (back) sudah mencapai ukuran maksimal antrian.
- isEmpty():
    - Fungsi ini memeriksa apakah antrian kosong atau tidak.
    - Antrian dikatakan kosong jika penunjuk belakang (back) bernilai 0.
- enqueueAntrian(string data):
    - Fungsi ini menambahkan nama pelanggan ke dalam antrian.
    - Jika antrian penuh, akan dicetak pesan "Antrian penuh".
    - Jika antrian kosong, nama pelanggan ditambahkan di indeks 0 dan penunjuk depan dan belakang dinaikkan.
    - Jika antrian sudah memiliki elemen, nama pelanggan ditambahkan di belakang antrian (back).
- dequeueAntrian():
    - Fungsi ini menghapus nama pelanggan yang telah dilayani dari depan antrian.
    - Jika antrian kosong, akan dicetak pesan "Antrian kosong".
    - Jika tidak, nama-nama pelanggan akan digeser ke depan untuk mengisi posisi yang telah dihapus, dan penunjuk belakang (back) akan dikurangi.
- countQueue():
    - Fungsi ini mengembalikan jumlah pelanggan dalam antrian.
- clearQueue():
    - Fungsi ini menghapus semua nama pelanggan dari antrian.
    - Semua elemen dalam array queueTeller diatur ulang menjadi string kosong, dan penunjuk depan dan belakang diatur kembali ke 0.
- viewQueue():
    - Fungsi ini mencetak semua nama pelanggan dalam antrian beserta nomor urutannya.
    - Jika ada slot kosong dalam antrian, akan dicetak "(kosong)".

Pada fungsi `main()`, dilakukan serangkaian operasi untuk menguji fungsi-fungsi yang telah didefinisikan sebelumnya. Pelanggan ditambahkan ke dalam antrian menggunakan `enqueueAntrian()`. Berbagai operasi lainnya, seperti penghapusan, penghitungan jumlah antrian, dan penghapusan seluruh antrian, juga dilakukan. Setelah selesai, status terbaru dari antrian dicetak.

## Unguided 

### 1. Buatlah program untuk menentukan apakah kalimat tersebut yang diinputkan dalam program stack adalah palindrom/tidak. Palindrom kalimat yang dibaca dari depan dan belakang sama. Jelaskan bagaimana cara kerja programnya.
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/97181094-b14e-49d4-8ece-9c316c767e77)

```C++
#include <iostream> // Mengimport library input-output
#include <string> // Mengimport library string
#include <algorithm> // Mengimport library algorithm, untuk memakai fungsi reverse() yang berguna untuk membalikkan string.
#include <cctype> // Mengimport library cctype untuk fungsi tolower

using namespace std;

bool adalahPalindrom(const string& kalimat) { // Fungsi untuk memeriksa apakah kalimat adalah palindrom
    string hurufKecil; // String untuk menyimpan huruf kecil dari kalimat
    for (char c : kalimat) { // Looping setiap karakter dalam kalimat
        if (!isspace(c)) { // Jika karakter bukan spasi
            hurufKecil += tolower(c); // Konversi karakter ke huruf kecil dan tambahkan ke string hurufKecil
        }
    }

    string dibalik = hurufKecil;
    reverse(dibalik.begin(), dibalik.end());

    return hurufKecil == dibalik;
}

int main() { // Fungsi utama program
    string kalimat; // String untuk menyimpan kalimat input
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    if (adalahPalindrom(kalimat)) { // Periksa apakah kalimat adalah palindrom
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }

    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}
```
#### Output:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/b2238b6f-194a-4d53-a54f-7877d0bf866a)
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/ee547bb7-3796-4936-b5df-44221523dd79)

Program tersebut adalah sebuah program sederhana dalam bahasa C++ yang bertujuan untuk memeriksa apakah sebuah kalimat yang dimasukkan pengguna adalah palindrom atau tidak. Sebuah kalimat dikatakan palindrom jika kalimat tersebut dapat dibaca sama baiknya dari depan maupun dari belakang. 

Program mengimpor beberapa library yang diperlukan, yaitu iostream untuk input-output, string untuk pengolahan string, algorithm untuk fungsi reverse(), dan cctype untuk fungsi tolower().

- Fungsi `adalahPalindrom(const string& kalimat)`:

Fungsi ini bertugas untuk memeriksa apakah kalimat yang diberikan merupakan palindrom. Pertama-tama, program menginisialisasi string kosong `hurufKecil` untuk menyimpan semua huruf kecil dari kalimat input. Selanjutnya, program melakukan iterasi melalui setiap karakter dalam kalimat. Jika karakter bukan spasi, program akan mengonversi karakter tersebut menjadi huruf kecil menggunakan fungsi `tolower()` dan kemudian menambahkannya ke dalam string `hurufKecil`.

Program kemudian membuat salinan string `hurufKecil` dan membalikkannya menggunakan fungsi `reverse()` dari library algorithm. Hasilnya disimpan dalam string `dibalik`. Akhirnya, program membandingkan string `hurufKecil` dengan string `dibalik` dan mengembalikan true jika kedua string tersebut sama, dan false jika tidak.

- Fungsi `main()`:
Di dalam fungsi `main()`, program meminta pengguna untuk memasukkan sebuah kalimat. Kalimat tersebut dibaca menggunakan fungsi `getline()` dan disimpan dalam variabel `kalimat`. Kemudian, program memanggil fungsi `adalahPalindrom()` untuk memeriksa apakah kalimat tersebut adalah palindrom atau bukan. Lalu program akan mencetak hasilnya.

#### Full code Screenshot:
![modul 7 - unguided 1](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/6114c9e7-a3db-4083-a02d-813147823d3c)

### 2. Ubah guided queue diatas agar menjadi program inputan user dan program menu

```C++
#include <iostream>
using namespace std;

const int maksimalQueue = 7; // Maksimal antrian
int front = 0; // Penanda depan antrian
int back = 0; // Penanda belakang antrian
string queueTeller[5]; // Array untuk menyimpan antrian

void showMenu() {
    cout << "=== Program Antrian Teller ===" << endl;
    cout << "1. Tambah antrian" << endl;
    cout << "2. Hapus antrian" << endl;
    cout << "3. Lihat antrian" << endl;
    cout << "4. Jumlah antrian" << endl;
    cout << "5. Hapus semua antrian" << endl;
    cout << "6. Keluar" << endl;
    cout << "Pilih menu: ";
}

bool isFull() { // Pengecekan antrian penuh atau tidak
    if (back == maksimalQueue) {
        return true; // =1
    } else {
        return false;
    }
}

bool isEmpty() { // Antrian kosong atau tidak
    if (back == 0) {
        return true;
    } else {
        return false;
    }
}

void enqueueAntrian(string data) { // Menambahkan antrian
    if (isFull()) {
        cout << "Antrian penuh" << endl;
    } else {
        if (isEmpty()) { // Jika antrian kosong
            queueTeller[0] = data;
            front++;
            back++;
        } else { // Jika antrian ada isi
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeueAntrian() { // Mengurangi antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }
        back--;
    }
}

int countQueue() { // Menghitung jumlah antrian
    return back;
}

void clearQueue() { // Menghapus semua antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

void viewQueue() { // Melihat isi antrian
    cout << "Data antrian teller:" << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queueTeller[i] != "") {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        } else {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

int main() {
    int choice;
    string input;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan nama: ";
                cin.ignore();
                getline(cin, input);
                enqueueAntrian(input);
                break;
            case 2:
                dequeueAntrian();
                break;
            case 3:
                viewQueue();
                break;
            case 4:
                cout << "Jumlah antrian = " << countQueue() << endl;
                break;
            case 5:
                clearQueue();
                break;
            case 6:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid" << endl;
        }

    } while (choice != 6);

    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}
```
#### Output:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/f4b4bc51-9234-45d6-8629-b06b20269105)

![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/6413b3ff-c40f-49f9-a806-b367eecc8ae4)

![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/e67d4490-4d09-4733-bda9-2c65ecd7b671)

![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/f72df45b-493f-4905-97f6-9e8152c83bf1)

![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/04b1722f-bd49-4b50-ad44-325e6a8fda86)

Program di atas adalah program C++ yang mengimplementasikan simulasi antrian teller menggunakan array. Program ini menyediakan beberapa opsi menu untuk melakukan operasi pada antrian, seperti menambahkan antrian, menghapus antrian, melihat antrian, menghitung jumlah antrian, menghapus semua antrian, dan keluar dari program.

Pertama, program mengimpor library iostream untuk input-output. Kemudian program mendefinisikan beberapa variabel global yang digunakan seperti `maksimalQueue` untuk menentukan ukuran maksimal antrian, `front` dan `back` sebagai penanda depan dan belakang antrian, serta `queueTeller` sebagai array untuk menyimpan antrian. 

Fungsi `showMenu()`: Fungsi ini menampilkan menu pilihan operasi yang tersedia pada program.

Fungsi-fungsi utama:
- `isFull()`: Fungsi ini memeriksa apakah antrian penuh atau tidak. Antrian dikatakan penuh jika penunjuk belakang (`back`) sudah mencapai ukuran maksimal antrian.
- `isEmpty()`: Fungsi ini memeriksa apakah antrian kosong atau tidak. Antrian dikatakan kosong jika penunjuk belakang (`back`) bernilai 0.
- `enqueueAntrian(string data)`: Fungsi ini menambahkan nama pelanggan ke dalam antrian. Jika antrian penuh, akan dicetak pesan "Antrian penuh". Jika antrian kosong, nama pelanggan ditambahkan di indeks 0 dan penunjuk depan dan belakang dinaikkan. Jika antrian sudah memiliki elemen, nama pelanggan ditambahkan di belakang antrian (`back`).
- `dequeueAntrian()`: Fungsi ini menghapus nama pelanggan yang telah dilayani dari depan antrian. Jika antrian kosong, akan dicetak pesan "Antrian kosong". Jika tidak, nama-nama pelanggan akan digeser ke depan untuk mengisi posisi yang telah dihapus, dan penunjuk belakang (`back`) akan dikurangi.
- `countQueue()`: Fungsi ini mengembalikan jumlah pelanggan dalam antrian.
- `clearQueue()`: Fungsi ini menghapus semua nama pelanggan dari antrian. Semua elemen dalam array `queueTeller` diatur ulang menjadi string kosong, dan penunjuk depan dan belakang diatur kembali ke 0.
- `viewQueue()`: Fungsi ini mencetak semua nama pelanggan dalam antrian beserta nomor urutannya. Jika ada slot kosong dalam antrian, akan dicetak "(kosong)".

Pada fungsi `main()` yang merupakan fungsi utama program, terdapat sebuah loop `do-while` yang akan terus berjalan hingga pengguna memilih opsi untuk keluar. Setiap iterasi loop, program akan menampilkan menu pilihan operasi menggunakan fungsi `showMenu()` dan mengambil pilihan pengguna. Kemudian, program akan memanggil fungsi yang sesuai berdasarkan pilihan pengguna menggunakan switch-case.

#### Full code Screenshot:
![modul 7 - unguided 2](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/d43f11b0-2bf8-4184-ae47-8b0fee8ba131)

## Kesimpulan

Stack adalah struktur data linier yang mengikuti aturan LIFO (Last In, First Out). Elemen baru ditambahkan ke atas tumpukan, dan elemen yang ingin diakses atau dihapus adalah elemen yang paling atas. Cara kerja ini seperti tumpukan piring, di mana piring yang paling atas adalah yang paling mudah diakses dan diambil. Sedangkan Queue adalah struktur data linier yang mengikuti aturan FIFO (First In, First Out). Elemen baru ditambahkan ke ujung belakang antrian, dan elemen yang diakses atau dihapus adalah elemen yang paling depan. Cara kerja ini seperti antrian, di mana orang yang paling depan dalam antrian adalah yang pertama dilayani.

## Referensi

[1]D. Alfajar, “Struktur Data (Pengertian Stack),” www.academia.edu, 2019, Available: https://www.academia.edu/85949141/Struktur_Data_Pengertian_Stack_. [Accessed: May 16, 2024]

[2]J. Sihombing, “PENERAPAN STACK DAN QUEUE PADA ARRAY DAN LINKED LIST DALAM JAVA,” Jun. 29, 2020. Available: https://www.researchgate.net/publication/342523033_PENERAPAN_STACK_DAN_QUEUE_PADA_ARRAY_DAN_LINKED_LIST_DALAM_JAVA. [Accessed: May 16, 2024]

[3]Kenkeina, “STACK DAN QUEUE,” www.academia.edu, Available: https://www.academia.edu/24191848/STACK_DAN_QUEUE. [Accessed: May 16, 2024]
