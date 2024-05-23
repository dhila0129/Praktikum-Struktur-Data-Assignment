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