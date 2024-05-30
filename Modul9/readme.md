# <h1 align="center">Laporan Praktikum Modul Rekursif dan Hash Table</h1>
<p align="center">Habibah Ratna Fadhila Islami Hana</p>

## Dasar Teori

### Rekursif
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/4e68080d-1867-45ba-b3a8-f54bd021c63e)

Rekursi adalah suatu proses dari fungsi yang memanggil dirinya sendiri. Fungsi yang seperti ini disebut fungsi rekursif (recursive function). Dalam sebuah fungsi rekursif pemanggilan dapat terjadi berulang kali. Karena ada proses yang berulang-ulang maka harus ada suatu kondisi yang mengakhiri prosesnya. Jika tidak, maka proses tidak akan pernah berhenti sampai memori yang digunakan tidak dapat menampung lagi [1]. 

Fungsi rekursif disusun atas dua bagian, yaitu basis dan rekurens. Basis berisi nilai awal yang tidak mengacu pada dirinya sendiri (terdefinisi secara eksplisit). Bagian ini berfungsi untuk memberikan nilai yang terdefinisi pada fungsi rekursif dan sekaligus menghentikan proses rekursi. Rekurens merupakan bagian fungsi yang mendefinisikan argumen fungsi dalam terminology dirinya sendiri. Setiap kali fungsi tersebut melakukan bagian rekurens maka argumen dari fungsi tersebut harus lebih dekat pada basisnya. Rekurens berisi kaidah untuk menemukan nilai fungsi pada suatu input dari nilai-nilai lainnya pada input yang lebih kecil [2] [3].

Ada 2 jenis fungsi rekursi yaitu :
- Rekursi langsung, terjadi ketika sebuah fungsi memanggil dirinya sendiri secara langsung.
- Rekursi tidak langsung, terjadi ketika sebuah fungsi memanggil fungsi lain yang pada gilirannya memanggil fungsi pertama.

Logika rekursif dipakai sebagai pengganti proses iterasi. Kelebihan logika bentuk ini adalah mudah dipahami alurnya, namun kelemahannya adalah pada penggunaan register stack yang sangat membebani kecepatan jalannya program [4].

Contoh algoritma rekursif (fibonacci) :
```C++
int fibonacci(int n) {
  if (n == 0 || n == 1) {
    return n;
  } else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}
```

### Hash Table
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/66bef48b-d98f-4aa8-a39b-c104c9bae453)

Hash Table adalah sebuah struktur data yang terdırı atas sebuah tabel dan fungsi yang bertujuan untuk memetakan nilai kunci yang unik untuk setiap record (baris) menjadi angka (hash) lokasi record tersebut dalam sebuah tabel [5].

Tabel hash adalah sebuah cara untuk menyimpan suatu data pada memori ke dalam baris-baris dan kolom-kolom sehingga membentuk tabel yang dapat diakses dengan cepat. Setiap sel yang merupakan pertemuan antara baris dan kolom di dalam tabel hash dimana data diarsipkan disebut dengan slot.

Sebuah tabel hash dapat dibuat dari dua bagian, yaitu sebuah larik atau array dan sebuah fungsi untuk memetakan, yang disebut dengan fungsi hash atau hash function. Fungsi hash adalah pemetaan ke dalam larik sesuai dengan kunci-kunci yang diberikan, dengan kata lain fungsi hash mendistribusikan data yang dimasukkan oleh pengguna ke dalam tabel atau larik yang telah disediakan [6].

Keunggulan dari struktur hash table ini adalah waktu aksesnya yang cukup cepat, jika record yang dicari langsung berada pada angka hash lokasi penyimpanannya. Akan tetapi pada kenyataannya sering sekali ditemukan hash table yang record-recordnya mempunyai angka hash yang sama (bertabrakan). Karena pemetaan hash function yang digunakan bukanlah pemetaan satu-satu, (antara dua record yang tidak sama dapat dibangkitkan angka hash yang sama) maka dapat terjadi bentrokan (collision) dalam penempatan suatu data record.

Kegunaan Hash Table :
- Pencarian Cepat, dapat digunakan untuk mencari data dengan cepat berdasarkan key. Ini sangat berguna dalam aplikasi seperti basis data, kamus, dan cache.
- Penyimpanan Data, hash table dapat digunakan untuk menyimpan data dengan efisien. Data dapat diambil dan dimasukkan ke dalam tabel dengan waktu konstan, asalkan tidak ada collision yang signifikan.
- Implementasi Struktur Data Lain, hash table dapat digunakan untuk mengimplementasikan struktur data lain, seperti set dan map [7].

Beberapa operasi pada hash table yaitu,
1. `insert` (Penyisipan): Operasi ini digunakan untuk menambahkan pasangan key-value baru ke dalam hash table.
2. `search` (Pencarian): Operasi ini digunakan untuk mencari nilai yang terkait dengan key tertentu.
3. `delete` (Penghapusan): Operasi ini digunakan untuk menghapus pasangan key-value tertentu dari hash table.
4. `isEmpty`: Mengecek apakah hash table kosong.
5. `size`: Mengembalikan jumlah pasangan key-value yang tersimpan dalam hash table.
6. `update`: Memperbarui nilai yang terkait dengan key tertentu (jika sudah ada). 
7. `Collision Handling`: Operasi ini digunakan untuk menangani collision dan memastikan bahwa elemen-elemen dengan indeks yang sama dapat disimpan dan diakses dengan benar.
8. `Resize`: Operasi ini digunakan untuk mengubah ukuran hash table jika jumlah elemen/data yang disimpan melebihi kapasitas yang ditentukan. Resize dilakukan untuk menjaga efisiensi dan kinerja hash table.
9. `Iterasi`: Operasi yang digunakan untuk mengakses dan memproses semua elemen/data yang ada dalam hash table secara berurutan.


## Guided 

### 1.  Rekursif Langsung (Direct Recursion)

```C++
#include <iostream>
using namespace std;

//Code ini berfungsi untuk melakukan hitung mundur
//dari angka yang diinputkan

void countdown(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    countdown(n - 1);
}

int main() {
    cout << "Rekursif Langsung: ";
    countdown(5); //5 merupakan input nya
    cout << endl;

    return 0;
}
```
Program C++ tersebut berfungsi untuk melakukan hitung mundur dari angka yang diinputkan menggunakan teknik rekursi. Pertama, fungsi `countdown` akan didefinisikan dengan parameter `int n` dan tipe pengembalian `void`, menandakan bahwa fungsi ini tidak mengembalikan nilai. Di dalam `countdown`, terdapat kondisi dasar `if (n == 0) { return; }` yang menghentikan rekursi ketika `n` mencapai nol, mencegah eksekusi berlanjut tanpa henti. Jika `n` tidak nol, fungsi akan mencetak nilai `n` yang diikuti oleh spasi, dan kemudian memanggil dirinya sendiri dengan argumen `n - 1`, untuk mengurangi nilai `n` satu per satu.

Fungsi `main` adalah fungsi utama program. Fungsi `countdown` dipanggil dengan argumen `5`, yang berarti hitung mundur akan dimulai dari angka 5. Fungsi `countdown` mencetak angka dari 5 hingga 1 secara berurutan, fungsi ini akan memanggil dirinya sendiri dengan nilai `n` yang terus berkurang. Ketika `n` mencapai 0, kondisi dasar tercapai dan rekursi berhenti. Setelah semua panggilan rekursif selesai, program mencetak karakter newline dan mengembalikan nilai 0 dari fungsi `main`, menandakan bahwa program berakhir dengan sukses.

### 2. Rekursif Tidak Langsung (Indirect Recursion)

```C++
#include <iostream>
using namespace std;

void functionB(int n);

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        functionB(n - 1); // Panggilan rekursif tidak langsung
    }
}

void functionB(int n) {
    if (n > 0) {
        cout << n << " ";
        functionA(n / 2); // Panggilan rekursif tidak langsung
    }
}

int main() {
    int num = 5;
    cout << "Rekursif Tidak Langsung: ";
    functionA(num);
    return 0;
}
```
Program C++ tersebut adalah contoh konsep rekursi tidak langsung yang melalui dua fungsi, `functionA` dan `functionB`, yang saling memanggil satu sama lain. Pertama, fungsi `functionA` dideklarasikan untuk menerima satu parameter `n` bertipe `int` dan memeriksa apakah `n` lebih besar dari nol. Jika benar, fungsi tersebut akan mencetak nilai `n` dan fungsi `functionB` akan dipanggil dengan argumen `n - 1`. Fungsi `functionB` juga menerima satu parameter `n` bertipe `int` dan melakukan pemeriksaan serupa. Jika `n` lebih besar dari nol, fungsi akan mencetak nilai `n` dan memanggil fungsi `functionA` dengan argumen `n / 2`. 

Pada fungsi `main`, variabel `num` diinisialisasi dengan nilai 5 dan string "Rekursif Tidak Langsung: " dicetak. Kemudian, `functionA` dipanggil dengan argumen `num`. Hal ini memulai serangkaian panggilan rekursif di mana `functionA` dan `functionB` saling memanggil dengan nilai `n` yang berkurang secara bertahap sampai mencapai kondisi dasar di mana `n` tidak lebih besar dari nol. Proses rekursif dimulai dengan `functionA(5)`, yang mencetak `5` dan memanggil `functionB(4)`. `functionB(4)` kemudian mencetak `4` dan memanggil `functionA(2)`, yang mencetak `2` dan memanggil `functionB(1)`. `functionB(1)` mencetak `1` dan memanggil `functionA(0)`, yang mengakhiri rekursi karena `n` tidak lebih besar dari nol. 

### 3. Hash Table

```C++
#include <iostream>
#include <string>
#include <vector>

using namespace std;
const int TABLE_SIZE = 11;

string name;
string phone_number;
class HashNode {
public:
    string name;
    string phone_number;

    HashNode(string name, string phone_number) {
        this->name = name;
        this->phone_number = phone_number;
    }
};


class HashMap {
private:
    vector<HashNode*> table[TABLE_SIZE];
public:
    int hashFunc(string key) {
        int hash_val = 0;
        for (char c : key) {
            hash_val += c;
        }
    return hash_val % TABLE_SIZE; // 4 bisa aja 204,12004, 6 bisa aja 266, 300
    };
    void insert(string name, string phone_number) {
        int hash_val = hashFunc(name);

        for (auto node : table[hash_val]) {
            if (node->name == name) {
                node->phone_number = phone_number;
                return;
            }
        }
        table[hash_val].push_back(new HashNode(name, phone_number));
    }

    void remove(string name) {
        int hash_val = hashFunc(name);
    
        for (auto it = table[hash_val].begin(); it !=
table[hash_val].end(); it++) {
            if ((*it)->name == name) {
                table[hash_val].erase(it);
                return;
            }
        }
    }
    string searchByName(string name) {
    int hash_val = hashFunc(name);
    for (auto node : table[hash_val]) {
        if (node->name == name) {
            return node->phone_number;
        }
    }
return "";
}

    void print() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << ": ";
                for (auto pair : table[i]) {
                if(pair != nullptr){
                    cout << "[" << pair->name << ", " <<
pair->phone_number << "]";
                }
            }
            cout << endl;
        }
    }
};

int main() {
HashMap employee_map;

employee_map.insert("Mistah", "1234");
employee_map.insert("Pastah", "5678");
employee_map.insert("Ghana", "91011");

cout << "Nomer Hp Mistah : " <<employee_map.searchByName("Mistah") <<
endl;
cout << "Phone Hp Pastah : " <<employee_map.searchByName("Pastah") <<
endl;
cout << "Phone Hp Ghana : " <<employee_map.searchByName("Ghana") <<
endl;

employee_map.remove("Mistah");

cout << "Nomer Hp Mistah setelah dihapus : "
<<employee_map.searchByName("Mistah") << endl << endl;

cout << "Hash Table : " << endl;

employee_map.print();

return 0;
}
```
Program di atas mengimplementasikan struktur data hash table dengan teknik chaining untuk menyimpan pasangan nama dan nomor telepon. Pertama, didapatkan kelas `HashNode` yang mewakili simpul dalam hash table. Setiap simpul memiliki dua atribut, yaitu `name` untuk menyimpan nama dan `phone_number` untuk menyimpan nomor telepon. Konstruktor `HashNode` digunakan untuk menginisialisasi nilai-nilai ini saat objek `HashNode` dibuat.

Selanjutnya, kelas `HashMap` digunakan untuk mengelola hash table itu sendiri. Dalam kelas `HashMap`, didapatkan array dari vektor yang disebut `table`, yang berisi pointer ke `HashNode`. Hal ini adalah representasi hash table, di mana setiap elemen dari array mewakili slot dalam hash table. Ukuran array ditentukan oleh konstanta `TABLE_SIZE`, yang didefinisikan sebagai 11 dalam program ini.

Kelas `HashMap` memiliki beberapa metode utama:
- `hashFunc`: Metode ini bertanggung jawab untuk menghasilkan nilai hash untuk key (nama). Fungsi hash sederhana digunakan di sini, yaitu dengan menjumlahkan nilai ASCII dari karakter-karakter dalam key dan kemudian mengambil modulus dengan ukuran tabel untuk menentukan indeks.
- `insert`: Metode ini digunakan untuk menyisipkan pasangan nama dan nomor telepon ke dalam hash table. Pertama, nilai hash untuk nama diperoleh menggunakan `hashFunc`, dan kemudian sebuah objek `HashNode` baru dibuat. Jika terdapat kolisi (yaitu, ada entri lain dengan hash yang sama), teknik chaining akan digunakan, di mana objek baru ditambahkan ke vektor yang terkait dengan indeks tersebut.
- `remove`: Metode ini digunakan untuk menghapus entri dari hash table berdasarkan nama. Setelah nilai hash untuk nama diperoleh, metode ini mencari entri yang sesuai dalam vektor yang terkait dengan indeks tersebut, dan menghapusnya jika ditemukan.
- `searchByName`: Metode ini digunakan untuk mencari nomor telepon berdasarkan nama. Setelah nilai hash untuk nama diperoleh, metode ini mencari entri yang sesuai dalam vektor yang terkait dengan indeks tersebut, dan mengembalikan nomor telepon jika ditemukan.
- `print`: Metode ini digunakan untuk mencetak isi hash table. Metode ini mengunjungi setiap slot dalam hash table dan mencetak semua entri yang ada dalam vektor terkait.

Dalam fungsi `main`, objek `HashMap` bernama `employee_map` dibuat untuk merepresentasikan hash table. Beberapa entri ditambahkan ke hash table menggunakan metode `insert`, kemudian nomor telepon dicari dan dicetak menggunakan metode `searchByName`, dan entri dengan nama tertentu dihapus menggunakan metode `remove`. Akhirnya, isi dari hash table dicetak menggunakan metode `print`.

## Unguided 

### 1. Buatlah sebuah program Rekursif Langsung (Direct Recursion) yang menghitung nilai faktorial dari sebuah inputan bilangan bulat positif!
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/2ff7ca2b-1f12-4d75-afb2-4b814a55a9a0)

```C++
#include<iostream>
using namespace std;

long long factorial(int n) {
    // Jika n sama dengan 0, maka faktorialnya adalah 1
    if(n == 0)
        return 1;
    // Jika n tidak sama dengan 0, maka faktorialnya adalah n * faktorial dari n-1
    else
        // Memanggil fungsi factorial dengan parameter n-1
        return n * factorial(n-1);
}

int main() {
    int num;
    // Meminta pengguna memasukkan bilangan
    cout << "Masukkan sebuah bilangan bulat positif: ";
    cin >> num;
    // Jika bilangan negatif, maka menampilkan pesan error
    if(num < 0)
        cout << "Error! Faktorial dari sebuah bilangan negatif tidak ada.";
    // Jika bilangan positif, maka menghitung faktorial dan menampilkan hasilnya
    else
        cout << "Faktorial dari " << num << " adalah " << factorial(num);
    
    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}
```
#### Output:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/e3640a0d-eb4b-4999-a7d9-2964539da859)

Program tersebut adalah sebuah implementasi sederhana untuk menghitung faktorial dari sebuah bilangan bulat positif yang dimasukkan oleh pengguna. Pertama, program akan mendeklarasikan fungsi `factorial`. Fungsi `factorial` adalah sebuah fungsi yang mengembalikan nilai faktorial dari bilangan bulat `n`. Fungsi ini ditulis dengan menggunakan rekursi. Jika nilai `n` adalah 0, maka fungsi langsung mengembalikan nilai 1 (faktorial dari 0 adalah 1). Jika nilai `n` lebih besar dari 0, maka fungsi akan memanggil dirinya sendiri dengan parameter `n-1` dan hasilnya akan dikalikan dengan nilai `n`.

Pada fungsi `main` yang merupakan fungsi utama program pengguna akan diminta untuk memasukkan sebuah bilangan bulat positif menggunakan `cout` dan menerima input tersebut menggunakan `cin`. Kemudian, program memeriksa apakah bilangan yang dimasukkan oleh pengguna adalah negatif. Jika ya, maka program menampilkan pesan error yang memberitahu pengguna bahwa faktorial dari bilangan negatif tidak dapat dihitung. Jika bilangan yang dimasukkan adalah positif, maka program akan menghitung faktorialnya menggunakan fungsi `factorial` dan menampilkan hasilnya.

#### Full code Screenshot:
![modul 9 - unguided1](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/9bd76fd7-561c-43d6-a349-e9f96a8cb670)

### 2. Buatlah versi program Rekursif Tidak Langsung (Indirect Recursion) dari soal nomor 1 di atas!

```C++
#include <iostream>
using namespace std;

// Deklarasi fungsi terlebih dahulu
long long helperA(int n, int result);
long long helperB(int n, int result);

// Fungsi helperA yang memanggil helperB untuk rekursi tidak langsung
long long helperA(int n, int result) {
    if (n == 0)
        return result;
    else
        return helperB(n - 1, n * result);
}

// Fungsi helperB yang memanggil helperA untuk rekursi tidak langsung
long long helperB(int n, int result) {
    if (n == 0)
        return result;
    else
        return helperA(n, result);
}

// Fungsi utama factorial yang memulai rekursi
long long factorial(int n) {
    return helperA(n, 1);
}

int main() {
    int num;
    // Meminta pengguna memasukkan bilangan
    cout << "Masukkan sebuah bilangan bulat positif: ";
    cin >> num;
    // Jika bilangan negatif, maka menampilkan pesan error
    if(num < 0)
        cout << "Error! Faktorial dari sebuah bilangan negatif tidak ada.";
    // Jika bilangan positif, maka menghitung faktorial dan menampilkan hasilnya
    else
        cout << "Faktorial dari " << num << " adalah " << factorial(num);
    
    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}
```
#### Output:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/1f596fab-f606-47e7-bd26-5cb318e06e7b)

Program di atas adalah implementasi dari perhitungan faktorial menggunakan rekursi tidak langsung. Dalam rekursi tidak langsung, sebuah fungsi memanggil fungsi lain yang kemudian memanggil kembali fungsi pertama. Pertama, program akan mendeklarasi fungsi `helperA` dan `helperB` terlebih dahulu karena fungsi-fungsi ini saling memanggil satu sama lain, yang dikenal sebagai rekursi tidak langsung.

Pada Fungsi `helperA` akan diterima dua parameter, `n` (bilangan yang ingin dihitung faktorialnya) dan `result` (akumulator yang menyimpan hasil sementara dari perhitungan faktorial). Jika `n` sama dengan 0, fungsi mengembalikan `result` yang menyimpan hasil faktorial (basis kasus). Jika `n` tidak sama dengan 0, fungsi memanggil `helperB` dengan `n - 1` dan `n * result` (rekursi). Pada fungsi `helperB` juga akan diterima dua parameter yang sama seperti `helperA`. Jika `n` sama dengan 0, fungsi mengembalikan `result` (basis kasus). Jika `n` tidak sama dengan 0, fungsi memanggil `helperA` dengan `n` dan `result` tanpa perubahan (ini untuk mempertahankan alur rekursi tidak langsung).

Fungsi `factorial` adalah fungsi utama yang akan dipanggil untuk menghitung faktorial dari sebuah bilangan `n`. Fungsi ini memulai rekursi dengan memanggil `helperA` dengan parameter awal `n` dan `1` untuk `result`.

Fungsi `main` adalah fungsi utama program. Program akan meminta pengguna untuk memasukkan sebuah bilangan bulat positif menggunakan `cout` dan menerima input tersebut dengan `cin`. Program kemudian memeriksa apakah bilangan yang dimasukkan adalah negatif. Jika ya, program menampilkan pesan error yang menyatakan bahwa faktorial dari bilangan negatif tidak ada. Jika bilangan yang dimasukkan adalah positif, program menghitung faktorialnya dengan memanggil fungsi `factorial` dan menampilkan hasilnya.

#### Full code Screenshot:
![modul 9 - unguided2](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/3887b885-2ee2-4a3b-8485-7d55cd494b0c)


### 3.  Implementasikan hash table untuk menyimpan data mahasiswa. Setiap mahasiswa memiliki NIM dan nilai. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan nilai. Dengan ketentuan :
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/5663b5f7-e05a-41e3-bae3-f791d851c520)

```C++
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
```
#### Output:
![modul 9 - unguided3](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/2b14d019-c91c-4842-b1f4-cf7a28407e92)

Program C++ tersebut adalah implementasi dari sebuah hash table yang digunakan untuk menyimpan dan mengelola data mahasiswa berdasarkan NIM (Nomor Induk Mahasiswa) dan nilai mereka. Pertama, `struct Mahasiswa` untuk menyimpan informasi mahasiswa yang terdiri dari `NIM` dan `nilai` akan dideklarasikan. Selanjutnya, dideklarasikan pula `class HashTable` yang memiliki atribut `size` (ukuran tabel) dan `table` (pointer ke array list dari struktur `Mahasiswa`). Program akan menginisialisasi `size` dan mengalokasikan memori untuk array list dari ukuran `size`.

Fungsi `int hashFunction(string NIM)` digunakan untuk menghitung indeks hash berdasarkan NIM. Fungsi ini menjumlahkan nilai ASCII dari setiap karakter dalam string `NIM` dan mengembalikan hasil mod dengan `size`.

Fungsi `void addData(string NIM, int nilai)`: dugunakan untuk menambahkan data mahasiswa ke dalam hash table. Fungsi ini menghitung indeks hash untuk NIM, kemudian menambahkan struktur `Mahasiswa` baru ke list pada indeks tersebut.

Fungsi `void deleteData(string NIM)`: digunakan untuk menghapus data mahasiswa berdasarkan NIM. Fungsi ini menghitung indeks hash untuk NIM, kemudian mencari dan menghapus elemen yang sesuai dalam list pada indeks tersebut.

Fungsi `Mahasiswa* searchData(string NIM)`: digunakan untuk mencari data mahasiswa berdasarkan NIM. Fungsi ini menghitung indeks hash untuk NIM, kemudian mencari elemen yang sesuai dalam list pada indeks tersebut dan mengembalikan pointer ke elemen tersebut jika ditemukan, atau `nullptr` jika tidak ditemukan.

Fungsi `list<Mahasiswa> searchDataByRange(int min, int max)`: digunakan untuk mencari data mahasiswa berdasarkan rentang nilai. Fungsi ini memeriksa setiap elemen dalam hash table dan menambahkan elemen yang memiliki nilai dalam rentang `min` hingga `max` ke dalam list `result`, kemudian mengembalikan list tersebut.

Pada fungsi `int main()` yang merupakan fungsi utama untuk menjalankan program, fungsi `HashTable hashTable(10)` akan membuat objek `hashTable` dengan ukuran tabel 10. Program ini menampilkan menu dan meminta pengguna untuk memilih opsi yang diinginkan.
- `case 1`: Menambahkan data baru ke dalam hash table.
- `case 2`: Menghapus data dari hash table berdasarkan NIM.
- `case 3`: Mencari dan menampilkan data berdasarkan NIM.
- `case 4`: Mencari dan menampilkan data berdasarkan rentang nilai.
- `case 5`: Keluar dari program.
- `default`: Menampilkan pesan jika pilihan tidak valid.

Program ini menyediakan menu bagi pengguna untuk mengelola data mahasiswa menggunakan hash table. Fungsi-fungsi yang tersedia memungkinkan penambahan, penghapusan, dan pencarian data berdasarkan NIM maupun rentang nilai, serta implementasi hash table menggunakan chaining untuk menangani kolisi.

#### Full code screenshot:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/8cd0373f-e2be-4576-8c87-192c75cd8bb3)


![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/5b1dfcdf-c7cf-43bb-b0b3-686dd7af2941)


![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/aee9e74b-9a2f-4043-8322-33c282d6ed86)


## Kesimpulan
Rekursi adalah teknik pemrograman di mana suatu fungsi memanggil dirinya sendiri untuk menyelesaikan tugas tertentu. Teknik ini terdiri dari dua komponen utama: base case, yaitu kondisi yang menghentikan rekursi, dan recursive case, bagian dari fungsi yang memanggil dirinya sendiri dengan parameter yang lebih sederhana. Kelebihan rekursi meliputi kesederhanaan dan kerapian dalam menyelesaikan masalah kompleks serta penerapan dalam algoritma divide and conquer seperti quicksort dan mergesort. Namun, rekursi juga memiliki kekurangan seperti overhead performa karena setiap panggilan membutuhkan penambahan ke stack call, serta potensi stack overflow jika base case tidak tercapai atau terlalu banyak panggilan dilakukan.

Di sisi lain, hash table adalah struktur data yang menyediakan penyimpanan dan pengambilan data dengan waktu akses konstan rata-rata O(1). Hash table menggunakan fungsi hash untuk memetakan kunci ke indeks dalam array. Komponen utama hash table termasuk fungsi hash, yang mendistribusikan kunci secara merata untuk mengurangi kolisi, dan buckets, array tempat elemen-elemen disimpan. Untuk menangani kolisi, hash table menggunakan teknik seperti chaining dan open addressing. Kelebihan hash table adalah efisiensinya dalam akses dan penyimpanan data serta kesederhanaannya. Namun, kinerjanya sangat tergantung pada kualitas fungsi hash, dan dapat memiliki overhead memori yang tinggi serta biaya tinggi untuk resizing.


## Referensi
[1] U. Ta, “Pemograman C++ Bab 11 Fungsi Rekursif.pdf,” www.academia.edu, Available: https://www.academia.edu/35362128/Pemograman_C_Bab_11_Fungsi_Rekursif_pdf. [Accessed: May 30, 2024]

[2] S. Herlambang, “Implementasi Fungsi Rekursif Dalam Algoritma dan Perbandingannya dengan Fungsi Iteratif.” Available: https://informatika.stei.itb.ac.id/~rinaldi.munir/Matdis/2008-2009/Makalah2008/Makalah0809-079.pdf. [Accessed: May 30, 2024]

[3] R. Munir, “Rekursi dan Relasi Rekurens Bagian 1.” Available: https://informatika.stei.itb.ac.id/~rinaldi.munir/Matdis/2020-2021/Rekursi-dan-relasi-rekurens-(Bagian-1).pdf. [Accessed: May 30, 2024]

[4] W. Kaswidjanti, “Algoritma dan Pemrograman Lanjut.” Available: http://learning.upnyk.ac.id/pluginfile.php/6519/mod_resource/content/1/Rekursif.pdf. [Accessed: May 30, 2024]

[5] “Praktikum Algoritma dan Struktur Data 2010 BAB XI HASHING.” Available: https://elektro.um.ac.id/wp-content/uploads/2016/04/Struktur-Data-Modul-Praktikum-11-Hashing-Table.pdf. [Accessed: May 30, 2024]

[6] J. Prestiliano, “Aplikasi Tabel Hash dalam Pengarsipan dan Pencarian Data,” Feb. 2007. Available: https://repository.uksw.edu/bitstream/123456789/1012/2/ART_Jasson%20Prestiliano_Aplikasi%20tabel%20hash_Full%20text.pdf. [Accessed: May 30, 2024]

[7] Annisa, “Struktur Data Hash Table: Pengertian, Cara Kerja dan Operasi Hash Table,” FIKTI, Sep. 19, 2023. Available: https://fikti.umsu.ac.id/struktur-data-hash-table-pengertian-cara-kerja-dan-operasi-hash-table/. [Accessed: May 30, 2024]