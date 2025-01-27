
#include <stdio.h>

int main() {
    char A[10] = {'S', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A', '\0'};
    char C;
    int count = 0;

    printf("Masukkan karakter: ");
    scanf(" %c", &C);

    printf("Indeks karakter ditemukan: ");
    for (int i = 0; i < 10; i++) {
        if (A[i] == C) {
            if (count > 0) {
                printf(", "); 
            }
            printf("%d", i);
            count++;
        }
    }

    if (count > 0) {
        printf("\nADA\nJumlah kemunculan: %d\n", count);
    } else {
        printf("\nTIDAK ADA\n");
    }

    return 0;
}

 
