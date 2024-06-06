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