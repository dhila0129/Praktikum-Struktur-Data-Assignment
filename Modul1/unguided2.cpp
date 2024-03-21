#include <iostream>
#include <string>
using namespace std;

class Drachin_Paling_Romantis1{
public:
    string judul;
    int tahun_rilis;
    int jumlah_episode;
};

struct Drachin_Paling_Romantis2{
public:
    string judul;
    int tahun_rilis;
    int jumlah_episode;
};

int main(){
  //Merepresentasikan drama 1 dan drama 2
    Drachin_Paling_Romantis1 drama1;
    Drachin_Paling_Romantis2 drama2;

    //Mengisi nilai ke struct drama 1
    drama1.judul = "Hidden Love";
    drama1.tahun_rilis = 2023;
    drama1.jumlah_episode = 25;

    //Mencetak isi struct drama 1
    cout << "=== Drama China Paling Romantis 1 ==="
         << "\nJudul Drama: " << drama1.judul
         << "\nTahun Rilis: " << drama1.tahun_rilis
         << "\nJumlah Episode: " << drama1.jumlah_episode << endl;

//Mengisi nilai ke struct drama 2
    drama2.judul = "Fireworks of My Heart";
    drama2.tahun_rilis = 2023;
    drama2.jumlah_episode = 44;

//Mencetak isi struct drama 2
cout << "=== Drama China Paling Romantis 2 ==="
     << "\nJudul Drama: " << drama2.judul
     << "\nTahun Rilis: " << drama2.tahun_rilis
     << "\nJumlah Episode: " << drama2.jumlah_episode << endl;
         
    return 0;
}