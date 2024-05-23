# <h1 align="center">Laporan Praktikum Modul Priority Queue dan Heaps</h1>
<p align="center">Habibah Ratna Fadhila Islami Hana</p>

## Dasar Teori

### Priority Queue
Priority Queue adalah suatu bentuk struktur data yang berbasiskan struktur Queue pada umumnya [1]. Priority Queue adalah struktur data yang penting dalam ilmu komputer, digunakan untuk mengelola dan memproses elemen berdasarkan prioritas mereka. Priority Queue bekerja berdasarkan aturan elemen yang prioritasnya lebih tinggi, diproses lebih dahulu dibandingkan dengan elemen yang prioritasnya lebih rendah dan dua elemen dengan prioritas yang sama, diproses sesuai dengan urutan mereka sewaktu dimasukkan ke dalam
priority queue [2].

Priority Queue adalah struktur data yang mendukung dua operasi dasar seperti memasukkan elemen dengan prioritas tertentu dan menghapus elemen dengan prioritas tertinggi. Ada dua jenis Priority Queue, yaitu Max-Priority Queue (mengeluarkan elemen dengan prioritas tertinggi terlebih dahulu) dan Min-Priority Queue (mengeluarkan elemen dengan prioritas terendah terlebih dahulu).

Operasi utama Priority Queue:
- `insert(item, priority)`: Menambahkan elemen dengan prioritas tertentu.
- `extractMax()` atau `extractMin()`: Menghapus dan mengembalikan elemen dengan prioritas tertinggi atau terendah.
- `getMax()` atau `getMin()`: Mengembalikan elemen dengan prioritas tertinggi atau terendah tanpa menghapusnya.

Keunggulan Priority Queue:
- Membantu untuk mengakses elemen dengan cara yang lebih cepat. Ini karena elemen dalam antrian prioritas diurutkan berdasarkan prioritas, seseorang dapat dengan mudah mengambil elemen dengan prioritas tertinggi tanpa harus mencari di seluruh antrian.
- Pengurutan elemen dalam Priority Queue dilakukan secara dinamis. Elemen-elemen dalam antrean prioritas dapat diperbarui nilai prioritasnya, yang memungkinkan antrean untuk mengurutkan ulang secara dinamis saat prioritas berubah.
- Algoritma yang efisien dapat diimplementasikan. Antrean prioritas digunakan dalam banyak algoritma untuk meningkatkan efisiensinya, seperti algoritma Dijkstra untuk menemukan jalur terpendek dalam graf dan algoritma pencarian A* untuk pencarian jalur.
- Termasuk dalam sistem real-time. Ini karena antrean prioritas memungkinkan untuk mengambil elemen dengan prioritas tertinggi dengan cepat, antrean tersebut sering digunakan dalam sistem waktu nyata di mana waktu adalah hal yang sangat penting.

Kekurangan Priority Queue:
- Kompleksitas tinggi. Antrean prioritas lebih kompleks daripada struktur data sederhana seperti larik dan daftar tertaut, dan mungkin lebih sulit untuk diterapkan dan dipelihara.
- Konsumsi memori yang tinggi. Menyimpan nilai prioritas untuk setiap elemen dalam antrian prioritas dapat menghabiskan memori tambahan, yang mungkin menjadi perhatian dalam sistem dengan sumber daya terbatas.
- Tidak selalu merupakan struktur data yang paling efisien. Dalam beberapa kasus, struktur data lain seperti stack atau binary search tree mungkin lebih efisien untuk operasi tertentu, seperti menemukan elemen minimum atau maksimum dalam antrean.
- Kadang-kadang kurang dapat diprediksi. Hal ini terjadi karena karena urutan elemen dalam antrean prioritas ditentukan oleh nilai prioritasnya, urutan pengambilan elemen mungkin kurang dapat diprediksi dibandingkan dengan struktur data lain seperti stack atau queue, yang mengikuti first-in, first-out ( FIFO) atau last-in, first-out (LIFO) [3].

![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/a0e6ad1d-e631-45af-ac71-96c2f5d2d79e)

### Heaps
Heap adalah struktur data yang berbentuk pohon yang memenuhi sifat-sifat heap yaitu jika B adalah anak dari A, maka nilai yang tersimpan di simpul A lebih besar atau sama dengan nilai yang tersimpan di simpul B. Hal ini mengakibatkan elemen dengan nilai terbesar selalu berada pada posisi akar, dan heap ini disebut max heap (bila perbandingannya diterbalikkan, yaitu elemen terkecilnya selalu berada di simpul akar, heap ini disebut adalah min heap). Karena itulah, heap biasa dipakai untuk mengimplementasikan priority queue [4].

Operasi-operasi yang digunakan untuk Heap adalah:
- `delete-max` atau `delete-min`: menghapus simpul akar dari sebuah max- atau min-heap.
- `increase-key` atau `decrease-key`: mengubah nilai yang tersimpan di suatu simpul.
- `insert`: menambahkan sebuah nilai ke dalam heap dan kemudian memperbaiki heap dengan operasi shift-up untuk menjaga properti heap.
- `merge`: menggabungkan dua heap untuk membentuk sebuah heap baru yang berisi semua elemen pembentuk heap tersebut.
- `change priority`: mengubah prioritas elemen dan menyesuaikan heap menggunakan operasi shift-up atau shift-down.

Aplikasi Heap:
- Priority Queue: Heap digunakan untuk mengimplementasikan priority queue, di mana elemen dengan prioritas tertinggi atau terendah dapat diakses dengan cepat.
- Heap Sort: Algoritma pengurutan yang menggunakan heap untuk mengurutkan elemen dalam O(n log n) waktu.
- Dijkstra’s Algorithm: Digunakan untuk menemukan jalur terpendek dalam graf dengan bantuan min-heap.
- Event Simulation: Mengelola peristiwa berdasarkan waktu terjadi dengan menggunakan priority queue.

![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/c7831367-29fd-4929-8a54-379521f7a959)

## Guided 
```C++
#include <iostream>
#include <algorithm>

int H[50];  // Array untuk menyimpan elemen-elemen heap
int heapSize = -1;  // Ukuran heap dimulai dari -1 (belum ada elemen)

int parent(int i) {
    return (i - 1) / 2;  // Mengembalikan indeks dari elemen parent
}

int leftChild(int i) {
    return ((2 * i) + 1);  // Mengembalikan indeks dari elemen left child
}

int rightChild(int i) {
    return ((2 * i) + 2);  // Mengembalikan indeks dari elemen right child
}

void shiftUp(int i) {
    // Memindahkan elemen pada indeks i ke atas untuk menjaga properti max-heap
    while (i > 0 && H[parent(i)] < H[i]) {
        std::swap(H[parent(i)], H[i]);  // Tukar elemen dengan parent jika lebih besar
        i = parent(i);  // Perbarui indeks ke parent
    }
}

void shiftDown(int i) {
    // Memindahkan elemen pada indeks i ke bawah untuk menjaga properti max-heap
    int maxIndex = i;  // Indeks maksimum awalnya adalah indeks saat ini
    int l = leftChild(i);  // Indeks left child
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;  // Jika left child lebih besar, perbarui indeks maksimum
    }
    int r = rightChild(i);  // Indeks right child
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;  // Jika right child lebih besar, perbarui indeks maksimum
    }
    if (i != maxIndex) {
        std::swap(H[i], H[maxIndex]);  
        shiftDown(maxIndex);  
    }
}

// Menambahkan elemen baru
void insert(int p) {
    heapSize = heapSize + 1;  // Menambahkan ukuran heap
    H[heapSize] = p;  // Masukkan elemen baru di akhir heap
    shiftUp(heapSize);  // Pindahkan elemen ke atas untuk menjaga properti heap
}

// Mengambil elemen dengan prioritas terbesar
int extractMax() {
    int result = H[0];  
    H[0] = H[heapSize];  
    heapSize = heapSize - 1;  
    shiftDown(0);  
    return result;  
}

// Mengubah prioritas elemen dalam heap
void changePriority(int i, int p) {
    int oldp = H[i];  // Simpan prioritas lama
    H[i] = p;  // Ubah prioritas elemen
    if (p > oldp) {
        shiftUp(i);  // Jika prioritas baru lebih besar, pindahkan ke atas
    } else {
        shiftDown(i);  // Jika prioritas baru lebih kecil, pindahkan ke bawah
    }
}

// Mengembalikan elemen maksimum
int getMax() {
    return H[0];  
}

// Menghapus elemen indeks tertentu
void remove(int i) {
    H[i] = getMax() + 1;  // Set elemen menjadi lebih besar dari maksimum
    shiftUp(i);  // Pindahkan elemen ke root
    extractMax();  // Hapus elemen root (elemen yang akan dihapus)
}

int main() {
    insert(45);  // Masukkan elemen ke heap
    insert(20);
    insert(14);
    insert(12);
    insert(31);
    insert(7);
    insert(11);
    insert(13);
    insert(7);
    
    std::cout << "Priority Queue : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";  // Cetak elemen-elemen heap
    }
    std::cout << "\n";
    
    std::cout << "Node with maximum priority : " << extractMax() << "\n";  // Ambil elemen maksimum
    
    std::cout << "Priority queue after extracting maximum : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";  // Cetak heap setelah mengambil elemen maksimum
    }
    std::cout << "\n";
    
    changePriority(2, 49);  // Ubah prioritas elemen pada indeks 2 menjadi 49
    std::cout << "Priority queue after priority change : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";  // Cetak heap setelah mengubah prioritas
    }
    std::cout << "\n";
    
    remove(3);  // Hapus elemen pada indeks 3
    std::cout << "Priority queue after removing the element : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";  // Cetak heap setelah menghapus elemen
    }
    return 0;  // Mengakhiri program
}
```
Program di atas adalah program yang mengimplementasikan struktur data heap (max-heap) dalam C++. Struktur data heap dalam program ini diimplementasikan sebagai max-heap menggunakan array `H` dengan ukuran maksimum 50. Heap disimpan dalam array `H` dan ukuran heap dilacak oleh variabel `heapSize` yang dimulai dari -1, menunjukkan bahwa heap kosong pada awalnya. Fungsi `parent(int i)` digunakan untuk mengembalikan indeks parent dari elemen pada indeks `i`, `leftChild(int i)` digunakan untuk mengembalikan indeks left child, dan `rightChild(int i)` digunakan untuk mengembalikan indeks right child.

Operasi `shiftUp(int i)` digunakan untuk memindahkan elemen pada indeks `i` ke atas untuk menjaga properti max-heap. Jika elemen lebih besar dari parent-nya, elemen tersebut ditukar dengan parent-nya hingga properti max-heap terpenuhi. Sedangkan operasi `shiftDown(int i)` digunakan untuk memindahkan elemen pada indeks `i` ke bawah untuk menjaga properti max-heap. Jika elemen lebih kecil dari salah satu anaknya, elemen tersebut ditukar dengan anak terbesar dan proses berulang hingga properti max-heap terpenuhi.

Fungsi `insert(int p)` menambahkan elemen baru `p` ke dalam heap. Elemen tersebut ditempatkan di akhir heap dan dipindahkan ke atas untuk menjaga properti max-heap.

Fungsi `extractMax()` menghapus elemen dengan prioritas tertinggi (elemen root). Elemen terakhir menggantikan posisi root dan dipindahkan ke bawah untuk menjaga properti max-heap. Fungsi ini mengembalikan nilai elemen yang dihapus.

Fungsi `changePriority(int i, int p)` mengubah prioritas elemen pada indeks `i` menjadi `p`. Jika prioritas baru lebih besar, elemen dipindahkan ke atas, jika lebih kecil, elemen dipindahkan ke bawah.

Fungsi `getMax()` mengembalikan elemen dengan prioritas tertinggi (elemen root).

Fungsi `remove(int i)` menghapus elemen pada indeks `i`. Elemen tersebut diubah menjadi lebih besar dari elemen maksimum dan dipindahkan ke root, kemudian dihapus menggunakan `extractMax()`.

Pada fungsi `main()` yang merupakan fungsi utama program, akan dijalankan berbagai operasi pada heap. Elemen-elemen yang akan diurutkan akan dimasukkan ke dalam heap. Kemudian, elemen maksimum akan diambil dan prioritas elemen diubah. Lalu akan ada elemen yang dihapus. Terakhir, hasil dari setiap operasi dicetak.

## Unguided 

### Modifikasi guided diatas yang mana heap dikonstruksi secara manual berdasarkan user.
```C++
#include <iostream>
#include <algorithm>
using namespace std;

int H[50];  // Array untuk menyimpan elemen-elemen heap
int heapSize = -1;  // Ukuran heap dimulai dari -1 (belum ada elemen)

int parent(int i) {
    return (i - 1) / 2;  // Mengembalikan indeks dari elemen parent
}

int leftChild(int i) {
    return ((2 * i) + 1);  // Mengembalikan indeks dari elemen left child
}

int rightChild(int i) {
    return ((2 * i) + 2);  // Mengembalikan indeks dari elemen right child
}

void shiftUp(int i) {
    // Memindahkan elemen pada indeks i ke atas untuk menjaga properti max-heap
    while (i > 0 && H[parent(i)] < H[i]) {
        swap(H[parent(i)], H[i]);  // Tukar elemen dengan parent jika lebih besar
        i = parent(i);  // Perbarui indeks ke parent
    }
}

void shiftDown(int i) {
    // Memindahkan elemen pada indeks i ke bawah untuk menjaga properti max-heap
    int maxIndex = i;  // Indeks maksimum awalnya adalah indeks saat ini
    int l = leftChild(i);  // Indeks left child
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;  // Jika left child lebih besar, perbarui indeks maksimum
    }
    int r = rightChild(i);  // Indeks right child
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;  // Jika right child lebih besar, perbarui indeks maksimum
    }
    if (i != maxIndex) {
        swap(H[i], H[maxIndex]);  // Tukar elemen dengan child yang lebih besar
        shiftDown(maxIndex);  // Rekursi pada elemen yang dipindahkan
    }
}

// Menambahkan elemen baru
void insert(int p) {
    heapSize = heapSize + 1;  // Menambahkan ukuran heap
    H[heapSize] = p;  // Masukkan elemen baru di akhir heap
    shiftUp(heapSize);  // Pindahkan elemen ke atas untuk menjaga properti heap
}

// Mengambil elemen dengan prioritas terbesar
int extractMax() {
    int result = H[0];  // Elemen maksimum adalah elemen root
    H[0] = H[heapSize];  // Pindahkan elemen terakhir ke root
    heapSize = heapSize - 1;  // Kurangi ukuran heap
    shiftDown(0);  // Pindahkan elemen root ke bawah untuk menjaga properti heap
    return result;  // Kembalikan elemen maksimum
}

// Mengubah prioritas elemen dalam heap
void changePriority(int i, int p) {
    int oldp = H[i];  // Simpan prioritas lama
    H[i] = p;  // Ubah prioritas elemen
    if (p > oldp) {
        shiftUp(i);  // Jika prioritas baru lebih besar, pindahkan ke atas
    } else {
        shiftDown(i);  // Jika prioritas baru lebih kecil, pindahkan ke bawah
    }
}

// Mengembalikan elemen maksimum
int getMax() {
    return H[0];  // Mengembalikan elemen maksimum (root dari heap)
}

// Menghapus elemen indeks tertentu
void remove(int i) {
    H[i] = getMax() + 1;  // Set elemen menjadi lebih besar dari maksimum
    shiftUp(i);  // Pindahkan elemen ke root
    extractMax();  // Hapus elemen root (elemen yang akan dihapus)
}

int main() {
    int n;
    cout << "Enter number of elements to insert into the heap: ";
    cin >> n;  // Menerima jumlah elemen dari pengguna

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; ++i) {
        int element;
        cin >> element;  // Menerima setiap elemen dari pengguna
        insert(element);  // Memasukkan elemen ke dalam heap
    }
    
    cout << "Priority Queue : ";
    for (int i = 0; i <= heapSize; ++i) {
        cout << H[i] << " ";  // Cetak elemen-elemen heap
    }
    cout << "\n";
    
    cout << "Node with maximum priority : " << extractMax() << "\n";  // Ambil elemen maksimum
    
    cout << "Priority queue after extracting maximum : ";
    for (int i = 0; i <= heapSize; ++i) {
        cout << H[i] << " ";  // Cetak heap setelah mengambil elemen maksimum
    }
    cout << "\n";
    
    // Mengubah prioritas elemen pada indeks yang dipilih oleh pengguna
    int index, newPriority;
    cout << "Enter the index to change priority: ";
    cin >> index;
    cout << "Enter the new priority: ";
    cin >> newPriority;
    changePriority(index, newPriority);
    cout << "Priority queue after priority change : ";
    for (int i = 0; i <= heapSize; ++i) {
        cout << H[i] << " ";  // Cetak heap setelah mengubah prioritas
    }
    cout << "\n";
    
    // Menghapus elemen pada indeks yang dipilih oleh pengguna
    cout << "Enter the index of the element to remove: ";
    cin >> index;
    remove(index);
    cout << "Priority queue after removing the element : ";
    for (int i = 0; i <= heapSize; ++i) {
        cout << H[i] << " ";  // Cetak heap setelah menghapus elemen
    }

    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;  // Mengakhiri program
}
```
#### Output:
![image](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/84b6ccaa-63d4-47ff-94cb-eeac899c22d3)

Program C++ di atas mengimplementasikan struktur data max-heap menggunakan array. Pertama, array `H` berukuran 50 digunakan untuk menyimpan elemen-elemen heap, dan variabel `heapSize` diinisialisasi dengan nilai -1 untuk menunjukkan bahwa heap masih kosong. Fungsi `parent(int i)` digunakan untuk mengembalikan indeks parent dari elemen pada indeks `i`, `leftChild(int i)` digunakan untuk mengembalikan indeks left child dari elemen pada indeks `i`, dan `rightChild(int i)` digunakan untuk mengembalikan indeks right child dari elemen pada indeks `i`.

Fungsi `shiftUp(int i)` digunakan untuk memindahkan elemen pada indeks `i` ke atas untuk menjaga properti max-heap. Proses ini dilakukan dengan membandingkan elemen dengan parent-nya dan menukar mereka jika elemen tersebut lebih besar dari parent-nya. Proses ini terus berlanjut hingga elemen tersebut berada pada posisi yang benar sesuai dengan aturan max-heap. Fungsi `shiftDown(int i)` digunakan untuk memindahkan elemen pada indeks `i` ke bawah untuk menjaga properti max-heap. Proses ini dilakukan dengan membandingkan elemen dengan child-nya dan menukar mereka jika elemen tersebut lebih kecil dari child-nya. Proses ini terus berlanjut hingga elemen tersebut berada pada posisi yang benar sesuai dengan aturan max-heap.

Fungsi `insert(int p)` berguna untuk menambahkan elemen baru `p` ke dalam heap. Pertama, ukuran heap ditingkatkan dengan menambah `heapSize` sebesar 1. Elemen baru kemudian dimasukkan di akhir heap, dan fungsi `shiftUp` dipanggil untuk memindahkan elemen tersebut ke atas agar memenuhi properti max-heap. 

Fungsi `extractMax()` digunakan untuk menghapus dan mengembalikan elemen maksimum (root) dari heap. Elemen maksimum akan disimpan dalam variabel `result`. Kemudian, elemen terakhir dalam heap dipindahkan ke root. Ukuran heap akan dikurangi dengan mengurangi `heapSize` sebesar 1, dan fungsi `shiftDown` dipanggil untuk memindahkan elemen tersebut ke bawah agar memenuhi properti max-heap.

Fungsi `changePriority(int i, int p)` berguna untuk mengubah prioritas elemen pada indeks `i` menjadi `p`. Prioritas lama disimpan dalam variabel `oldp`, dan elemen pada indeks `i` diubah menjadi `p`. Jika prioritas baru lebih besar dari prioritas lama, fungsi `shiftUp` dipanggil untuk memindahkan elemen tersebut ke atas. Jika prioritas baru lebih kecil, fungsi `shiftDown` dipanggil untuk memindahkan elemen tersebut ke bawah. Fungsi `getMax()` digunakan untuk mengembalikan elemen maksimum (root) tanpa menghapusnya.

Fungsi `remove(int i)` digunakan saat menghapus elemen pada indeks `i`. Pertama, elemen pada indeks `i` diubah menjadi lebih besar dari elemen maksimum saat ini dengan menetapkannya ke nilai `getMax() + 1`. Fungsi `shiftUp` kemudian dipanggil untuk memindahkan elemen tersebut ke root, dan fungsi `extractMax` dipanggil untuk menghapus elemen root.

Dalam fungsi utama program atau fungsi `main()`, program akan meminta pengguna untuk memasukkan jumlah elemen yang akan dimasukkan ke dalam heap dan elemen-elemen tersebut. Setelah elemen-elemen dimasukkan, program mencetak heap, mengambil elemen maksimum dan mencetaknya, mencetak heap lagi, mengubah prioritas elemen pada indeks tertentu yang dipilih oleh pengguna, dan mencetak heap setelah perubahan. Terakhir, program akan meminta pengguna untuk memasukkan indeks elemen yang akan dihapus, menghapus elemen tersebut, dan mencetak heap setelah penghapusan.

#### Full code Screenshot:
![modul 8 - unguided](https://github.com/dhila0129/Praktikum-Struktur-Data-Assignment/assets/161398011/2942abd6-87c2-48b1-af34-51d8fd0321f5)

## Kesimpulan

Priority Queue adalah jenis struktur data yang memperlakukan elemen-elemen dengan prioritas tertentu, di mana elemen dengan prioritas tertinggi selalu diproses lebih dulu. Priority Queue ini sangat berguna dalam berbagai aplikasi seperti penjadwalan proses, simulasi sistem, dan algoritma grafis seperti Dijkstra. 

Heap, khususnya max-heap dan min-heap, adalah implementasi efisien dari priority queue. Heap adalah struktur data berbentuk pohon biner yang memiliki dua properti utama complete binary tree dan heap property. Dalam max-heap, setiap parent node lebih besar dari atau sama dengan anak-anaknya, sedangkan dalam min-heap, setiap parent node lebih kecil dari atau sama dengan anak-anaknya. Hal ini memungkinkan heap untuk mengakses elemen dengan prioritas tertinggi dalam waktu konstan O(1), dan operasi lain seperti penyisipan dan penghapusan dapat dilakukan dalam waktu logaritmik O(log n).

## Referensi

[1] A. Nurcholis, S. Batara N, and M. Octamanullah, “Penerapan Struktur Data Heap Priority Queue pada Algoritma Djikstra untuk Mendapatkan Kompleksitas O((n + m)log n).” Available: https://informatika.stei.itb.ac.id/~rinaldi.munir/Stmik/Makalah/MakalahStmik38.pdf. [Accessed: May 23, 2024]

[2] J. A. Aryandi, M. A. Nugraha, Y. A. A. Basith, M. F. Pratama, D. Pradeka, and D. Anggraini, “Implementasi Algoritma Queue untuk Menentukan Prioritas Pelayanan Umum di Rumah Sakit,” JIKO (Jurnal Informatika dan Komputer), vol. 7, no. 2, pp. 218–228, Sep. 2023, Available: https://ejournal.utdi.ac.id/index.php/jiko/article/view/806/pdf. [Accessed: May 23, 2024]

[3] G. S. H. Barata, B. B. Pangestu, E. W. Lay, and M. Alghifari, “Makalah Priority Queue Revisi,” Scribd, 2023. Available: https://id.scribd.com/document/657230171/Makalah-Priority-Queue-revisi. [Accessed: May 23, 2024]

[4] F. L. Tobing, F. A. T. Tobing, and J. Peranginangin, “Implementasi Algoritma Heapsort dalam Game Pembelajaran Algoritma Sorting,” JURNAL WIDYA, vol. 3, no. 2, pp. 331–343, Oct. 2022, doi: https://doi.org/10.54593/awl.v3i2.126. Available: https://jurnal.amikwidyaloka.ac.id/index.php/awl/article/view/126. [Accessed: May 23, 2024]