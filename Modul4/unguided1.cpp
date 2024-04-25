#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int binarySearch(string arr[], int l, int r, string x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main() {
    string sentence;
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, sentence);
    int n = sentence.length();
    string arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = sentence[i];
    }
    sort(arr, arr + n);
    string letter;
    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> letter;
    int result = binarySearch(arr, 0, n - 1, letter);
    if (result == -1) {
        cout << "Huruf tidak ditemukan dalam kalimat." << endl;
    } else {
        cout << "Huruf ditemukan pada indeks " << result << "." << endl;
    }

    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}