#include <stdio.h>

int main() {
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int N, count = 0;

    printf("Masukkan bilangan integer: ");
    scanf("%d", &N);

    printf("Isi array: ");
    for (int i = 0; i < 11; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Lokasi bilangan yang sama: ");
    for (int i = 0; i < 11; i++) {
        if (A[i] == N) {
            if (count > 0) {
                printf(" "); 
            }
            printf("%d", i); 
            count++;
        }
    }

    if (count > 0) {
        printf("\nADA\n");
    } else {
        printf("\nTIDAK ADA\n");
    }

    return 0;
}

