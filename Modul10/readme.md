# <h1 align="center">Laporan Praktikum Modul Graph dan Tree</h1>
<p align="center">Habibah Ratna Fadhila Islami Hana</p>

## Dasar Teori

### Graph
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/f31b2113-f998-455a-b887-dac1570fac78)

Definisi dari suatu graf adalah himpunan benda-benda yang disebut simpul (verteks atau node) yang terhubung oleh sisi (edge atau arc). Biasanya graf digambarkan sebagai kumpulan titik-titik (melambangkan verteks) yang dihubungkan oleh garis-garis (melambangkan sisi) [1]. 

Simpul adalah objek sembarang, seperti kota, atom-atom dan objek-objek yang dapat dijabarkan. Sisi adalah relasi yang menghubungkan antara objek-objek tersebut, sehingga objek-objek tersebut mempunyai makna.  Sebuah graf dimungkinkan tidak mempunyai sisi satu buah pun, tetapi simpulnya harus ada, minimal satu. 

Secara umum, sebuah graf dapat dirumuskan dengan, `G (V,E)`.
Dengan G adalah Graph sedangkan V adalah simpul dan E adalah busur [2]. 

Graf memiliki banyak jenis, di antaranya berdasarkan ada tidaknya gelang atau sisi ganda, kemudian ada juga yang dibedakan bedasar orientasi arah pada sisisisinya. Berdasarkan orientasi arah pada sisi, secara umum graf dapat dibedakan menjadi 2 jenis [1] :
1. Graf tak berarah (undirected graph)
Graf yang  sisinya tidak mempunyai orientasi arah. Pada graf tak-berarah, urutan pasangan simpul yang dihubungkan oleh sisi tidak diperhatikan.
2. Graf Berarah (directed graph)
Graf yangsetiap sisinya diberikan orientasi arah. Sisi berarah dalam graf ini dapat dinamakan sebagai busur (arc). Lain halnya dengan graf tak-berarah, urutan pasangan simpul disini sangat diperhatikan karena dapat menyatakan hal yang berbeda. Pada graf berarah, (vj,vk) dan (vk,vj) menyatakan dua buah busur yang berbeda.

### Tree
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/b51cfafa-12ae-4270-8a4a-bf4e3a9850d5)

Teori tree adalah teori yang digunakan untuk menyelesaikan permasalahan dengan menggunakan analogi permasalahan ke dalam bentuk pohon yang kemudian dicarikan solusi pemecahan permasalahannya, teori tree digunakan dalam penerapan konsep graf, tree didefinisikan sebagai graf yang tidak berarah terhubung. 

Suatu tree merupakan sekumpulan simpul yang saling terhubung satu sama lain membentuk struktur sebuah pohon. Struktur ini merupakan setiap simpul yang terhubung, tidak memiliki simpul anak, dan satu simpul ayah. Simpul yang tidak mempunyai simpul ayah disebut simpul akar. Dalam struktur pohon, hanya terdapat satu path yang menghubungkan satu simpul ke yang lain [3].

Teori pohon adalah teori yang digunakan untuk menyelesaikan permasalahan dengan menggunakan analogi permasalahan ke dalam bentuk pohon yang kemudian dicaarikan solusi pemecahan permasalahannya, selain dari itu teori pohon juga digunakan dalam penerapan konsep graph, dimana pohon dapat didefinisikan sebagai graph tidak berarah terhubung dan tidak mengandung sirkuit [4].

Terminologi dalam Tree [5]
- Node = sebuah elemen dalam sebuah tree; berisi sebuah informasi
- Parent =node yang berada di atas node lain secara langsung; B adalah parent dari D dan E
- Child = cabang langsung dari sebuah node; D dan E merupakan children dari B
- Root = node teratas yang tidak punya parent
- Sibling = sebuah node lain yang memiliki parent yang sama; Sibling dari B adalah C karena memiliki parent yang sama yaitu A
- Leaf = sebuah node yang tidak memiliki children. D, E, F, G, I adalah leaf. Leaf biasa disebut sebagai external node, sedangkan node selainnya disebut sebagai internal node. B, A, C, H adalah internal node.
- Level = semua node yang memiliki jarak yang sama dari root. A->level 0; B,C->level 1; D,E,F,G,H->level 2; I->level 3
- Depth = jumlah level yang ada dalam tree
- Complete = semua parent memiliki children yang penuh
- Balanced = semua subtree memiliki depth yang sama

Beberapa operasi pada struktur data tree:
- `Create (Empty Tree)`: Membuat struktur tree kosong. Ini biasanya melibatkan menginisialisasi variabel penunjuk ke root tree menjadi null.
- `Insert`: Memasukkan data baru ke dalam tree. Penempatan data baru ini mengikuti aturan tertentu, misalnya pada binary search tree, data yang lebih kecil dari root akan ditempatkan di sub-tree sebelah kiri, dan yang lebih besar di kanan.
- `Search`: Mencari data tertentu di dalam tree. Algoritma pencarian ini memanfaatkan struktur hierarki tree untuk mempercepat pencarian dibanding harus memeriksa seluruh elemen secara linear.
- `Delete`: Menghapus node tertentu dari tree. Proses penghapusan ini perlu mempertimbangkan apakah node tersebut memiliki child node (anak) atau tidak.
- `IsEmpty`: Mengecek apakah tree tersebut kosong atau tidak. Ini fungsi yang sederhana untuk mengecek apakah penunjuk root tree bernilai null.
- `Traversal`: Mengunjungi seluruh node pada tree sesuai dengan urutan tertentu. Ada tiga jenis traversal yang umum digunakan:
    - `Preorder`: Mengunjungi root terlebih dahulu, kemudian mengunjungi sub-tree kiri secara rekursif, dilanjutkan dengan mengunjungi sub-tree kanan secara rekursif.
    - `Inorder`: Mengunjungi sub-tree kiri secara rekursif, kemudian root, lalu mengunjungi sub-tree kanan secara rekursif. Inorder traversal pada binary search tree akan menghasilkan data yang terurut.
    - `Postorder`: Mengunjungi sub-tree kiri secara rekursif, kemudian mengunjungi sub-tree kanan secara rekursif, terakhir mengunjungi root.
- `Height`: Menghitung tinggi dari tree. Tinggi tree didefinisikan sebagai jumlah level maksimum dari root ke leaf node (node yang tidak memiliki anak).
- `Size`: Menghitung jumlah node yang terdapat pada tree.


## Guided 

### 1.  Program Graph
```C++
#include<iostream>
#include<iomanip>
using namespace std;

// array simpul berisi nama" kota
string simpul[7] = {"Ciamis",
                    "Bandung",
                    "Bekasi",
                    "Tasikmalaya",
                    "Cianjur",
                    "Purwokerto",
                    "Yogyakarta"};

// Matriks jarak antar kota
int busur[7][7] = {
    {0, 7, 8, 0, 0, 0, 0,},
    {0, 0, 5, 0, 9, 15, 0},
    {0, 5, 0, 9, 5, 0, 0},
    {0, 0, 0, 2, 4, 0, 8},
    {3, 0, 0, 1, 0, 0, 0},
    {0, 0, 7, 0, 0, 9, 4},
    {0, 0, 0, 0, 8, 0, 0}
};
// Menampilkan grafik dari kota" tsb
void tampilGraph(){
    for (int baris = 0; baris < 7; baris++){
        cout << simpul[baris] << " : ";
        for (int kolom = 0; kolom < 7; kolom++){
            if (busur[baris][kolom] != 0)
                cout << " -> " << simpul[kolom] << "(" << busur[baris][kolom] << ")";
        }
        cout << endl;
    }
}
// main program
int main(){ 
    tampilGraph(); // Menampilkan grafik dari kota" tsb
    return 0;
}
```
Program C++ tersebut adalah sebuah implementasi sederhana dari graf berbobot yang merepresentasikan jarak antar kota. Program ini menggunakan array dua dimensi untuk menyimpan jarak antar kota, serta array satu dimensi untuk menyimpan nama-nama kota sebagai simpul.

Program dimulai nama-nama kota yang disimpan dalam array string `simpul` yang terdiri dari tujuh elemen, masing-masing berisi nama kota seperti "Ciamis", "Bandung", "Bekasi", dan seterusnya.

Matriks jarak antar kota disimpan dalam array dua dimensi `busur` yang berukuran 7x7. Setiap elemen `busur[i][j]` merepresentasikan jarak dari kota `simpul[i]` ke kota `simpul[j]`. Jika elemen tersebut bernilai 0, berarti tidak ada jalan langsung antara kedua kota tersebut.

Fungsi `tampilGraph` digunakan untuk menampilkan representasi graf dari data yang telah disimpan. Fungsi ini melakukan iterasi melalui setiap simpul (kota) menggunakan loop. Untuk setiap kota, loop kedua memeriksa setiap pasangan kota tujuan untuk melihat apakah ada jalan langsung dengan mengecek apakah nilai dalam matriks `busur` tidak sama dengan 0. Jika ada jalan langsung, maka kota tujuan beserta jaraknya akan ditampilkan dalam format `kota_tujuan(jarak)`.

Fungsi `main` dalam program ini memanggil fungsi `tampilGraph` untuk menampilkan hasil representasi graf berbobot ke layar. Output dari program ini adalah daftar yang menunjukkan setiap kota beserta kota-kota tujuan yang dapat dicapai langsung dari kota tersebut serta jaraknya. Sebagai contoh, untuk kota "Ciamis", outputnya adalah "Ciamis : -> Bandung(7) -> Bekasi(8)", yang berarti dari "Ciamis" ada jalan langsung ke "Bandung" dengan jarak 7 dan ke "Bekasi" dengan jarak 8.

### 2. Program Tree
```C++
#include <iostream>
using namespace std;

// Definisi struktur pohon
struct pohon {
    pohon* kanan;
    char data;
    pohon* kiri;
};

// Deklarasi variabel global
pohon* simpul;
pohon* root;
pohon* saatIni;
pohon* helperA;
pohon* helperB;
pohon* alamat[256];

// Fungsi untuk inisialisasi root
void inisialisasi() {
    root = NULL;
}

// Fungsi untuk membuat simpul baru
void simpulBaru(char dataMasukkan) {
    simpul = new pohon;
    simpul->data = dataMasukkan;
    simpul->kanan = NULL;
    simpul->kiri = NULL;
}

// Fungsi untuk membuat simpul akar
void simpulAkar() {
    if (root == NULL) {
        char dataAnda;
        cout << "Silahkan masukkan data: ";
        cin >> dataAnda;
        simpulBaru(dataAnda);
        root = simpul;
        cout << "Root terbentuk..." << endl;
    } else {
        cout << "Root sudah ada..." << endl;
    }
}

// Fungsi untuk menambah simpul
void tambahSimpul() {
    if (root != NULL) {
        int i = 1, j = 1, penanda = 0;
        char dataUser;
        alamat[i] = root;

        while (penanda == 0 && j < 256) {
            cout << "Masukkan data kiri: ";
            cin >> dataUser;
            if (dataUser != '0') {
                simpulBaru(dataUser);
                saatIni = alamat[i];
                saatIni->kiri = simpul;
                j++;
                alamat[j] = simpul;
            } else {
                penanda = 1;
                j++;
                alamat[j] = NULL;
            }
            if (penanda == 0) {
                cout << "Masukkan data kanan: ";
                cin >> dataUser;
                if (dataUser != '0') {
                    simpulBaru(dataUser);
                    saatIni = alamat[i];
                    saatIni->kanan = simpul;
                    j++;
                    alamat[j] = simpul;
                } else {
                    penanda = 1;
                    j++;
                    alamat[j] = NULL;
            }
            }
            i++;
        }
    }
}

// Fungsi untuk membaca pohon
void bacaPohon() {
    if (root != NULL) {
        int i = 1, n = 1, pencacah = 0;
        cout << endl;
        while (alamat[i] != NULL) {
            saatIni = alamat[i];
            cout << saatIni->data << " ";
            pencacah++;
            if (pencacah == n) {
                cout << endl;
                pencacah = 0;
                n = n * 2;
            }
            i++;
        }
    }
}

// Fungsi utama
int main() {
    inisialisasi();
    simpulAkar();
    tambahSimpul();
    bacaPohon();
    return 0;
}
```
Program C++ tersebut adalah implementasi dari struktur data pohon biner. Program ini dimulai dengan sebuah struktur `pohon` yang didefinisikan untuk merepresentasikan simpul dalam pohon biner. Struktur ini memiliki tiga anggota yaitu, dua pointer `kanan` dan `kiri` yang menunjuk ke simpul anak kanan dan kiri, serta `data` yang menyimpan karakter.

Kemudian, beberapa variabel global dideklarasikan, termasuk pointer `simpul`, `root`, `saatIni`, `helperA`, dan `helperB`, serta array pointer `alamat` yang mampu menampung hingga 256 alamat simpul. Pointer `root` digunakan untuk menunjuk ke akar pohon.

Fungsi `inisialisasi` digunakan untuk menginisialisasi `root` menjadi `NULL`, menandakan bahwa pohon awalnya kosong. Fungsi `simpulBaru` digunakan untuk membuat simpul baru dengan data yang diberikan oleh pengguna. Fungsi ini mengalokasikan memori baru untuk simpul, menginisialisasi datanya, dan mengatur pointer anak kiri dan kanan menjadi `NULL`.

Fungsi `simpulAkar` digunakan untuk membuat simpul akar pohon jika pohon belum memiliki akar. Fungsi ini meminta pengguna memasukkan data untuk simpul akar, membuat simpul baru dengan data tersebut, dan menetapkan simpul tersebut sebagai akar. Jika akar sudah ada, pesan akan ditampilkan bahwa akar sudah terbentuk.

Fungsi `tambahSimpul` digunakan untuk menambah simpul ke dalam pohon. Fungsi ini menggunakan dua loop bersarang untuk mengiterasi melalui setiap simpul yang telah ditambahkan, menanyakan pengguna untuk data simpul kiri dan kanan. Jika pengguna memasukkan data yang valid (tidak '0'), simpul baru dibuat dan dihubungkan ke simpul saat ini sebagai anak kiri atau kanan. Jika pengguna memasukkan '0', penanda diatur untuk menghentikan penambahan simpul pada posisi tersebut.

Fungsi `bacaPohon` digunakan untuk membaca dan menampilkan struktur pohon secara level-order (per level). Fungsi ini menggunakan array `alamat` untuk menyimpan alamat simpul, mulai dari akar dan kemudian menambahkan anak kiri dan kanan ke dalam array. Simpul-simpul ditampilkan satu per satu, diikuti oleh simpul anak-anaknya hingga seluruh pohon ditampilkan.

Fungsi `main` adalah fungsi utama program. Fungsi ini memanggil `inisialisasi` untuk menginisialisasi pohon, kemudian memanggil `simpulAkar` untuk membuat simpul akar. Setelah itu, `tambahSimpul` dipanggil untuk menambahkan simpul-simpul lainnya berdasarkan input pengguna. Terakhir, `bacaPohon` dipanggil untuk menampilkan struktur pohon.

## Unguided 

### 1. Buatlah program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya.
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/2d98ae6a-0f20-4706-969a-8b8148587cb1)

```C++
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // Deklarasi variabel untuk jumlah simpul
    int num_nodes2311110038;
    cout << "Silakan masukan jumlah simpul: ";
    cin >> num_nodes2311110038;

    // Vektor untuk menyimpan nama-nama simpul (kota)
    vector<string> nodes(num_nodes2311110038);
    cin.ignore(); // Untuk mengabaikan karakter newline setelah input angka

    // Membaca nama-nama simpul (kota)
    for (int i = 0; i < num_nodes2311110038; ++i) {
        cout << "Simpul " << i + 1 << ": ";
        getline(cin, nodes[i]);
    }

    // Inisialisasi matriks ketetanggaan (adjacency matrix)
    vector<vector<int>> adjacency_matrix(num_nodes2311110038, vector<int>(num_nodes2311110038, 0));

    // Membaca bobot (jarak) antara setiap pasangan simpul
    for (int i = 0; i < num_nodes2311110038; ++i) {
        for (int j = 0; j < num_nodes2311110038; ++j) {
            if (i != j) {
                cout << nodes[i] << "-->" << nodes[j] << " = ";
                cin >> adjacency_matrix[i][j];
            }
        }
    }

    // Menampilkan matriks ketetanggaan
    cout << setw(10) << " ";
    for (const auto& node : nodes) {
        cout << setw(10) << node;
    }
    cout << endl;

    for (int i = 0; i < num_nodes2311110038; ++i) {
        cout << setw(10) << nodes[i];
        for (int j = 0; j < num_nodes2311110038; ++j) {
            cout << setw(10) << adjacency_matrix[i][j];
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
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/f15b538c-6da6-4321-ab14-d7964cb7034f)

Program C++ ini adalah sebuah progrsm yang memungkinkan pengguna untuk membuat graf berbobot yang merepresentasikan jarak antar kota menggunakan matriks ketetanggaan (adjacency matrix).

Di dalam fungsi `main`, program pertama-tama mendeklarasikan sebuah variabel `num_nodes2311110038` yang akan digunakan untuk menyimpan jumlah simpul (kota) yang akan diinput oleh pengguna. Program kemudian meminta pengguna untuk memasukkan jumlah simpul ini dan menyimpannya dalam variabel tersebut.

Setelah itu, sebuah vektor bernama `nodes` dengan ukuran yang sesuai jumlah simpul diinisialisasi untuk menyimpan nama-nama simpul (kota). Pengguna kemudian diminta untuk memasukkan nama-nama kota satu per satu, yang disimpan dalam vektor `nodes`. Perintah `cin.ignore()` digunakan untuk mengabaikan karakter newline setelah input angka, sehingga pembacaan nama-nama simpul dengan `getline` dapat berjalan dengan benar.

Selanjutnya, program menginisialisasi matriks ketetanggaan `adjacency_matrix`, yang merupakan vektor dua dimensi berukuran `num_nodes2311110038` x `num_nodes2311110038` dan diinisialisasi dengan nilai 0. Matriks ini akan digunakan untuk menyimpan jarak antar setiap pasangan simpul.

Program kemudian memasuki dua loop bersarang untuk membaca bobot (jarak) antara setiap pasangan simpul. Jika simpul sumber (i) dan simpul tujuan (j) berbeda, pengguna akan diminta untuk memasukkan jarak antara kedua simpul tersebut. Nilai jarak ini disimpan dalam elemen yang sesuai dalam `adjacency_matrix`.

Setelah semua jarak dimasukkan, program menampilkan matriks ketetanggaan. Pertama, nama-nama simpul dicetak sebagai header kolom. Kemudian, untuk setiap simpul, nama simpul dicetak sebagai header baris diikuti oleh nilai jarak ke setiap simpul lainnya. Fungsi `setw(10)` dari header `<iomanip>` digunakan untuk memastikan setiap nama simpul dan nilai jarak dicetak dengan lebar kolom yang sama, sehingga output terlihat rapi dan terformat dengan baik.

#### Full code Screenshot:
![modul 10 - unguided1](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/c25842a5-66f0-409c-8849-9b8efe762176)

### 2. Modifikasi guided tree diatas dengan program menu menggunakan input data tree dari user dan tampilkan pada pre-order, inorder, dan post order!

```C++
#include <iostream>
using namespace std;

// Definisi struktur pohon
struct pohon {
    pohon* kanan;
    char data2311110038;
    pohon* kiri;
};

// Deklarasi variabel global
pohon* simpul;
pohon* root;
pohon* saatIni;
pohon* helperA;
pohon* helperB;
pohon* alamat[256];

// Fungsi untuk inisialisasi root
void inisialisasi() {
    root = NULL;
}

// Fungsi untuk membuat simpul baru
void simpulBaru(char dataMasukkan) {
    simpul = new pohon;
    simpul->data2311110038 = dataMasukkan;
    simpul->kanan = NULL;
    simpul->kiri = NULL;
}

// Fungsi untuk membuat simpul akar
void simpulAkar() {
    if (root == NULL) {
        // Jika root belum ada, minta input data dan buat root
        char dataAnda;
        cout << "Silahkan masukkan data: ";
        cin >> dataAnda;
        simpulBaru(dataAnda);
        root = simpul;
        cout << "Root terbentuk..." << endl;
    } else {
        cout << "Root sudah ada..." << endl;
    }
}

// Fungsi untuk menambah simpul
void tambahSimpul() {
    if (root != NULL) {
         // Inisialisasi variabel untuk traversal dan penanda
        int i = 1, j = 1, penanda = 0;
        char dataUser;
        alamat[i] = root;

        while (penanda == 0 && j < 256) {
            // Input data untuk simpul kiri
            cout << "Masukkan data kiri (0 untuk berhenti): ";
            cin >> dataUser;
            if (dataUser != '0') {
                simpulBaru(dataUser);
                saatIni = alamat[i];
                saatIni->kiri = simpul;
                j++;
                alamat[j] = simpul;
            } else {
                penanda = 1;
                j++;
                alamat[j] = NULL;
            }
            if (penanda == 0) {
                // Input data untuk simpul kanan
                cout << "Masukkan data kanan (0 untuk berhenti): ";
                cin >> dataUser;
                if (dataUser != '0') {
                    simpulBaru(dataUser);
                    saatIni = alamat[i];
                    saatIni->kanan = simpul;
                    j++;
                    alamat[j] = simpul;
                } else {
                    penanda = 1;
                    j++;
                    alamat[j] = NULL;
                }
            }
            i++;
        }
    }
}

// Fungsi untuk traversal pre-order
void preOrder(pohon* node) {
    if (node != NULL) {
        cout << node->data2311110038 << " ";
        preOrder(node->kiri);
        preOrder(node->kanan);
    }
}

// Fungsi untuk traversal in-order
void inOrder(pohon* node) {
    if (node != NULL) {
        inOrder(node->kiri);
        cout << node->data2311110038 << " ";
        inOrder(node->kanan);
    }
}

// Fungsi untuk traversal post-order
void postOrder(pohon* node) {
    if (node != NULL) {
        postOrder(node->kiri);
        postOrder(node->kanan);
        cout << node->data2311110038 << " ";
    }
}

// Fungsi untuk menampilkan menu
void tampilkanMenu() {
    cout << "Menu:" << endl;
    cout << "1. Tambah Root" << endl;
    cout << "2. Tambah Simpul" << endl;
    cout << "3. Tampilkan Pre-order" << endl;
    cout << "4. Tampilkan In-order" << endl;
    cout << "5. Tampilkan Post-order" << endl;
    cout << "6. Keluar" << endl;
    cout << "Pilih opsi: ";
}

// Fungsi utama
int main() {
    // Inisialisasi pohon
    inisialisasi();
    int pilihan;
    do {
        // Tampilkan menu dan minta input pilihan user
        tampilkanMenu();
        cin >> pilihan;
        switch (pilihan) {
            case 1:
            // Tambah root
                simpulAkar();
                break;
            case 2:
                // Tambah simpul
                tambahSimpul();
                break;
            case 3:
                // Tampilkan traversal pre-order
                cout << "Pre-order: ";
                preOrder(root);
                cout << endl;
                break;
            case 4:
                // Tampilkan traversal in-order
                cout << "In-order: ";
                inOrder(root);
                cout << endl;
                break;
            case 5:
                // Tampilkan traversal post-order
                cout << "Post-order: ";
                postOrder(root);
                cout << endl;
                break;
            case 6:
                // Keluar dari program
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Opsi tidak valid. Silakan coba lagi." << endl;
                break;
        }
    } while (pilihan != 6);
    
    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}
```
#### Output:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/6892f7dd-e4d2-4fe9-bc8a-8d1820e47b89)

![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/7eba2bed-6d01-44d5-acea-ce46e59b53a4)

![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/ffd17dce-102e-436b-8d18-6da5bcdd2f2a)


Program C++ ini memungkinkan pengguna untuk membangun dan mengelola sebuah pohon biner dengan menggunakan beberapa fungsi untuk menambahkan simpul dan melakukan traversal pohon dalam tiga metode yaitu, pre-order, in-order, dan post-order. 

Program dimulai dengan mendefinisikan struktur `pohon` yang merepresentasikan sebuah simpul dalam pohon biner. Struktur ini memiliki tiga anggota yaitu, dua pointer (`kanan` dan `kiri`) yang menunjuk ke anak kanan dan kiri, serta `data2311110038` yang menyimpan data simpul.

Kemudian, beberapa variabel global dideklarasikan. Variabel tersebut adalah `simpul`, `root`, `saatIni`, `helperA`, `helperB`, dan `alamat[256]`. Variabel-variabel ini digunakan dalam berbagai fungsi untuk mengelola simpul-simpul dalam pohon.

Fungsi `inisialisasi` digunakan untuk menginisialisasi variabel `root` dengan nilai NULL, menandakan bahwa pohon biner belum memiliki akar.

Fungsi `simpulBaru` menerima sebuah karakter `dataMasukkan` dan membuat sebuah simpul baru dengan data tersebut. Simpul baru ini diinisialisasi dengan nilai NULL untuk kedua pointer anaknya (`kanan` dan `kiri`).

Fungsi `simpulAkar` digunakan untuk membuat simpul akar jika akar belum ada. Fungsi ini meminta input data dari pengguna, membuat simpul baru dengan data tersebut, dan menetapkan simpul tersebut sebagai akar pohon (`root`). Jika akar sudah ada, fungsi ini hanya mencetak pesan bahwa akar sudah ada.

Fungsi `tambahSimpul` digunakan untuk menambah simpul-simpul baru ke dalam pohon. Fungsi ini mengiterasi melalui pohon, meminta pengguna untuk memasukkan data untuk simpul kiri dan kanan dari setiap simpul saat ini. Jika pengguna memasukkan '0', proses penambahan simpul dihentikan.

Selanjutnya, ada tiga fungsi untuk melakukan traversal pohon yaitu, `preOrder`, `inOrder`, dan `postOrder`. Fungsi `preOrder` digunakan untuk mencetak data simpul saat ini, lalu secara rekursif memanggil dirinya untuk anak kiri dan anak kanan. Fungsi `inOrder` secara rekursif memanggil dirinya untuk anak kiri, mencetak data simpul saat ini, dan kemudian memanggil dirinya untuk anak kanan. Fungsi `postOrder` secara rekursif memanggil dirinya untuk anak kiri dan anak kanan, kemudian mencetak data simpul saat ini.

Fungsi `tampilkanMenu` menampilkan menu opsi yang tersedia bagi pengguna untuk mengelola pohon biner. Menu ini memungkinkan pengguna untuk menambah root, menambah simpul, dan melakukan traversal pohon.

Di dalam fungsi `main`, pohon diinisialisasi dengan memanggil `inisialisasi`. Sebuah loop `do-while` digunakan untuk terus menampilkan menu dan meminta input pengguna hingga pengguna memilih untuk keluar dari program. Berdasarkan input pengguna, fungsi yang sesuai dipanggil untuk menambah root, menambah simpul, atau melakukan traversal pohon. Setelah setiap operasi, hasil traversal akan dicetak.

#### Full code Screenshot:
![modul 10 - unguided2](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/f05394d0-6f96-45fd-a6a6-ea91069f4343)

## Kesimpulan
Graph adalah struktur data abstrak yang terdiri dari simpul (node) yang terhubung oleh sisi (edge). Graph dapat digunakan untuk merepresentasikan berbagai jenis hubungan, seperti jaringan sosial, jaringan komputer, dan rute perjalanan. Graph dapat dibagi menjadi dua jenis utama: directed graph (berarah) dan undirected graph (tidak berarah). Selain itu, graph dapat memiliki bobot pada setiap sisi (weighted graph) atau tidak (unweighted graph).

Tree, di sisi lain, adalah bentuk khusus dari graph yang tidak memiliki siklus. Dalam tree, setiap simpul terhubung ke simpul lain melalui tepat satu jalur. Pada tree, terdapat simpul akar (root node) yang menjadi titik awal, dan setiap simpul lainnya memiliki tepat satu simpul induk, kecuali simpul akar. Tree banyak digunakan untuk menyimpan dan mengorganisir data dengan hierarki, seperti struktur file dalam sistem operasi atau hierarki organisasi dalam database.

Di sisi lain, hash table adalah struktur data yang menyediakan penyimpanan dan pengambilan data dengan waktu akses konstan rata-rata O(1). Hash table menggunakan fungsi hash untuk memetakan kunci ke indeks dalam array. Komponen utama hash table termasuk fungsi hash, yang mendistribusikan kunci secara merata untuk mengurangi kolisi, dan buckets, array tempat elemen-elemen disimpan. Untuk menangani kolisi, hash table menggunakan teknik seperti chaining dan open addressing. Kelebihan hash table adalah efisiensinya dalam akses dan penyimpanan data serta kesederhanaannya. Namun, kinerjanya sangat tergantung pada kualitas fungsi hash, dan dapat memiliki overhead memori yang tinggi serta biaya tinggi untuk resizing.


## Referensi

[1]F. D. Anggara, “Studi dan Implementasi Struktur Data Graf.” Available: https://informatika.stei.itb.ac.id/~rinaldi.munir/Matdis/2008-2009/Makalah2008/Makalah0809-097.pdf. [Accessed: Jun. 06, 2024]

[2]B. Himawan, D. Maulana, V. Amelia, and T. Hidayat, “IMPLEMENTASI GRAF DALAM PENYIMPANAN DATA STRUKTUR BANGUNAN,” 2008. Available: https://journal.uii.ac.id/Snati/article/download/553/477. [Accessed: Jun. 06, 2024]

[3]D. Fikry Akmal, A. Pinandito, and B. Priyambadha, “Rancang Bangun Aplikasi Mobile Struktur Data Graf Berbasis Google Maps,” Jurnal Pengembangan Teknologi Informasi dan Ilmu Komputer, vol. 2, no. 10, pp. 3173–3181, 2018, Available: https://j-ptiik.ub.ac.id/index.php/j-ptiik/article/download/2572/950/17618. [Accessed: Jun. 06, 2024]

[4]S. Agustin, A. Y. Permana, H. N. Fazri, M. R. Daffa H, M. Robi, and R. Firmansyah, “IMPLEMENTASI STRUKTUR DATA TREE PADA WEB BLOG SEBAGAI MEDIA PEMBELAJARAN,” Amikveteran.ac.id, Jul. 25, 2022. Available: https://journal.amikveteran.ac.id/index.php/jitek/article/view/316/251. [Accessed: Jun. 06, 2024]

[5]F. Latifah, “PENERAPAN ALGORITHMA POHON UNTUK OPERASI PENGOLAHAN DAN PENYIMPANAN DATA DALAM TEKNIK PEMROGRAMAN (KAJIAN ALGORITHMA POHON PADA TEKNIK PEMROGRAMAN),” Jurnal TECHNO Nusa Mandiri, vol. 8, no. 2, pp. 111–120, Sep. 2016, Available: https://ejournal.nusamandiri.ac.id/index.php/techno/article/download/203/179. [Accessed: Jun. 06, 2024]