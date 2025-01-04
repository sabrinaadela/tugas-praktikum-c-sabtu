#include <stdio.h>

int main() {
    int A[11] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};  // Array dengan data dari dokumen
    int i;

    // Mencetak nilai genap dalam bentuk kotak
    printf("Nilai genap dalam bentuk kotak:\n");
    for(i = 0; i < 11; i++) {
        if(A[i] % 2 == 0) {
            printf("[%d] ", A[i]);  // Menampilkan nilai genap dalam format kotak
        }
    }

    printf("\n");  // Tambahkan baris baru setelah array ditampilkan

    return 0;
}

