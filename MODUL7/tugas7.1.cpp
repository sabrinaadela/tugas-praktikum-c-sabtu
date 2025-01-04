#include <stdio.h>
#define n 10

int main() {
    int nilai[n];  
    int i;

    printf("Masukkan 10 nilai mahasiswa:\n");
    for(i = 0; i < n; i++) {
        printf("Nilai mahasiswa ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
    }

    printf("\nDaftar nilai mahasiswa yang lulus (nilai >= 60):\n");
    for(i = 0; i < n; i++) {
        if(nilai[i] >= 60) {
            printf("Nilai mahasiswa ke-%d: %d\n", i + 1, nilai[i]);
        }
    }

    return 0;
}

