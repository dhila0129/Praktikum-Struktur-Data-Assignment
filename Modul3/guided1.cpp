#include <iostream>
using namespace std;

// Fungsi untuk mengurutkan array menggunakan algoritma bubble sort
void bubble_sort(double arr[], int length){
    bool not_sorted = true;
    int j=0;
    double tmp;

    //  Melakukan pengurutan hingga array sudah terurut
    while (not_sorted){
        not_sorted = false;
        j++;

        // Membandingkan dan menukar elemen
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i + 1]) {
                // Menukar elemen
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
            
                // Set not_sorted ke true karena ada perubahan
                not_sorted = true;
            }//end of if
        }//end of for loop
    }//end of while loop
}//end of bubble_sort

// Fungsi untuk mencetak isi array
void print_array(double a[], int length) {
    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    int length = 5; // Jumlah elemen dalam array
    double a[] = {22.1, 15.3, 8.2, 33.21, 99,99};

    cout << "Urutan bilangan sebelum sorting: " << endl;
    print_array(a, length);

    // Memanggil fungsi bubble_sprt untuk mengurutkan array
    bubble_sort(a, length);
    
    cout << "\nUrutan bilangan setelah sorting: " << endl;
    print_array(a, length);

    return 0;
}
