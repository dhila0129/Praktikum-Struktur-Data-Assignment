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