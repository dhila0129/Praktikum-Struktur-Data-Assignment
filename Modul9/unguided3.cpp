#include<iostream>
#include<string>
#include<list>

using namespace std;

// Struktur data untuk menyimpan informasi mahasiswa
struct Mahasiswa {
    string NIM;
    int nilai;
};

// Hash table untuk menyimpan data mahasiswa
class HashTable {
private:
    int size;
    list<Mahasiswa> *table;

public:
    HashTable(int size) {
        this->size = size;
        table = new list<Mahasiswa>[size];
    }

    // Fungsi untuk menghitung indeks hash berdasarkan NIM
    int hashFunction(string NIM) {
        int sum = 0;
        for (int i = 0; i < NIM.length(); i++) {
            sum += NIM[i];
        }
        return sum % size;
    }

    // Fungsi untuk menambahkan data baru
    void addData(string NIM, int nilai) {
        int index = hashFunction(NIM);
        table[index].push_back({NIM, nilai});
    }

    // Fungsi untuk menghapus data berdasarkan NIM
    void deleteData(string NIM) {
        int index = hashFunction(NIM);
        for (auto it = table[index].begin(); it!= table[index].end(); it++) {
            if (it->NIM == NIM) {
                table[index].erase(it);
                return;
            }
        }
    }

    // Fungsi untuk mencari data berdasarkan NIM
    Mahasiswa* searchData(string NIM) {
        int index = hashFunction(NIM);
        for (auto it = table[index].begin(); it!= table[index].end(); it++) {
            if (it->NIM == NIM) {
                return &(*it);
            }
        }
        return nullptr;
    }

    // Fungsi untuk mencari data berdasarkan rentang nilai
    list<Mahasiswa> searchDataByRange(int min, int max) {
        list<Mahasiswa> result;
        for (int i = 0; i < size; i++) {
            for (auto it = table[i].begin(); it!= table[i].end(); it++) {
                if (it->nilai >= min && it->nilai <= max) {
                    result.push_back(*it);
                }
            }
        }
        return result;
    }
};

int main() {
    HashTable hashTable(10);

    int pilihan;
    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Tambahkan data baru" << endl;
        cout << "2. Hapus data" << endl;
        cout << "3. Cari data berdasarkan NIM" << endl;
        cout << "4. Cari data berdasarkan rentang nilai" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                string NIM;
                int nilai;
                cout << "Masukkan NIM: ";
                cin >> NIM;
                cout << "Masukkan nilai: ";
                cin >> nilai;
                hashTable.addData(NIM, nilai);
                break;
            }
            case 2: {
                string NIM;
                cout << "Masukkan NIM: ";
                cin >> NIM;
                hashTable.deleteData(NIM);
                break;
            }
            case 3: {
                string NIM;
                cout << "Masukkan NIM: ";
                cin >> NIM;
                Mahasiswa* data = hashTable.searchData(NIM);
                if (data!= nullptr) {
                    cout << "Data ditemukan: " << data->NIM << " - " << data->nilai << endl;
                } else {
                    cout << "Data tidak ditemukan" << endl;
                }
                break;
            }
            case 4: {
                int min, max;
                cout << "Masukkan rentang nilai (min - max): ";
                cin >> min >> max;
                list<Mahasiswa> result = hashTable.searchDataByRange(min, max);
                if (!result.empty()) {
                    cout << "Data ditemukan:" << endl;
                    for (auto it = result.begin(); it!= result.end(); it++) {
                        cout << it->NIM << " - " << it->nilai << endl;
                    }
                } else {
                    cout << "Data tidak ditemukan" << endl;
                }
                break;
            }
            case 5:
                return 0;
            default:
                cout << "Pilihan tidak valid" << endl;
        }
    }

    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}