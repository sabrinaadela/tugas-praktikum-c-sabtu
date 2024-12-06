#include <stdio.h>

int main() {
    double saldo = 1000000; 
    double bunga = 0.02;    
    int bulan;

    printf("Saldo awal: Rp %.2f\n", saldo);

    for(bulan = 1; bulan <= 10; bulan++) {
        saldo += saldo * bunga; 
        printf("Saldo bulan ke-%d: Rp %.2f\n", bulan, saldo);
    }

    printf("Jumlah uang setelah 10 bulan: Rp %.2f\n", saldo);

    return 0;
}

