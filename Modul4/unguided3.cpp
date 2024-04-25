#include <iostream>
using namespace std;

int sequentialSearch(int data[], int n, int target) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (data[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int n = sizeof(data) / sizeof(data[0]);
    int target = 4;

    cout << "Array data : {9, 4, 1, 4, 7, 10, 5, 4, 12, 4}" << endl;
    int jumlahKemunculan = sequentialSearch(data, n, target);
    cout << "Jumlah kemunculan angka " << target << " pada array data adalah: " << jumlahKemunculan << endl;

    cout << " " << endl;
    cout << " " << endl;
    cout << "By: Habibah Ratna Fadhila Islami Hana (2311110038)" << endl;
    return 0;
}