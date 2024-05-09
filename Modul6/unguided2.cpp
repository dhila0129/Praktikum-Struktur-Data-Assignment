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
