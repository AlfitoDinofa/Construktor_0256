#include <iostream>
#include <string>
using namespace std;
class mahasiswa {
public:
    mahasiswa(int nim, string nama);
};

mahasiswa::mahasiswa(int nim, string nama) { //definisi constructor dengan parameter
    cout << "constructor dengan parameter Terpanggil" << endl;
    cout << "NIM  : " << nim << endl;
    cout << "Nama : " << nama << endl;
}
int main() {
    mahasiswa mhs(12345, "Fito");
    return 0;
}