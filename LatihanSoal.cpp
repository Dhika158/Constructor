#include <iostream>
#include <string>
using namespace std;

class Barang {
private:
    string namaBarang;
    string kodeBarang;
    
public:

    Barang(string nama, string kode) {
        namaBarang = nama;
        kodeBarang = kode;
    }
    
    
    void tampilkanInfo() {
        cout << "Informasi Barang:" << endl;
        cout << "Nama Barang: " << namaBarang << endl;
        cout << "Kode Barang: " << kodeBarang << endl;
    }
};


int main() {
    
    Barang barang1("Laptop", "LPT001");
    Barang barang2("Smartphone", "SPH002");
    
    cout << "Barang 1:" << endl;
    barang1.tampilkanInfo();
    
    cout << "\nBarang 2:" << endl;
    barang2.tampilkanInfo();
    
    return 0;
}