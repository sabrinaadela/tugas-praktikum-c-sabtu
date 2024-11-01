#include <stdio.h>

int hitungLamaParkir(int jamMasuk, int jamKeluar) {
    int lamaParkir;
    if (jamKeluar >= jamMasuk) {
        lamaParkir = jamKeluar - jamMasuk;
    } else {
        lamaParkir = (12 - jamMasuk) + jamKeluar;
    }
    return lamaParkir;
}

int hitungBiayaParkir(int lamaParkir) {
    int biaya;
    if (lamaParkir <= 2) {
        biaya = 2000;  // Biaya tetap untuk 2 jam pertama
    } else {
        biaya = 2000 + (lamaParkir - 2) * 500;  // Biaya tambahan per jam berikutnya
    }
    return biaya;
}

int main() {
    int jamMasuk, jamKeluar, lamaParkir, biaya;

    // Input jam masuk dan jam keluar
    printf("Masukkan jam masuk (1-12): ");
    scanf("%d", &jamMasuk);

    printf("Masukkan jam keluar (1-12): ");
    scanf("%d", &jamKeluar);

    // Hitung lama parkir dan biaya
    lamaParkir = hitungLamaParkir(jamMasuk, jamKeluar);
    biaya = hitungBiayaParkir(lamaParkir);

    // Tampilkan hasil
    printf("Lama parkir = %d jam\n", lamaParkir);
    printf("Biaya = %d\n", biaya);

    return 0;
}

