# <h1 align="center">Laporan Praktikum Modul Single and Double Linked List</h1>
<p align="center">Habibah Ratna Fadhila Islami Hana</p>

## Dasar Teori
Linked List merupakan salah satu metode dalam Algoritma dan Struktur Data yang digunakan untuk mengorganisasi struktur data dalam sebuah sistem. Linked List memiliki keunggulan dibandingkan Array dalam hal menambahkan dan mengurangi elemennya [1]. Linked List berisi kumpulan data (node) yang tersusun secara sekuensial, saling sambung menyambung, dinamis dan terbatas. Linked List sering disebut juga Senarai Berantai. Linked List saling terhubung dengan bantuan variabel pointer. Masing-masing data dalam Linked List disebut dengan node (simpul) yang menempati alokasi memori secara dinamis dan biasanya berupa struct yang terdiri dari beberapa field [2]. 
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/9f66afe4-bff6-46ba-876e-4bd276e4fe34)

Linked List terdiri dari:
### Single Linked List
Single Linked List adalah suatu kumpulan elemen data (yang disebut sebagai node) dimana urutannya ditentukan secara sekuensial satu sama lain oleh suatu pointer. Single Linked List hanya memiliki 1 (satu) petunjuk/pointer (NEXT) [3]. 

Fitur utama dari single linked list adalah sebagai berikut:
- Simpul (Node): Setiap simpul dalam linked list berisi dua bagian utama, yaitu data yang menyimpan nilai atau informasi yang ingin disimpan (INFO), dan pointer yang menunjukkan ke simpul berikutnya dalam urutan (NEXT). Struktur simpul ini memungkinkan penyimpanan data dalam urutan tertentu.
- Pointer: Pointer adalah variabel yang menyimpan alamat memori dari variabel atau objek lain. Dalam single linked list, setiap simpul memiliki pointer yang menunjukkan ke simpul berikutnya dalam urutan. Ini memungkinkan kita untuk mengakses simpul-simpul dalam linked list secara berurutan.
- Head: Head adalah pointer yang menunjukkan ke simpul pertama dalam linked list. Dengan menggunakan head, kita dapat mengakses seluruh linked list karena head merupakan titik awal dari linked list tersebut.
- Tail: Tail adalah pointer yang menunjukkan ke simpul terakhir dalam linked list. Tail memungkinkan kita untuk menambahkan elemen baru ke linked list dengan lebih efisien karena kita tidak perlu mencari simpul terakhir setiap kali kita ingin menambahkan elemen baru.

Operasi-operasi dasar yang dapat dilakukan pada single linked list meliputi penambahan elemen (insertion), penghapusan elemen (deletion), pencarian elemen (search), dan traversal (mengunjungi setiap elemen dari awal hingga akhir linked list).
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/e769d32c-5dab-4283-86cd-69749d8d9f2f)

### Double Linked List
Double Linked List adalah suatu linked list yang mempunyai 2 penunjuk yaitu penunjuk ke simpul sebelumnya dan ke simpul berikutnya. Double linked list dibentuk dengan menyusun sejumlah elemen sehingga pointer next menunjuk ke elemen yang mengikutinya dan pointer back menunjuk ke elemen yang mendahuluinya [4].

Double Linked List merupakan jenis linked list yang memiliki 2 pointer. 1 pointer menunjuk ke node selanjutnya (next) dan 1 lagi menunjuk ke node sebelumnya (prev). Pada node head, pointer prev akan bernilai NULL karena node Head adalah node pertama. Pada node Tail, pointer next akan menunjuk ke NULL.

Fitur utama dari double linked list adalah sebagai berikut:
- Simpul (Node): Setiap simpul dalam double linked list memiliki dua bagian utama, yaitu data yang menyimpan nilai atau informasi yang ingin disimpan, pointer yang menunjukkan ke simpul sebelumnya (previous), dan pointer yang menunjukkan ke simpul berikutnya (next). Struktur simpul ini memungkinkan penyimpanan data dalam urutan tertentu serta traversal maju dan mundur.
- Pointer Previous dan Next: Setiap simpul dalam double linked list memiliki dua pointer, yaitu pointer yang menunjukkan ke simpul sebelumnya (previous) dan pointer yang menunjukkan ke simpul berikutnya (next). Dengan adanya dua pointer ini, kita dapat melakukan traversal maju dan mundur dalam linked list dengan efisien.
- Head dan Tail: Seperti pada single linked list, double linked list juga memiliki pointer head yang menunjukkan ke simpul pertama dalam linked list, dan pointer tail yang menunjukkan ke simpul terakhir. Head memungkinkan kita untuk mengakses seluruh linked list dari awal, sementara tail memungkinkan kita untuk menambahkan elemen baru ke linked list dengan lebih efisien.

Operasi-operasi dasar yang dapat dilakukan pada double linked list meliputi penambahan elemen (insertion), penghapusan elemen (deletion), pencarian elemen (search), dan traversal (mengunjungi setiap elemen dari awal hingga akhir atau sebaliknya).
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/871f346c-1ce6-4b46-b8df-c1411e2c330c)

Kelebihan double linked list dibandingkan dengan single linked list adalah kemampuannya untuk traversal maju dan mundur dengan cepat, serta fleksibilitas dalam operasi-insert dan delete karena setiap simpul memiliki pointer previous dan next. Namun, double linked list membutuhkan lebih banyak ruang memori karena setiap simpul harus menyimpan dua pointer.

## Guided 

### 1. Latihan Single Linked List

```C++
#include <iostream>
using namespace std;

///PROGRAM SINGLE LINKED LIST NON-CIRCULAR
//Deklarasi Struct Node
struct Node{
    //komponen/member
    int data;
    Node *next;
};
    Node *head; // pointer
    Node *tail;
//Inisialisasi Node
void init(){
    head = NULL; // inisiasi
    tail = NULL;
}
// Pengecekan
bool isEmpty(){
    if (head == NULL) // cek kosong atau ngga
    return true;
    else
    return false;
}
//Tambah Depan
void insertDepan(int nilai){
    //Buat Node baru
    Node *baru = new Node; 
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
        baru->next = head;
        head = baru;
    }
}
//Tambah Belakang
void insertBelakang(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
    tail->next = baru;
    tail = baru;
    }
}
//Hitung Jumlah List
int hitungList(){
    Node *hitung;
    hitung = head;
    int jumlah = 0;
    while( hitung != NULL ){
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}
//Tambah Tengah
void insertTengah(int data, int posisi){
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        Node *baru, *bantu;
        baru = new Node();
        baru->data = data;
        // tranversing
            bantu = head;
            int nomor = 1;
        while( nomor < posisi - 1 ){
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}
//Hapus Depan
void hapusDepan() { 
    Node *hapus; // pointer hapus
    if (isEmpty() == false){
        if (head->next != NULL){ // cek ada di list apa ngga
            hapus = head; // kalau ada, maka hapus menjadi head yang lama
            head = head->next; // head yang baru berubah ke sebelahnya
            delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Belakang
void hapusBelakang() {
    Node *hapus;
    Node *bantu;
    if (isEmpty() == false){ // pengecekan, kosong atau ngga
        if (head != tail){
            hapus = tail;
            bantu = head;
            while (bantu->next != tail){
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
        delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Tengah
void hapusTengah(int posisi){
    Node *hapus, *bantu, *bantu2;
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        int nomor = 1;
        bantu = head;
        while( nomor <= posisi ){
            if( nomor == posisi-1 ){
                bantu2 = bantu;
            }
            if( nomor == posisi ){
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
    delete hapus;
    }
}
//Ubah Depan
void ubahDepan(int data){
    if (isEmpty() == false){
        head->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Tengah
void ubahTengah(int data, int posisi){
    Node *bantu;
    if (isEmpty() == false){
        if( posisi < 1 || posisi > hitungList() ){
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if( posisi == 1){
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else{
            bantu = head;
            int nomor = 1;
            while (nomor < posisi){
                bantu = bantu->next;nomor++;
            }
            bantu->data = data;
        }
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Belakang
void ubahBelakang(int data){
    if (isEmpty() == false){
        tail->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Hapus List
void clearList(){
    Node *bantu, *hapus;
    bantu = head;
    while (bantu != NULL){
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}
//Tampilkan List
void tampil(){
    Node *bantu;
    bantu = head;
    if (isEmpty() == false){
        while (bantu != NULL){
            cout << bantu->data << ends;
            bantu = bantu->next;
        }
        cout << endl;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
int main(){
    init();
    insertDepan(3);
    tampil();
    insertBelakang(5);
    tampil();
    insertDepan(2);
    tampil();
    insertDepan(1);
    tampil();
    hapusDepan();
    tampil();
    hapusBelakang();
    tampil();
    insertTengah(7,2);
    tampil();
    hapusTengah(2);
    tampil();
    ubahDepan(1);
    tampil();
    ubahBelakang(8);
    tampil();
    ubahTengah(11, 2);
    tampil();

    insertTengah(7,1);
    tampil();
    return 0;
}
``` 
Program ini merupakan implementasi dari sebuah single linked list non-circular menggunakan bahasa pemrograman C++. Pertama, program akan mendeklarasikan struct `Node` yang terdiri dari dua anggota yaitu, `data` yang merupakan integer untuk menyimpan nilai, dan `next` yang merupakan pointer yang menunjuk ke simpul (Node) berikutnya dalam linked list. Kemudian, program akan mendeklarasikan variabel `head` dan `tail` yang merupakan pointer yang menunjuk ke simpul pertama dan terakhir dalam linked list.

Fungsi `init()` akan menginisialisasi `head` dan `tail` menjadi `NULL`, menandakan bahwa linked list kosong. Lalu fungsi `isEmpty()` akan memeriksa apakah linked list kosong dengan memeriksa apakah `head` adalah `NULL`. Jika `head` adalah `NULL`, maka linked list kosong dan fungsi mengembalikan `true`, jika tidak, fungsi mengembalikan `false`.

Operasi pada single linked list:

a. `insertDepan(int nilai)`
   - Fungsi ini menambahkan simpul baru di depan linked list dengan nilai `nilai`.
   - Jika linked list kosong, simpul baru menjadi `head` dan `tail`.
   - Jika tidak, simpul baru ditambahkan di depan `head` dan `head` diperbarui.

b. `insertBelakang(int nilai)`
   - Fungsi ini menambahkan simpul baru di belakang linked list dengan nilai `nilai`.
   - Jika linked list kosong, simpul baru menjadi `head` dan `tail`.
   - Jika tidak, simpul baru ditambahkan setelah `tail` dan `tail` diperbarui.

c. `hitungList()`
   - Fungsi ini menghitung jumlah simpul dalam linked list dengan menghitung dari `head` hingga `NULL`.

d. `insertTengah(int data, int posisi)`
   - Fungsi ini menambahkan simpul baru di posisi tertentu dalam linked list.
   - Fungsi ini mengambil dua parameter: `data` yang merupakan nilai untuk simpul baru dan `posisi` yang menunjukkan posisi di mana simpul baru akan dimasukkan.
   - Jika posisi diluar jangkauan atau posisi bukan posisi tengah, pesan kesalahan akan dicetak.
   - Jika tidak, simpul baru akan dimasukkan di antara simpul-simpul yang ada.

e. `hapusDepan()`
   - Fungsi ini menghapus simpul pertama dari linked list.
   - Jika linked list tidak kosong, simpul pertama dihapus dan `head` diperbarui.
   - Jika simpul yang dihapus adalah simpul terakhir, `head` dan `tail` diatur menjadi `NULL`.

f. `hapusBelakang()`
   - Fungsi ini menghapus simpul terakhir dari linked list.
   - Jika linked list tidak kosong, simpul terakhir dihapus dan `tail` diperbarui.
   - Jika simpul yang dihapus adalah simpul pertama, `head` dan `tail` diatur menjadi `NULL`.

g. `hapusTengah(int posisi)`
   - Fungsi ini menghapus simpul pada posisi tertentu dalam linked list.
   - Jika posisi diluar jangkauan atau posisi bukan posisi tengah, pesan kesalahan akan dicetak.
   - Jika tidak, simpul pada posisi yang ditentukan akan dihapus.

h. `ubahDepan(int data)`
   - Fungsi ini mengubah nilai data dari simpul pertama dalam linked list.

i. `ubahTengah(int data, int posisi)`
   - Fungsi ini mengubah nilai data dari simpul pada posisi tertentu dalam linked list.

j. `ubahBelakang(int data)`
   - Fungsi ini mengubah nilai data dari simpul terakhir dalam linked list.

k. `clearList()`
   - Fungsi ini menghapus semua simpul dalam linked list dengan membebaskan memori yang dialokasikan untuk setiap simpul.

l. `tampil()`
   - Fungsi ini menampilkan isi linked list dengan menelusuri setiap simpul dari `head` hingga `NULL` dan mencetak nilai data dari setiap simpul.

Pada fungsi `main()` yang merupakan titik masuk program, fungsi-fungsi di atas dipanggil untuk melakukan operasi pada linked list seperti penambahan, penghapusan, perubahan, dan penampilan isi linked list. Terakhir, program akan menampilkan hasil dari setiap operasi.

### 2. Latihan Double Linked List

```C++
#include <iostream>
using namespace std;

class Node {
    public:int data;
    Node* prev;
    Node* next;
};
class DoublyLinkedList {
        public:
        Node* head;
        Node* tail;
        DoublyLinkedList() {
            head = nullptr;
            tail = nullptr;
    }
    void push(int data) { // tambah depan
        Node* newNode = new Node;
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        } 
        else {
            tail = newNode;
        }
        head = newNode;
    }
    void pop() { // tambah belakang
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } 
        else {
            tail = nullptr;
        }
        delete temp;
    }
    bool update(int oldData, int newData) { // ubah data
        Node* current = head;
        while (current != nullptr) {
            if (current->data == oldData) {
                current->data = newData;
                return true;
            }
            current = current->next;
        }
        return false;
    }
    void deleteAll() { // hapus semua
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};


int main() {
    DoublyLinkedList list; // memanggil fungsi lisst
    while (true) { // pakai program menu
        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int data;
                cout << "Enter data to add: ";
                cin >> data;
                list.push(data);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                int oldData, newData;
                cout << "Enter old data: ";
                cin >> oldData;
                cout << "Enter new data: ";
                cin >> newData;
                bool updated = list.update(oldData, newData);
                if (!updated) {
                    cout << "Data not found" << endl;
                }
                break;
            }
            case 4: {
                list.deleteAll();
                break;
            }
            case 5: {
                list.display();
                break;
            }
            case 6: {
                return 0;
            }
            default: {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    return 0;
}
```
Program ini merupakan implementasi dari sebuah doubly linked list yang menggunakan bahasa pemrograman C++. Pertama, program akan mendeklarasikan class `Node` yang memiliki tiga anggota data yaitu,`data` untuk menyimpan nilai, `prev` yang merupakan pointer ke node sebelumnya, dan `next` yang merupakan pointer ke node selanjutnya dalam linked list. Lalu, program akan mendeklarasikan class `DoublyLinkedList` yang memiliki dua pointer `head` dan `tail` yang menunjuk ke node pertama dan terakhir dalam linked list serta menginisialisasi `head` dan `tail` menjadi `nullptr` untuk menandakan bahwa linked list kosong.

Operator pada double linked list:

a. `push(int data)`
   - Fungsi ini menambahkan node baru di depan linked list dengan nilai `data`.
   - Node baru diinisialisasi dengan nilai `data`, `prev` diatur menjadi `nullptr`, dan `next` diatur menjadi `head`.
   - Jika `head` tidak `nullptr`, maka node sebelumnya dari `head` (`head->prev`) diatur menjadi node baru.
   - Jika `head` adalah `nullptr`, maka `tail` diatur menjadi node baru.
   - `head` diperbarui menjadi node baru.

b. `pop()`
   - Fungsi ini menghapus node pertama dari linked list.
   - Jika `head` adalah `nullptr`, tidak ada node yang dihapus.
   - Jika tidak, node pertama dihapus dan `head` diperbarui menjadi node berikutnya.
   - Jika `head` adalah `nullptr` setelah penghapusan, `tail` diatur menjadi `nullptr`.

c. `update(int oldData, int newData)`
   - Fungsi ini mencari nilai `oldData` dalam linked list dan menggantinya dengan `newData`.
   - Fungsi mengembalikan `true` jika nilai berhasil diperbarui, dan `false` jika nilai tidak ditemukan dalam linked list.

d. `deleteAll()`
   - Fungsi ini menghapus semua node dalam linked list.
   - Setiap node dihapus satu per satu, dan `head` dan `tail` diatur menjadi `nullptr`.

e. `display()`
   - Fungsi ini menampilkan isi linked list dengan menelusuri setiap node dari `head` hingga `nullptr` dan mencetak nilai data dari setiap node.

Pada fungsi `main()` yang merupakan titik masuk program, program akan menampilkan menu bagi pengguna untuk menambahkan, menghapus, mengubah, membersihkan, menampilkan data, dan keluar dari program. Pengguna dapat memilih operasi yang diinginkan dari menu menggunakan `switch` statement. Setiap operasi akan diimplementasikan menggunakan fungsi-fungsi yang telah didefinisikan dalam kelas `DoublyLinkedList`. Program akan terus berjalan hingga pengguna memilih untuk keluar.

## Unguided 

### 1. Buatlah program menu Single Linked List Non-Circular untuk menyimpan Nama dan usia mahasiswa, dengan menggunakan inputan dari user. Lakukan operasi berikut:
a.	Masukkan data sesuai urutan berikut. (Gunakan insert depan, belakang atau tengah). Data pertama yang dimasukkan adalah nama dan usia anda.
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/f6be63de-fa4d-410f-b0ec-c4cf48be9d88)
b.	Hapus data Akechi
c.	Tambahkan data berikut diantara John dan Jane : Futaba	18
d.	Tambahkan data berikut diawal : Igor	20
e.	Ubah data Michael menjadi : Reyn	18
f.	Tampilkan seluruh data

```C++
#include <iostream>
#include <string>
using namespace std;

// Deklarasi Struct Node
struct Node {
    string nama;
    int usia;
    Node* next;
};

// Deklarasi Kelas LinkedList
class LinkedList {
private:
    Node* head;

public:
    // Konstruktor
    LinkedList() {
        head = nullptr;
    }

    // Fungsi untuk memasukkan data di depan linked list
    void insertDepan(string nama, int usia) {
        Node* newNode = new Node;
        newNode->nama = nama;
        newNode->usia = usia;
        newNode->next = head;
        head = newNode;
    }

    // Fungsi untuk memasukkan data di belakang linked list
    void insertBelakang(string nama, int usia) {
        Node* newNode = new Node;
        newNode->nama = nama;
        newNode->usia = usia;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Fungsi untuk menampilkan seluruh data dalam linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->nama << "\t" << temp->usia << endl;
            temp = temp->next;
        }
    }

    // Fungsi untuk menghapus data dengan nama tertentu
    void hapus(string nama) {
        Node* temp = head;
        Node* prev = nullptr;

        if (temp != nullptr && temp->nama == nama) {
            head = temp->next;
            delete temp;
            return;
        }

        while (temp != nullptr && temp->nama != nama) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Data tidak ditemukan." << endl;
            return;
        }

        prev->next = temp->next;
        delete temp;
    }

    // Fungsi untuk memasukkan data di tengah linked list
    void insertTengah(string nama, int usia, string posisi) {
        Node* newNode = new Node;
        newNode->nama = nama;
        newNode->usia = usia;

        Node* temp = head;
        while (temp != nullptr && temp->nama != posisi) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Posisi tidak ditemukan." << endl;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Fungsi untuk mengubah data dengan nama tertentu
    void ubahData(string nama, string nama_baru, int usia_baru) {
        Node* temp = head;
        while (temp != nullptr && temp->nama != nama) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Data tidak ditemukan." << endl;
            return;
        }

        temp->nama = nama_baru;
        temp->usia = usia_baru;
    }
};

int main() {
    LinkedList list;

    // Step a: Masukkan data pertama (nama dan usia Anda)
    string namaAnda;
    int usiaAnda;
    cout << "Masukkan nama Anda: ";
    cin >> namaAnda;
    cout << "Masukkan usia Anda: ";
    cin >> usiaAnda;
    list.insertDepan(namaAnda, usiaAnda);

    // Masukkan data sesuai urutan
    list.insertBelakang("John", 19);
    list.insertBelakang("Jane", 20);
    list.insertBelakang("Michael", 18);
    list.insertBelakang("Yusuke", 19);
    list.insertBelakang("Akechi", 20);
    list.insertBelakang("Hoshino", 18);
    list.insertBelakang("Karin", 18);

    // Tampilkan data sebelum lanjut ke langkah berikutnya
    cout << "\nData setelah penambahan namaAnda dan usiaAnda serta sebelum penghapusan Akechi:" << endl;
    list.display();

    // Step b: Hapus data Akechi
    list.hapus("Akechi");

    // Tampilkan data sebelum lanjut ke langkah berikutnya
    cout << "\nData setelah penghapusan Akechi dan sebelum penambahan Futaba:" << endl;
    list.display();

    // Step c: Tambahkan data di antara John dan Jane
    list.insertTengah("Futaba", 18, "John");

    // Tampilkan data sebelum lanjut ke langkah berikutnya
    cout << "\nData setelah penambahan Futaba dan sebelum penambahan Igor:" << endl;
    list.display();

    // Step d: Tambahkan data di awal
    list.insertDepan("Igor", 20);

    // Tampilkan data sebelum lanjut ke langkah berikutnya
    cout << "\nData setelah penambahan Igor dan sebelum perubahan Michael:" << endl;
    list.display();

    // Step e: Ubah data Michael menjadi Reyn
    list.ubahData("Michael", "Reyn", 18);

    // Tampilkan data sebelum lanjut ke langkah berikutnya
    cout << "\nData setelah perubahan Michael menjadi Reyn:" << endl;
    list.display();

    // Step f: Tampilkan seluruh data
    cout << "\nData seluruh mahasiswa:" << endl;
    list.display();

    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}
```
#### Output:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/20ac35fc-2919-4d11-b97c-e781bba1a2d8)
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/5d794e20-bfd9-430a-96ee-de61fad94584)
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/13e21485-ce19-469f-a4a7-84b84f3762a0)

Program tersebut merupakan implementasi dari program C++ yang menggunakan linked list untuk menyimpan data mahasiswa, yaitu nama dan usia. Pertama, program akan mendeklarasikan`struct Node` yang digunakan untuk merepresentasikan node dalam linked list. Setiap node memiliki dua atribut, yaitu `nama` (string) untuk menyimpan nama mahasiswa, `usia` (integer) untuk menyimpan usia mahasiswa, dan `next` (pointer) untuk menunjukkan ke node selanjutnya dalam linked list. Kemudian, program akan mendeklarasikan `class LinkedList`  yaitu kelas yang mengelola linked list dan memiliki atribut privat `head` yang merupakan pointer ke node pertama dalam linked list. Program juga menginisialisasi `head` menjadi `nullptr` saat objek LinkedList dibuat.

Operator linked list:

a. Fungsi `insertDepan(string nama, int usia)`
- Menambahkan node baru di depan linked list.
- Node baru dibuat dengan data nama dan usia yang diberikan, lalu dihubungkan dengan `head`.

b. Fungsi `insertBelakang(string nama, int usia)`
- Menambahkan node baru di belakang linked list.
- Jika linked list masih kosong, node baru tersebut akan menjadi `head`.
- Jika tidak, iterasi dilakukan hingga mencapai node terakhir, lalu node baru dihubungkan di belakang node terakhir.

c. Fungsi `display()`
- Menampilkan seluruh data dalam linked list.
- Iterasi dilakukan dari `head` hingga `nullptr`, dan setiap node ditampilkan beserta data nama dan usianya.

d. Fungsi `hapus(string nama)`
- Menghapus node dengan nama tertentu dari linked list.
- Iterasi dilakukan untuk menemukan node yang akan dihapus, lalu node tersebut dihapus dengan mengubah pointer `next` dari node sebelumnya.

e. Fungsi `insertTengah(string nama, int usia, string posisi)`
- Menambahkan node baru di antara dua node tertentu dalam linked list.
- Iterasi dilakukan untuk menemukan node dengan nama yang sesuai dengan `posisi`, lalu node baru dihubungkan di antara node tersebut.

f. Fungsi `ubahData(string nama, string nama_baru, int usia_baru)`
- Mengubah data (nama dan usia) dari node dengan nama tertentu.
- Iterasi dilakukan untuk menemukan node yang akan diubah, lalu data pada node tersebut diubah sesuai dengan input baru.

Pada fungsi `main()` yang merupakan fungsi utama program, class `LinkedList` dipanggil kembali untuk menyimpan seluruh data mahasiswa. Kemudian, akan dijalankan beberapa step atau langkah-langkah seperti berikut,
- Step a: Meminta input nama dan usia pengguna, lalu memasukkan data pengguna ke depan linked list.
- Step b: Memanggil fungsi `hapus()` untuk menghapus data Akechi dari linked list.
- Step c: Memanggil fungsi `insertTengah()` untuk menambahkan data Futaba di antara John dan Jane.
- Step d: Memanggil fungsi `insertDepan()` untuk menambahkan data Igor di awal linked list.
- Step e: Memanggil fungsi `ubahData()` untuk mengubah data Michael menjadi Reyn.
- Step f: Menampilkan seluruh data mahasiswa dengan memanggil fungsi `display()`.

#### Full code Screenshot:
![modul 6 - unguided1](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/167b68da-ef31-4902-a493-e050cb776be8)

### 2. Modifikasi Guided Double Linked List dilakukan dengan penambahan operasi untuk menambah data, menghapus, dan update di tengah / di urutan tertentu yang diminta. Selain itu, buatlah agar tampilannya menampilkan Nama produk dan harga.
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/36e456c2-d9d8-4f36-8556-c2bef5914c16)
Case:
1.	Tambahkan produk Azarine dengan harga 65000 diantara Somethinc dan Skintific
2.	Hapus produk wardah
3.	Update produk Hanasui menjadi Cleora dengan harga 55.000
4.	Tampilkan menu seperti dibawah ini
Toko Skincare Purwokerto
1.	Tambah Data
2.	Hapus Data
3.	Update Data
4.	Tambah Data Urutan Tertentu
5.	Hapus Data Urutan Tertentu
6.	Hapus Seluruh Data
7.	Tampilkan Data
8.	Exit
Pada menu 7, tampilan akhirnya akan menjadi seperti dibawah ini :
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/bed740c2-baa6-4ce4-95be-eb054d056509)

```C++
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Deklarasi Struct Node
struct Node {
    string namaProduk;
    int harga;
    Node* prev;
    Node* next;
};

// Deklarasi Kelas DoublyLinkedList
class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    // Konstruktor
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // Fungsi untuk menambahkan node di belakang linked list
    void insertBelakang(string nama, int harga) {
        Node* newNode = new Node;
        newNode->namaProduk = nama;
        newNode->harga = harga;
        newNode->prev = tail;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
        } else {
            tail->next = newNode;
        }

        tail = newNode;
    }

    // Fungsi untuk menampilkan seluruh data dalam linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << setw(15) << temp->namaProduk << setw(10) << temp->harga << endl;
            temp = temp->next;
        }
    }

    // Fungsi untuk menghapus node dengan nama produk tertentu
    void hapus(string nama) {
        Node* temp = head;
        while (temp != nullptr && temp->namaProduk != nama) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Produk tidak ditemukan." << endl;
            return;
        }

        if (temp->prev == nullptr) {
            head = temp->next;
        } else {
            temp->prev->next = temp->next;
        }

        if (temp->next == nullptr) {
            tail = temp->prev;
        } else {
            temp->next->prev = temp->prev;
        }

        delete temp;
    }

    // Fungsi untuk memperbarui data produk dengan nama tertentu
    void update(string nama, string nama_baru, int harga_baru) {
        Node* temp = head;
        while (temp != nullptr && temp->namaProduk != nama) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Produk tidak ditemukan." << endl;
            return;
        }

        temp->namaProduk = nama_baru;
        temp->harga = harga_baru;
    }

    // Fungsi untuk menambahkan produk di antara dua produk tertentu
    void insertTengah(string nama, int harga, string posisi) {
        Node* newNode = new Node;
        newNode->namaProduk = nama;
        newNode->harga = harga;

        Node* temp = head;
        while (temp != nullptr && temp->namaProduk != posisi) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Posisi tidak ditemukan." << endl;
            return;
        }

        newNode->next = temp->next;
        newNode->prev = temp;
        if (temp->next != nullptr) {
            temp->next->prev = newNode;
        } else {
            tail = newNode;
        }
        temp->next = newNode;
    }
};

int main() {
    DoublyLinkedList list;

    // Menambahkan data awal
    list.insertBelakang("Originote", 60000);
    list.insertBelakang("Somethinc", 150000);
    list.insertBelakang("Skintific", 100000);
    list.insertBelakang("Wardah", 50000);
    list.insertBelakang("Hanasui", 30000);

    int choice;
    string nama, nama_baru, posisi;
    int harga, harga_baru;

    do {
        // Menampilkan menu
        cout << "\nToko Skincare Purwokerto" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Hapus Data" << endl;
        cout << "3. Update Data" << endl;
        cout << "4. Tambah Data Urutan Tertentu" << endl;
        cout << "5. Hapus Data Urutan Tertentu" << endl;
        cout << "6. Hapus Seluruh Data" << endl;
        cout << "7. Tampilkan Data" << endl;
        cout << "8. Exit" << endl;
        cout << "Masukkan pilihan: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan nama produk: ";
                cin >> nama;
                cout << "Masukkan harga: ";
                cin >> harga;
                list.insertBelakang(nama, harga);
                break;
            case 2:
                cout << "Masukkan nama produk yang ingin dihapus: ";
                cin >> nama;
                list.hapus(nama);
                break;
            case 3:
                cout << "Masukkan nama produk yang ingin diupdate: ";
                cin >> nama;
                cout << "Masukkan nama baru: ";
                cin >> nama_baru;
                cout << "Masukkan harga baru: ";
                cin >> harga_baru;
                list.update(nama, nama_baru, harga_baru);
                break;
            case 4:
                cout << "Masukkan nama produk yang ingin ditambahkan: ";
                cin >> nama;
                cout << "Masukkan harga: ";
                cin >> harga;
                cout << "Masukkan nama produk pada urutan sebelumnya: ";
                cin >> posisi;
                list.insertTengah(nama, harga, posisi);
                break;
            case 5:
                cout << "Masukkan nama produk yang ingin dihapus: ";
                cin >> nama;
                list.hapus(nama);
                break;
            case 6:
                list.hapus("All");
                break;
            case 7:
                cout << setw(15) << "Nama Produk" << setw(10) << "Harga" << endl;
                list.display();
                break;
            case 8:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                break;
        }
    } while (choice != 8);

    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}
```

#### Output:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/8d5b384d-b63a-4f58-8421-1fe0278c4f98)
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/fcf16291-341e-49c4-aaa1-80b8440c5bc4)
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/19c9e33c-8532-4681-9dad-7ca936009691)
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/c717a120-09ee-4dca-9580-67a83be551ef)

Program tersebut adalah implementasi dari struktur data doubly linked list yang digunakan untuk mengelola daftar produk skincare di sebuah toko. Pertama, program akan mendeklarasikan struct `Node` yang digunakan untuk merepresentasikan setiap item dalam linked list. Setiap `Node` memiliki dua atribut string `namaProduk` dan integer `harga` untuk menyimpan nama dan harga produk, serta dua pointer `prev` dan `next` yang menunjukkan ke node sebelumnya dan sesudahnya dalam linked list.

Kemudian, program akan mendeklarasikan kelas `DoublyLinkedList` yang mengimplementasikan operasi-operasi yang dapat dilakukan pada linked list, seperti penambahan, penghapusan, pembaruan, dan penampilan data. Lalu, program menginisialisasi pointer `head` dan `tail` menjadi `nullptr`, menandakan bahwa linked list awalnya kosong.

Operator pada double linked list:
- Fungsi `insertBelakang`**: Fungsi ini digunakan untuk menambahkan node baru ke akhir linked list. Node baru dibuat dengan menggunakan input nama dan harga, kemudian ditambahkan setelah `tail` dan `tail` diupdate menjadi node baru tersebut.
- Fungsi `display`: Fungsi ini digunakan untuk menampilkan seluruh data dalam linked list dengan format yang terstruktur, yaitu nama produk diikuti dengan harga.
- Fungsi `hapus`: Fungsi ini digunakan untuk menghapus node dengan nama produk tertentu dari linked list. Proses penghapusan dilakukan dengan mencari node yang memiliki nama produk yang sesuai, kemudian menghapusnya dari linked list.
- Fungsi `update`: Fungsi ini digunakan untuk memperbarui data produk dengan nama tertentu dalam linked list. Prosesnya mirip dengan fungsi `hapus`, namun setelah node ditemukan, data nama produk dan harga diupdate sesuai dengan input baru.
- Fungsi `insertTengah`: Fungsi ini digunakan untuk menambahkan produk di antara dua produk tertentu dalam linked list. Prosesnya mirip dengan `insertBelakang`, namun node baru ditambahkan setelah node yang memiliki nama produk yang sesuai dengan input posisi.

Pada fungsi `main` yang merupakan fungsi utama program, akan dijalankan beberapa tahapan yaitu,
1. Inisialisasi Linked List dan Penambahan Data Awal
   - Pada awalnya, program membuat objek dari kelas `DoublyLinkedList` dengan nama `list`.
   - Kemudian, beberapa produk awal ditambahkan ke dalam linked list menggunakan fungsi `insertBelakang()`. Produk tersebut adalah "Originote", "Somethinc", "Skintific", "Wardah", dan "Hanasui" beserta harganya masing-masing.
2. Loop Menu Interaktif
   - Terdapat loop `do-while` yang memberikan menu interaktif kepada pengguna.
   - Setiap iterasi menu menampilkan pilihan operasi yang tersedia dan meminta input pilihan dari pengguna.
   - Setelah menerima input, program menjalankan operasi sesuai dengan pilihan pengguna.
3. Switch Statement untuk Menangani Pilihan Pengguna
   - Program menggunakan statement `switch` untuk menangani berbagai pilihan operasi yang mungkin dilakukan oleh pengguna.
   - Pilihan yang mungkin adalah:
     - 1: Tambah Data: Menambahkan produk baru ke akhir daftar.
     - 2: Hapus Data: Menghapus produk berdasarkan nama.
     - 3: Update Data: Memperbarui data produk berdasarkan nama.
     - 4: Tambah Data Urutan Tertentu: Menambahkan produk di antara dua produk tertentu.
     - 5: Hapus Data Urutan Tertentu: Menghapus produk berdasarkan nama.
     - 6: Hapus Seluruh Data: Menghapus semua produk dari daftar.
     - 7: Tampilkan Data: Menampilkan seluruh produk yang ada di daftar.
     - 8: Keluar: Keluar dari program.
   - Setelah menerima pilihan pengguna, program akan memanggil fungsi yang sesuai dari objek `list` untuk menjalankan operasi yang dipilih.
4. Pesan Penutup
   - Setelah pengguna memilih untuk keluar dari program (pilihan 8), program menampilkan pesan terima kasih.

#### Full code Screenshot:
![modul 6 - unguided2](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/fc23546c-585d-4c79-bfea-ef6117da181f)

## Kesimpulan
- Linked list memperkenalkan konsep dasar struktur data linear, di mana elemen-elemennya terhubung satu sama lain menggunakan pointer. Ini memberikan fleksibilitas dalam penyimpanan dan pengaksesan data.
- Single Linked List: Single linked list adalah struktur data di mana setiap simpul (node) memiliki satu pointer yang menunjuk ke simpul berikutnya. Ini memungkinkan traversal hanya dalam satu arah, yaitu dari awal hingga akhir. Single linked list cocok digunakan untuk aplikasi yang membutuhkan penambahan dan penghapusan elemen di ujung depan (head) atau di tengah linked list.
- Double Linked List: Double linked list adalah pengembangan dari single linked list di mana setiap simpul memiliki dua pointer: satu yang menunjuk ke simpul sebelumnya dan satu yang menunjuk ke simpul berikutnya. Ini memungkinkan traversal maju dan mundur, serta operasi-insert dan delete yang lebih fleksibel. Double linked list cocok digunakan untuk aplikasi yang memerlukan traversal maju dan mundur, seperti pengurutan data dan operasi undo dalam aplikasi.
- Kelebihan dan Kekurangan: Single linked list memiliki kelebihan dalam penggunaan memori yang lebih efisien dan operasi-insert dan delete di ujung depan linked list yang lebih cepat. Namun, kelemahannya adalah traversal hanya bisa dilakukan ke arah satu saja. Sementara itu, double linked list memiliki kelebihan dalam traversal maju dan mundur yang cepat serta fleksibilitas dalam operasi-insert dan delete, namun memerlukan lebih banyak ruang memori karena setiap simpul harus menyimpan dua pointer.

## Referensi
[1] H. Wijaya, W. S. Wardhono, and I. Arwani, “Implementasi Linked List pada Interaksi Antar Marker Augmented Reality untuk Operand dan Operator Aritmetika,” Jurnal Pengembangan Teknologi Informasi dan Ilmu Komputer, vol. 2, no. 9, pp. 3328–3332, Nov. 2018.

[2]A. K. Putra, “Single Linked List,” Osf.io. Available: https://osf.io/u6qf7/download. [Accessed: May 09, 2024]

[3]A. Dharma and H. H. Syahputra, “Aplikasi Pembelajaran Linked List Berbasis Mobile Learning,” Riau Journal Of Computer Science, vol. 4, no. 1, pp. 1–11, Dec. 2017, Available: https://e-journal.upp.ac.id/index.php/RJOCS/article/view/1442/1154. [Accessed: May 09, 2024]

[4]“Algoritma dan Struktur Data Praktikum 7 Double Linked List (1).” Available: https://arna.lecturer.pens.ac.id/Praktikum_ASD/07%20Double%20Linked%20List%201.pdf. [Accessed: May 09, 2024]
