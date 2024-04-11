#include <iostream>
using namespace std;

// Fungsi untuk mengurutkan array secara ascending menggunakan algoritma insertion sort
void insertion_sort_ascending(char arr[], int length) {
    int i, j;
    char tmp;

    for (i = 1; i < length; i++) {
        j = i;

        // Membandingkan dan menukar elemen
        while (j > 0 && arr[j - 1] > arr[j]) {
            // Menukar elemen
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }//end of while loop
    }//end of for loop
}

// Fungsi untuk mencetak isi array
void insertion_sort_descending(char arr[], int length) {
    int i, j;
    char tmp;

    for (i = 1; i < length; i++) {
        j = i;

        while (j > 0 && arr[j - 1] < arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }
    }
}

void print_array(char a[], int length) {
    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Masukkan jumlah karakter: ";
    cin >> n;

    char arr[n];
    cout << "Masukkan " << n << " karakter: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "\nUrutan karakter secara ascending: " << endl;
    insertion_sort_ascending(arr, n);
    print_array(arr, n);

    cout << "\nUrutan karakter secara descending: " << endl;
    insertion_sort_descending(arr, n);
    print_array(arr, n);

    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}