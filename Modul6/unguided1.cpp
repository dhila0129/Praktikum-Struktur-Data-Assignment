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