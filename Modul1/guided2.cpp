// Tipe Data Abstrak

#include <iostream>
#include <stdio.h>
using namespace std;
// Main Program

struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

int main()
{
struct Mahasiswa mhs1, mhs2;

mhs1.name = "Yanti";
mhs1.address = "Jatimulyo";
mhs1.age = 11;
mhs2.name = "Shila";
mhs2.address = "Yogya";
mhs2.age = 10;

cout <<"Mahasiswa 1\n";
cout <<"Name: " <<mhs1.name <<endl;
cout <<"Alamat: " <<mhs1.address <<endl;
cout <<"Umur: " <<mhs1.age <<endl;
cout <<"\nMahasiswa 2\n";
cout <<"Name: " <<mhs2.name <<endl;
cout <<"Alamat: " <<mhs2.address <<endl;
cout <<"Umur: " <<mhs2.age <<endl;

return 0;

}
