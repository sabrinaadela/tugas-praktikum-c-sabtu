#include <iostream>
using namespace std;

int hitungLamaBekerja(int jamMasuk, int jamKeluar) {
    int lamaBekerja;
    if (jamKeluar >= jamMasuk) {
        lamaBekerja = jamKeluar - jamMasuk;
    } else {
        lamaBekerja = (12 - jamMasuk) + jamKeluar;
    }
    return lamaBekerja;
}

int main() {
    int jamMasuk, jamKeluar;
    
    cout << "Masukkan jam masuk (1-12): ";
    cin >> jamMasuk;
    
    cout << "Masukkan jam keluar (1-12): ";
    cin >> jamKeluar;
    
    int lamaBekerja = hitungLamaBekerja(jamMasuk, jamKeluar);
    
    cout << "Lama bekerja " << lamaBekerja << " jam" << endl;

    return 0;
}

