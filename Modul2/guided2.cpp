#include <iostream>
using namespace std;
int main()
{
    int maks, a, i = 1, lokasi;
    cout << "Masukkan panjang array: ";
    cin >> a;
    int array[a];
    cout << "Masukkan " << a << " angka\n";
    for (i= 0; i < a; i++)
    {
        cout << "Array ke-" << (i) << ": ";
        cin >> array[i];
    }
    maks = array[0]; // Fungsi untuk mencari nilai max, umpamakan nilai maks ada di index ke 0
    for (i = 0; i < a; i++)
    {
        if (array[i] > maks) // Untuk membandingkan apakah arr 0 > maks? jika salah akan diulang
        {
            maks = array[i]; // Jika benar, nilai maks akan diganti 
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;

    return 0; // Return 0 to indicate successful execution
}